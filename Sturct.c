#include<stdio.h>
struct student {
	char name[10];
	char surname[10];
	int grade1;
	int grade2;
	int grade3;
};

void main() {
	struct student stdArr[3];
	int i,j;
	for(i=0;i<3;i++) {
		printf("Enter the name of the student %d: ",i+1);
		scanf("%s",&stdArr[i].name);
		printf("Enter the surname of the student %d: ",i+1);
		scanf("%s",&stdArr[i].surname);
		printf("Enter the first grade of the student %d: ",i+1);
		scanf("%d",&stdArr[i].grade1);
		printf("Enter the second grade of the student %d: ",i+1);
		scanf("%d",&stdArr[i].grade2);
		printf("Enter the third grade of the student %d: ",i+1);
		scanf("%d",&stdArr[i].grade3);
	}
	for(j=0;j<3;j++) {
		printf("The avarage of the student %d is:%d",j+1,stdArr[j].grade1+stdArr[j].grade2+stdArr[j].grade3)/3;
	}
}
