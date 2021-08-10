/*
#include<stdio.h>
void function(int nums[]);
void main(){
	int i,arr[5];
	for(i=0;i<5;i++) {
		printf("Please enter a value:");
		scanf("%d",&arr[i]);
    }
    function(arr);
}

void function(int nums[]) {
	int j,min,max;
	max=nums[0], min=nums[0];
	for(j=1;j<=4;j++) {
	  	if(nums[j]>max)
	  	  max=nums[j];
	  	if(nums[j]<min)
	  	  min=nums[j];
	}
	printf("Max value is %d \n",max);
	printf("Min value is %d \n",min);
}
*/
#include <stdio.h>
float calculateSum(float age[]);
int main() {
    float age[] = {23.4, 55, 22.6, 3, 40.5, 18};
    
    printf("Result = %.2f", calculateSum(age));
    return 0;
}
float calculateSum(float age[]) {
	int i;
  float sum = 0.0;
  for ( i = 0; i < 6; ++i) {
		sum += age[i];
  }
  return sum;
}
