#include<stdio.h>

void main(){
	float student[5],sum=0.0;
	int i=0;
	
	for(;i<5;i++){
		printf("Enter marks for %d student:",i+1);
		scanf("%f",&student[i]);
	}
	for(;i<5;i++){
		sum+=student[i];
	}
	printf("The sum of marks %.2f",sum);
}
