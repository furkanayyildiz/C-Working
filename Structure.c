/*
#include<stdio.h>
struct date
	{
		int month;
		int day;
		int year;
	};
void main() {
	
	struct date today;
	
	today.day=14;
	today.month=11;
	today.year=2019;
	
	printf("Today's date is %d/%d/%d.\n",today.day,today.month,today.year);
	
	
}
*/
#include<stdio.h>
struct date
{
	int month;
	int day;
	int year;
};
void main() {
	struct date today,tomorrow;
	const int daysPerMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter today's date (mm dd yyyy) : ");
	scanf("%d%d%d",&today.month,&today.day,&today.year);
	
	if(today.day != daysPerMonth[today.month -1] ) {
		tomorrow.day=today.day +1;
		tomorrow.month=today.month;
		tomorrow.year=today.year;
	}
	else if (today.month == 12) {
		tomorrow.day=1;
		tomorrow.month=1;
		tomorrow.year= today.year +1;
	}
	else {
		tomorrow.day=1;
		tomorrow.month=today.month +1;
		tomorrow.year= today.year;
	}
	
	printf("Tomorrow's date is %d/%d/%d.\n", tomorrow.month,tomorrow.day,tomorrow.year %100);
	
	
}























