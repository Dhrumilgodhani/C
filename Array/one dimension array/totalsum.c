// write c program to print given array total elements sum.


#include<stdio.h>

int main()
{
	int i,arr[10],totalsum=0;
	
	for(i=0; i<10; i++)
	{
		
		printf ("enter value ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<10; i++)
	{
		totalsum += arr[i];
		
	}

	
	printf(" \t\t total sum is : %d",totalsum);

	return 0;
}

	