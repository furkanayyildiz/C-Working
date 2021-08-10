#include<stdio.h>

void main(){

 int x,sum1=0,sum2=0;
 int nums[10];
 float avg;
 
 for(x=0;x<10;x++) {
 	printf("Enter a value");
 	scanf("%d",&nums[x]);
 } 
 for(x=0;x<10;x++) {
 	if(x%2==0){
 	sum1=sum1+nums[x];
 }
    else if(x%2==1){
	
    sum2=sum2+nums[x];
}
 }
avg=(float)((sum1+sum2)/10);
printf("%.3f",avg);
  
}

