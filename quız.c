#include <stdio.h>
#include <stdlib.h>
struct student{
 char name[15];
 char surname[15];
 char stdID[15];
 float gpa;
};
int main(){
 int i,number;
 struct student* students=(struct student*)malloc(3*sizeof(struct student));
 struct student* students2=(struct student*)malloc(3*sizeof(struct student));
 //struct student* tempstudent = (struct student*) malloc(sizeof(struct student));
 //struct student tempstudent;
 printf("Enter number of students:");
 scanf("%d",&number);
 FILE*fptr;
 fptr=fopen("C:\student.txt","w");
 if (fptr==NULL){
  printf("Worning It is an ERROR!!!");
  exit(1);
 }
 for(i=0; i<number; i++){
  printf("Student %d\nEnter name:",i+1);
  scanf("%s", (students+i)->name);
  printf("Srundent %d\nEnter Surname:",i+1);
  scanf("%s", (students+i)->surname);
  printf("Student ID:");
  scanf("%s", (students+i)->stdID);
  printf("Enter the marks:");
  scanf("%f",&((students+i)->gpa) );
  fprintf(fptr,"\nName: %s \nMarks=%d \n", students[i].name, (students+i)->gpa);
 }
 int j=0;
 
    fclose(fptr);
 
 fptr=fopen("C:\student.txt","r");
 
 
     
    for(j = 0; j < number; j++){
     fread(students2+j,sizeof(struct student),1,fptr);
     printf("deneme");
  printf ("%s\n", (students2+j)->name);
 }
    
 fclose(fptr);
 return 0;
}
