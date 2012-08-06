#include <stdio.h>

swap2var(int *a,int *b)
{
	int temp;
	printf("a is %d,b is %d \n",*a,*b);
	temp=*a;
	*a=*b;
	*b=temp;
	printf("a is %d,b is %d \n",*a,*b);
}
main(void)
{
	int num1=3;
	int num2=5;
	printf("num1 is %d,num2 is %d\n",num1,num2);
	swap2var(&num1,&num2);
	printf("num1 is %d,num2 is %d\n",num1,num2);
}
