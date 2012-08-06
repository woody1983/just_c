#include <stdio.h>

main(void)
{
	int i_number1=0;
	int i_number2=0;
	printf("\n Please input a number:");
	scanf("%d",&i_number1);
	printf("\n Pleaee input a number again:");
	scanf("%d",&i_number2);
	printf("\n I got the number you inputed,it is %d+%d=%d \n",i_number1,i_number2,i_number1+i_number2);
}
