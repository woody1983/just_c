#include<stdio.h>
#include<stdlib.h>

main(void)
{
	int* p=(int*) malloc(10*sizeof(int));
	
	

	if(p==NULL)
        {
                printf("Oh...Shit!");
                return;
        }

        int i=0;

	for(i=0;i<10;i++)
        {
                printf("%d \n",*(p+i));
        }


        for(i=0;i<10;i++)
        {
                *(p+i)=i;
        }

        for(i=0;i<10;i++)
        {
                printf("%d \n",*(p+i));
        }
        free(p);}
