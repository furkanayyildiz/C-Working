/*
#include<stdio.h>
void factorial(int x);
void main() {
	int num;
	printf("Please enter a number for calculate of factorial: ");
	scanf("%d",&num);
    factorial(num);	
}

void factorial(int x) {
	int fact=1,y;
	for(y=2;y<=x;y++)
	fact=fact*y;
	printf("%d",fact);
}
*/
////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int factorial(int x);
void main(){
	int num;
	scanf("%d",&num);
	printf("%d",factorial(num));
}
   int factorial(int x) {
   	int fact=1,y;
   	 for(y=2;y<=x;y++)
   	  fact=fact*y;
   	return fact;
   }
*/
///////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>
int max(int num1, int num2);
void main () {

   int a = 100;
   int b = 300;
   int ret;
 
   ret = max(a, b);
   printf( "Max value is : %d\n", ret );
}
int max(int num1, int num2) {
    int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
*/
/////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
void f1();
void main() {
	
	f1();
	f1();
}
void f1()
{
	printf("Programming is fun.\n");
}
*/
/////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
void calculateTriangularNumber(int n);
void main() {
	calculateTriangularNumber(10);
	calculateTriangularNumber(20);
	calculateTriangularNumber(50);
	
}

void calculateTriangularNumber(int n) {
	int i,TriangularNumber=0;
	for(i=0;i<=n;i++){
    TriangularNumber += i;		
 }
 printf("Triangular number %d is %d\n",n,TriangularNumber);
}
*/
/////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
void gcd(int u, int v);
void main() {
	gcd(150,35);
	gcd(1026,405);
	gcd(83,240);
}

void gcd(int u,int v){
	int temp;
	printf("The gcd of %d and %d is ",u,v);
	while (v!=0) {
		temp=u%v;
		u=v;
		v=temp;
	}
	printf("%d\n",u);
}
*/
/////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int gcd(int u,int v);
int main() {
	int result;
	
	result=gcd(150,35);
	printf("The gcd of 150 and 35 is %d\n",result);
	result=gcd(1026,405);
	printf("The gcd of 1026 and 405 is %d\n",result);
	printf("The gcd of 83 and 240 is %d\n",gcd(83,240));
	
	
	return 0;
}
int gcd(int u,int v) {
	int temp;
	while(v!=0) {
		temp= u%v;
		u=v;
		v=temp;
	}
	return u;
}
*/
////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
float absoluteValue(float x);
void main() {
	float f1=-15.5,f2=20.0, f3=-5.0;
	int il=-716;
	float result;
	
	result = absoluteValue(f1);
	printf("result= %.2f\n",result);
	printf("f1= %.2f\n",f1);
	
	result=absoluteValue(f2) + absoluteValue(f3);
	printf("result= %.2f\n",result);
	
	result=absoluteValue((float) il);
	printf("result= %.2f\n",result);
	
	result=absoluteValue(il);
	printf("result= %.2f\n",result);
	
	printf("%.2f\n",absoluteValue(-6.0) /4);
	
}

float absoluteValue(float x) {
	if(x<0)
	x=-x;
	return x;
}
*/
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int fib(int n);
void main() {
	int x; // which term we want ?
	scanf("%d",&x);
	printf("%d",fib(x));
}
int fib(int n) {
	int a=1,b=1;
	int c,i;
	for(i=3;i<=n;i++) {
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}

