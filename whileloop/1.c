/*
	5 5 5 5 5
	4 4 4 4 4 
	3 3 3 3 3
	2 2 2 2 2
	1 1 1 1 1 
	
*/


#include<stdio.h>
int main()
{
	int i=5,j;

	do
	{
		j=5;
		while(j>=1)
		{
			printf("%d ",i);
			j--;
		}
		printf("\n");
		i--;
	}
	while(i>=1);
	return 0;
}