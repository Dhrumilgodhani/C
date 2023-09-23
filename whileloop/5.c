/*
	2 4 6 8 10
	2 4 6 8 10
	2 4 6 8 10
	2 4 6 8 10
	2 4 6 8 10
		
*/


#include<stdio.h>
int main()
{
	int  i=2;
	do
	{
	  int j=2;
	  while(j<=10)
	  {
		printf("%d ",i);
		j+=2;
	  }
	  printf("\n");
	  i+=2;
	 }
	 while(i<=10);
	return 0;
}