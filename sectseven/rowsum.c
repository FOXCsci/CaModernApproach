/*Program that gets a 5x5 array of 5 quiz grades of 5 studetns and computees the total score and
average score for each student, and the average score, high, score, and low score for each quiz*/

#include <stdio.h>

int main(void) {
	int i, j, current_score = 0; /*current_score stores the current highest/lowest score*/
	float total = 0.0f; /*Used for average and total scores*/
	int arr[5][5]; /*arr[quiz n][student n]*/
		
	for (i = 0; i < 5; i++) {
		printf("Enter quiz grades for student %d: ", i+1);
		for (j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);	
		}
	}
	
	printf("Total scores for each student: ");
	for(i = 0; i < 5; i++) {
		total = 0.0f;
		for (j = 0; j < 5; j++) {
			total += arr[i][j];
		}
		printf("%.1f ", total);
	}
	printf("\n"); 

	printf("Average scores for each student: ");
	for(i = 0; i < 5; i++) {
		total = 0.0f;
		for (j = 0; j < 5; j++) {
			total += arr[i][j];
		}
		total /= 5;
		printf("%.2f ", total);
	}
	printf("\n");

	printf("Average scores for each quiz: ");
	
	for(i = 0; i < 5; i++) {
		total = 0.0f;
		for (j = 0; j < 5; j++) {
			total += arr[j][i];
		}
		total /= 5;
		printf("%.2f ", total);
	}
	printf("\n");

	printf("High Scores for each quiz: ");	
	for(i = 0; i < 5; i++) {
		current_score = 0;
		for (j = 0; j < 5; j++) {
			if (arr[j][i] > current_score) current_score = arr[j][i];
		}
		printf("%d ", current_score);
	}
	printf("\n");
	
	printf("Low Scores for each quiz: ");	
	for(i = 0; i < 5; i++) {
		current_score = 100;
		for (j = 0; j < 5; j++) {
			if (arr[j][i] < current_score) current_score = arr[j][i];
		}
		printf("%d ", current_score);
	}
	printf("\n");

	return 0;
}
