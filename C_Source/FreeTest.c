#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int* p=(int*) malloc(10*sizeof(int));
	if(p==NULL)
	{
		printf("Oh...Shit...\n");
		return;
	}

	printf("p is %p\n",p);	
	free(p);
	printf("p is %p\n",p);
	
	p=NULL;

}
