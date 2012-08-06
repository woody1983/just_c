#include <stdio.h>
main(void)
{
	int mark=0;
	printf("\n Please input a CodeNumber: ");
	scanf("%d",&mark);
	if(mark>=90)
		printf("A\n");
	if(mark>70 && mark <90)
		printf("B\n");
	if(mark<=70)
		printf("C\n");
}
