// write c program to print given array odd-even postion elements number sum.


  #include<stdio.h>
int main()
{
	int arr[10],i, evensum=0, oddsum=0;

	for(i=0; i<10; i++)
	{
		printf("enter value arr[%d] ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<10; i++)
	{
		if(i % 2 == 0)
		{
			evensum += arr[i];
		}
		else
		{
			oddsum += arr[i];
		}
	}
	
	printf("\t\t odd number postion elements sum:  %d",oddsum);
	printf("\n\t\t even number postion elements sum: %d",evensum);

	return 0;
}

