#include <stdio.h>

int bigger(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

main(void)
{
	int number_a;
	int number_b;
	printf("\n Please input a number:");
	scanf("%d%d",&number_a,&number_b);
	int res;
	res=bigger(number_a,number_b);
	printf("\nThe Bigger Number is %d\n",res);
}
