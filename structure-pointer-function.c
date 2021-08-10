#include<stdio.h>
#include<string.h>
/*
struct student{
	char name[20];
	int roll_no;
	int marks;
};
void fun_st(char name[],int roll_no,int marks);
void main(){
	struct student stu={"Furkan",1,80};
	struct student uts={"Damla",2,75};
	fun_st(stu.name,stu.roll_no,stu.marks);                     // 1.
	fun_st(uts.name,uts.roll_no,uts.marks);
	
	strcpy(stu.name,"fatih");
	printf("New name:%s",stu.name);
}
void fun_st(char name[],int roll_no,int marks){
	printf("Name is:%s\n",name);
	printf("No is:%d\n",roll_no);
	printf("Marks is:%d\n",marks);
	
}
*/
////////////////////////////////////////////////////////////////////////////////

struct employee
{
    char name[20];
    int age;
    char doj[10]; // date of joining
    char designation[20];
};
 
void print_struct(struct employee *);
 
int main()
{
    struct employee dev = {"Jane", 25, "25/2/2015", "Developer"};
    struct employee ved ={"Tom",30,"20/12/2018", "Developer"};
    print_struct(&dev);
    print_struct(&ved);
    return 0;
}                                                                                // 2.      important example      
                                            
void print_struct(struct employee *ptr)
{
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Date of joining: %s\n", ptr->doj);
    printf("Age: %s\n", ptr->designation);
    printf("\n");
}

////////////////////////////////////////////////////////////////////////////////
/*
struct company
{
    char name[20];
    char ceo[20];
    float revenue; // in $
    float pps; // price per stock in $
};
 
void print_struct(struct company str_arr[]); 
int main()
{
    struct company companies[3] = {
                           {"Country Books", "Tim Green", 999999999, 1300 },
                           {"Country Cooks", "Jim Green", 9999999, 700 },
                           {"Country Hooks", "Sim Green", 99999, 300 },
                   };
    print_struct(companies);
 
    return 0;                                                                           // 3.
} 
void print_struct(struct company str_arr[])
{
    int i;
 
    for(i= 0; i<3; i++)
    {
        printf("Name: %s\n", str_arr[i].name);
        printf("CEO: %d\n", str_arr[i].ceo);
        printf("Revenue: %.2f\n", str_arr[i].revenue);
        printf("Price per stock : %.2f\n", str_arr[i].pps);
        printf("\n");
    }
}
*/
////////////////////////////////////////////////////////////////////////////////
/*
void function(int a,int b,int *sum2,int *diff2,int *prod2);
void main(){
	int x=30,y=50,sum,diff,prod;
	function(x,y,&sum,&diff,&prod);
	                                                          // returning more than value from function --- important example
	printf("%d + %d=%d\n",x,y,sum);
    printf("%d - %d=%d\n",x,y,diff);
	printf("%d * %d=%d\n",x,y,prod);	                      // 4.
}
void function(int a,int b,int *sum2,int *diff2,int *prod2){
	*sum2=a+b;
	*diff2=a-b;
	*prod2=a*b;
}
*/
////////////////////////////////////////////////////////////////////////////////
/*
void compare(int a,int b,int *add_max,int *add_min);
void main(){
	int x,y,max,min;
	
	printf("Enter a two value");
	scanf("%d%d",&x,&y);
	compare(x,y,&max,&min);
	
	printf("The max value is:%d\nThe min value is%d",max,min);
	
}
void compare(int a,int b,int *add_max,int *add_min){                            // 5.   important example
	
	if(a>b){
		*add_max=a;
		*add_min=b;
	}
	else
         *add_max=b;
		 *add_min=a;	
}
*/
//////////////////////////////////////////////////////////////////////////////////
/*
void *fun();
void main()
{
    int *ptr;
    ptr=fun();
    printf("%d",*ptr);

}
void *fun()
{
    int *point;
    *point=12;  
    return point;
} 
*/  
