// write c program to print given array odd-even number sum.


#include <stdio.h>


int main()
{
    int arr[10];
    int i,oddSum=0,evenSum=0;

	for(i=0; i<10; i++)
	{
		printf(" enter numbers ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<10; i++)

	{
        	if(arr[i] %2 ==0)
		{
        		evenSum += arr[i];
        	}
    		else
		{
    			oddSum += arr[i];
        	}
    	}
    printf("\t\t The sum of odd numbers are:\t %d",oddSum);
    printf("\n\t\t The sum of even numbers are:\t %d",evenSum);
    
    return 0;
}