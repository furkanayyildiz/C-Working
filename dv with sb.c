#include<stdio.h>

int bol(int a,int b,int c);
void main() {
	int a,b,c=0;
	printf("Enter 2 value to divide\n");
	scanf("%d,%d",&a,&b);
	printf("Result is %d",bol(a,b,c));
	
	
}

int bol(int a,int b,int c) {
	a=a-b;
	  c++;
	if((a)>=b) {
		return bol(a,b,c);
	}
	else 
	return c;

}






