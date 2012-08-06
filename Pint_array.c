#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int array_test[9]={1,2,3,4,5,6,7,8,9};
	int* Pz=&array_test[0];
	int i=0;

	for(i=0;i<9;i++)
		{
			printf("%d ",*Pz);
			Pz++;
		}
	Pz=NULL;
	printf("\n");

	int* p=(int*) malloc(5*sizeof(int));
	if(p=NULL)
	{
		printf("P memroy is filed.\n");
	}else
	{
		printf("P is OK,\n");
	}

	free(p);

}
