#include <stdio.h>


void PrintNewLine(Username)
{
	printf("Hi %c \n",Username);
}


main(){
int hour, minute;
char colon;

hour = 17;
minute = 27;
colon = ':';

printf("The current is ");
printf("%i", hour);
printf("%c", colon);
printf("%i",minute);
printf("\n");

PrintNewLine('H');

printf("The current is %i%c%i\n", hour, colon, minute);


}

