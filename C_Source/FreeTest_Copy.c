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

	int* z=p;
	free(p);
	free(z);
	

}
