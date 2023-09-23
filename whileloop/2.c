/*
	1 1 1 1 1
	2 2 2 2 2
	3 3 3 3 3 
	4 4 4 4 4 
	5 5 5 5 5 
*/


#include<stdio.h>
int main()
{
	int i=1;

	do
	{
		 int j=1;
		while(j<=5)
		{
			printf("%d ",i);
			j++;
		}
		printf("\n");
		i++;
	}
	while(i<=5);
	return 0;
}