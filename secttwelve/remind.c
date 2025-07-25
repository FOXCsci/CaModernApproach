/* Prints a reminder list based on things the user inputs */
/* STILL IN PROGRESS, NEED IMPLEMENT SORTING BY TIME AND YEARLY CALENDAR*/
	
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */

int read_line(char str[], int n);

int main(void)
{
  char reminders[MAX_REMIND][MSG_LEN+9]; /* +9 is accounting for the day, time, space between, and null character*/
  char day_str[3], time_str[6] = "00:00",msg_str[MSG_LEN+1];
  int day, hours, mins, i, j, num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter day, time, and reminder: ");
    /* Read day*/
	scanf("%2d", &day);
    if (day == 0)
      break;
	else if (day > 31 || day < 0) {
		printf("Error: Day is not in between 1 and 31 (inclusive) \n");		
		while(getchar() != '\n') {
			; /* Clear buffer */
		}
		continue;
    ; /* Clea	}	
    sprintf(day_str, "%2d", day);

	/* Read time*/
	scanf("%2d:%2d", &hours, &mins);	
	sprintf(time_str, "%2.2d:%2.2d", hours, mins);

	/* Read msg*/

    read_line(msg_str, MSG_LEN);


    for (i = 0; i < num_remind; i++) {
    	if (strcmp(day_str, reminders[i]) < 0) {
			for (; i < num_remind; i++) {
				if(strcmp(time_str, &reminders[i][2]) < 0) {
					break;
				}
			}
			break;
		}
	}
	
    for (j = num_remind; j > i; j--) {
      strcpy(reminders[j], reminders[j-1]);
	}

    strcpy(reminders[i], day_str);
	strcat(reminders[i], " ");
	strcat(reminders[i], time_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Reminder\n");
  for (i = 0; i < num_remind; i++)
    printf(" %s\n", reminders[i]);

  return 0;
}


int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}

