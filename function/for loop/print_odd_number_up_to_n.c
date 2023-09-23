#include<stdio.h>

void odd(int i, int n)
{

        for(i=0; i<=n; i+=i)
        {
            if(i%2 != 0)
            {
                printf(" \t\total of odd number %d ",i);
            }
        }
        
}

int main()
{
        int i,n= 10;

        odd(i,n);

        return 0;

}