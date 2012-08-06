#include <stdio.h>

main(void)
{
        int i_number1=0;
        int i_number2=0;
        printf("\n Please input a number:");
        scanf("%d",&i_number1);
        if (i_number1<10)
        {
                printf("%d<10\n",i_number1);
        }
	else
	{
		printf("%d>=10\n",i_number1);
	}
}

