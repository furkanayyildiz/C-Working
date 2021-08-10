#include<stdio.h>

void main()
{
	
/*	int a,x,y;
	printf("Enter first value: ");
	scanf("%d",&x);
	printf("Enter second value: ");
	scanf("%d",&y);
	for( a=x; a<y; a=a+1){
		if(a%4==0)
		continue;
		printf("the value of a=%d\n",a);
	}
*/
/////////////////////////////////////////
 /* int n,facto=1,x=2;
scanf("%d",&n);
while(x<=n) {
	facto=facto*x;
	x++;
}
 printf("%d",facto); 
 */
///////////////////////////////////
/* 
 int n, facto=1;
 printf("Enter a value");
 scanf("%d",&n);
 while(n!=0) {
 	facto*=n;
 	n--;
 }
 printf("%d",facto);
 */
///////////////////////////////////
/* 
 int x,y;
 
 for(x=0,y=0;x<5&&y<10;x++,y++) {

 		printf("x: %d y: %d\n",x,y); 
	
 	} 
*/

 int g;
g=0;
while(g<8) {
	g++;
	printf("%d\n",g);
}

int x,y;
 for(x=0;x<3;x++){
 	for(y=0;y<4;y++){
 		printf("x: %d y: %d\n",x,y);	
	 }
 }
  
  
  	
getch();
}
