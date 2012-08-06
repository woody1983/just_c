#include <stdio.h>

main(void)
{
        int score[6][3]={{0},{0},{0}};
	int i=0,j=0;
	int k=0;
	int sum[3]={0};
	double average[3]={0.0};

	printf("Please input everyone score:\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&score[i][j]);
			
			sum[j]=sum[j]+score[i][j];
		}
	}
	printf("Total Score: %d,%d,%d\n",sum[0],sum[1],sum[2]);
	/* printf("%d\n",score[0][1]); */
	
	printf("AVG Score is: ");
	for(k=0;k<3;k++)
	{
		average[k]=sum[k]/3.0;
		printf("%.2f; ",average[k]);
	}
	printf("\n--EOF--\n");
	
}

