#include <stdio.h>
main(void)
{
	int i=1;
	int sum=0;
	while(i<=100)
	{
		sum=sum+i;
		i=i+1;
		printf("%d\n",sum);
	}
	printf("The Number count is :%d\n",sum);
}
