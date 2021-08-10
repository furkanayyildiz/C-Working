#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	
	char name[15];
	char surname[15];
	char stdID[3];
	float GPA;
};
void main(){
	
	struct student *student1=(struct student*) malloc(2*sizeof(struct student));
	struct student *student2=(struct student*) malloc(2*sizeof(struct student));
	
	struct student *tempst = (struct student*) malloc(sizeof(struct student));
	
	int i;
	for(i=0; i<2; i++){
		
		printf("Enter the name: ");
		scanf("%s", (student1+i)->name);
		printf("Enter the surname: ");
		scanf("%s", (student1+i)->surname);
		printf("Enter the studentID: ");
		scanf("%s", (student1+i)->stdID);
		printf("Enter the GPA: ");
		scanf("%f", &(student1+i)->GPA);
}
		FILE *fpointer1;
		FILE *fpointer2;
		FILE *fpointer4;
        fpointer1=fopen("student1.txt","w");
		for(i=0; i<2; i++){
			
			fwrite((student1+i), sizeof(struct student), 1, fpointer1);
		}
		fclose(fpointer1);
		
		
		for(i=0; i<2; i++){
				printf("Enter the name: ");
				scanf("%s", (student2+i)->name);
				printf("Enter the surname: ");
				scanf("%s", (student2+i)->surname);
				printf("Enter the studentID: ");
				scanf("%s", (student2+i)->stdID);
				printf("Enter the GPA: ");
				scanf("%f", &(student2+i)->GPA);
		}
		
			
		fpointer2=fopen("student2.txt","w");
		for(i=0; i<2; i++){
			fwrite((student2+i), sizeof(struct student), 1, fpointer2);
		}
		fclose(fpointer2);
		
		fpointer1=fopen("student1.txt","r");
		fpointer2=fopen("student2.txt","r");
		fpointer4=fopen("student4.txt","w");
		
		//Birinci dosya yazýlýyor.................
		for(i=0; i<2; i++){
			fread((student1+i), sizeof(struct student), 1,fpointer1);
			fwrite((student1+i),sizeof(struct student), 1,fpointer4);
	    }
	    
	   // rewind(fpointer1);
	    // Ýkinci dosya karþýlaþtýrýlarak yazýlýyor Emre
		int j;
		int control = 0;
		for(i=0; i<2; i++){
			fread(tempst, sizeof(struct student), 1,fpointer2);
			printf("\nGirdi1%s\n",tempst->stdID);
			control = 0;
		//	rewind(fpointer1);
			for(j=0; j<2; j++){
				printf("\nGirdi2%s\n",(student1+j)->stdID);
				if(strcmp(tempst->stdID,(student1+j)->stdID) == 0){
					printf("\nGirdi3%s\n",tempst->stdID);
				    control = 1;
					break;	
			    }
			}
			if(control == 0)
				fwrite(tempst,sizeof(struct student), 1,fpointer4);
		}	    
	    
	    
			
			/*printf("Name from 1st file",(student1+i)->name);
			fread((student2+i), sizeof(struct student), 1,fpointer2);
			printf("Name from 2nd file",(student2+i)->name);
			if(strcmp((student1+i)->stdID),((student2+i)->stdID)==0){
				fwrite((student+i),sizeof(struct student), 1,fpointer4);
			}*/
		fclose(fpointer1);
		fclose(fpointer2);
		fclose(fpointer4);
		}
	
	
