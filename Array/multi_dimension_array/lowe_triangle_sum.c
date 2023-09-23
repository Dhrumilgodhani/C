#include<stdio.h>
int main()
{
	int arr[3][3], i ,j , total;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("enter value arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n");
	
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d  ",arr[i][j]);

			if(j<i)
			{
				total += arr[i][j];
			}

		}
		printf("\n");
	}

	printf(" lower triangle elements total is :  %d",total);

		
	return 0;
}