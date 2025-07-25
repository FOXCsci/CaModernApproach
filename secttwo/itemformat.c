#include <stdio.h>
// Program that formats product information entered by user

int main(void) {
	int day, month, year;
	int item_number;
	float unit_price;
	printf("Enter item number: ");
	scanf("%d", &item_number);
	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("\nItem\t\tUnit\t\tPurchase\n"
			"    \t\tPrice\t\tDate\n"
			"%-3d\t\t$ %4.2f\t\t%2d/%2d/%4d\n", item_number, unit_price, month, day, year); 
		
	return 0;	
}
