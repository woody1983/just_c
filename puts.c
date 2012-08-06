#include <stdio.h>
main(void)
{
	int num=10;
	int *Pnum1=&num;
	*Pnum1=20;
	printf("Then Pnum1=20 num is %d\n",num);
	int *Pnum2=Pnum1;
	*Pnum2=30;
	printf("Then Pnum2=30 num is %d\n",num);
}
