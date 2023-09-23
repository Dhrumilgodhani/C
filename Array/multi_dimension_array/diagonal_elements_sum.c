#include<stdio.h>
int main()
{
	int arr[5][5], i ,j , total;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("enter value arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d  ",arr[i][j]);
		 	
			if(i==j)
			{
				total += arr[i][j];
			}
			
			
		}
		printf("\n");
	}

	printf(" diagonal elements total is :  %d",total);

		
	return 0;
}