#include<stdio.h>
#include<stdlib.h>

main(void)
{
	int num=10;
	int* p=&num;
	int* ptest=p;
	int ptest1=*p;

	printf("p is %d.\n",p);
	printf("*p is %d.\n",*p);
	printf("ptest is %d.\n",ptest);
	printf("*ptest is %d.\n",*ptest);
	printf("ptest1 is %d.\n",ptest1);
}

