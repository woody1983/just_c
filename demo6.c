#include <stdio.h>

int PrintTwice(char phil);


int main()
{
	char agr='i';
	char test='d';
	printf("%c \n", agr);

PrintTwice(test);
}

int PrintTwice(char phil)
{
	printf("%c %c \n", phil, phil);
}

