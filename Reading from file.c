#include<stdio.h>

void main() {
	int n;
	FILE*fptr;
	((fptr=fopen("D:\\FURKAN\program.txt","r"))==NULL);
	{
		printf("Error! opening file");
		exit(1);
	}
	fscanf(fptr,"%d",&n);
	printf("Value of n=%d",n);
	fclose(fptr);
}
