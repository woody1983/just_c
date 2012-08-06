#include <stdio.h>

main(void)
{
	int score[6];
	int sum=0;
	int i=0;
	double average_score;
	printf("Please input 6's score:");

	for(i=0; i<6; i++)
	{
		scanf("%d",&score[i]);
		sum=sum+score[i];
	}	
	
	average_score=sum/6.0;
	printf("Sum is %d,avg_score is %.1f\n",sum,average_score);

}
