/*
#include<stdio.h>

void main() {
	int count=10,x;
	int *int_pointer;
	
	int_pointer=&count;
	x=*int_pointer;
	
	printf("count=%d,x=%d,int_pointer=%d\n",count,x,*int_pointer);
}
*/
////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>

void main() {
	char c='Q';
	char *char_pointer=&c;
	
	printf("%c %c\n ",c,*char_pointer);
	
	c='/';
	printf("%c %c\n ",c,*char_pointer);
	
	*char_pointer='?';
	printf("%c %c",c,*char_pointer);
	
}
*/
////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
void main() {
	int i1,i2;
	int *p1,*p2;
	
	i1=5;
	p1=&i1;
	i2=*p1 / 2 + 10;
	p2=p1;
	
	printf("i1=%d, i2=%d, *p1=%d, *p2=%d",i1,i2,*p1,*p2);
}
*/
////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
struct date
{
	int month;
	int day;
	int year;
};

void main() {
 	struct date today,*datePtr;
 	
 	datePtr=&today;
 	(*datePtr).month=11;
 	(*datePtr).day=25;
 	(*datePtr).year=2019;
 	
 	printf("Today's date is %d/%d/%.2d\n",today.month,(*datePtr).day,datePtr->year%100);
	
}
*/
////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
struct intPtrs
{
	int *p1;
	int *p2;
};
void main() {
int i1=100,i2;

struct intPtrs pointers;

pointers.p1=&i1;
pointers.p2=&i2;
*pointers.p2=-97;

printf("i1=%d , *pointer.p1=%d\n",i1,*pointers.p1);	
printf("i2=%d , *pointer.p2=%d\n",i2,*pointers.p2);	

}
*/
////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
struct entry
{
	int value;
	struct entry *next;
};
void main() {
	int i;
	struct entry n1,n2,n3;
	
	n1.value=100;
	n2.value=200;
	n3.value=300;
	
	n1.next=&n2;
	n2.next=&n3;
	n3.next=&n1;
	
	i=(*n1.next).value;
	printf("%d\n",i);
	
	printf("%d\n",n2.next->value);
	printf("%d",n3.next->value);
	}
*/
////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
struct entry
{
	int value;
	struct entry *next;
	
};
void main(){
	struct entry n1,n2,n3;
	struct entry *list_pointer=&n1;
	
	n1.value=100;
	n1.next=&n2;
                                                           	
	n2.value=200;                                         //impotant example
	n2.next=&n3;
	
	n3.value=300;
	n3.next=NULL;
	
	while(list_pointer != NULL) { //null a eþit olmayana kadar döndür
		printf("%d\n",list_pointer->value);
		list_pointer=list_pointer->next;
	}
	
}
*/	
////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
void test (int *int_pointer);
void main() {
	int i=50;
	int *p=&i;
	printf("Before *p=%d\n",*p);
	
	test(p);
	printf("After i=%d",i);
	
}	
void test (int *int_pointer) {
	*int_pointer=100;
}
*/
////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void exchange(int *pointer1,int *pointer2);
void main() {
	int v1=-5,v2=60;
	int *p1=&v1,*p2=&v2;
	printf("v1=%d , v2=%d\n",v1,v2);
	
	exchange(p1,p2);
	printf("v1=%d , v2=%d\n",v1,v2);
	
	exchange(&v1,&v2);
	printf("v1=%d , v2=%d\n",v1,v2);
	
}
void exchange(int *pointer1,int *pointer2) {
	int temp;
	temp=*pointer1;
	*pointer1=*pointer2;
	*pointer2=temp;
}	
	
		
