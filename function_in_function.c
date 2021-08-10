/*
#include<stdio.h>
int fact(int y);
void main() {
	int x;
	printf("Enter a positive value to calculate factorial: ");
	scanf("%d",&x);
	printf("Factorial of %d is %d",x,fact(x));
}
int fact(int y) {
	if(y>=1) 
	  return y*fact(y-1);
	else
	  return 1;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int fib(int n);
void main() {
	int x;
	printf("Please enter a term");
	scanf("%d",&x);
    printf("%d",fib(x));
}
int fib(int n) {
	if(n==1 || n==2)
	return 1;
	return fib(n-1)+fib(n-2);
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int fact(int);
int comb(int,int);
void main() {
	int x,y;
	printf("Please enter two number");
	scanf("%d%d",&x,&y);
	printf("comb is: %d",comb(x,y));
	
}
int comb(int a,int b) { // C(n,r)=n!/(r!(n-r)!)
	return fact(a)/(fact(b)*(fact(a-b)));
}
int fact(int i){
	if(i>=1)
	  return i*fact(i-1);
	else
	  return 1;  
	  
}
*/
///////////////////////////////////////////////////////////////////////////////////




