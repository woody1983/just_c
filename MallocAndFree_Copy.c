#include<stdio.h>
#include<stdlib.h>

main(void)
{
        int* p=(int*) malloc(10*sizeof(int));

        int i=0;

        for(i=0;i<10;i++)
        {
                *(p+i)=i;
        }

        for(i=0;i<10;i++)
        {
                printf("%d",*(p+i));
        }
	
	printf("\n");
		
        free(p);
}

