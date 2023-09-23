#include<stdio.h>

void perfect(int i,int n,int sum)
{
    for(i=1 ; i<n ; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("perfect number");
    }
    else
    {
        printf("not perfect");
    }
}

int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    perfect(i,n,sum);
}