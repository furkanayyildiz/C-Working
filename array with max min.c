#include<stdio.h>
void main() {
	int arr[3][4];
int sum,f,d,x,max,min;
int g[3];
for(f=0;f<3;f++) {
	for(d=0;d<4;d++) {
		printf("Enter a value");
		scanf("%d",&arr[f][d]);
	}
}
for(f=0;f<3;f++) {
	
	for(d=0;d<4;d++) {
		sum=sum+arr[f][d];
	}
	printf("Sum of the elements in row %d is : %d\n",f,sum);
	sum=0;
}
max=g[0],min=g[0];
for(x=1;x<=2;x++) {
	if(g[x]>max) 
	 max=g[x];
	if(g[x]<min)
	 min=g[x];
}
printf("Max value is:%d\n",max);
printf("Min value is:%d\n",min);
}

