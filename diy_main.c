#include <stdio.h>

int average(int a,int b,int c)
{
        return (a+b+c)/3;
}


int main(void)
{
        int a=10,b=20,c=30;
        int y = average(a,b,c);
        printf("This average is %d. \n",y);
}


