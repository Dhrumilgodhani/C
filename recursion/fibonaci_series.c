#include<stdio.h>

int fibonaci(int a)
{
    if(a == 0)
    {
        return 0;
    }
    else if(a == 1)
    {
        return 1;
    }

    return fibonaci( a-1) + fibonaci(a-2);
}

int main()
{
    for(int i=0; i<=10; i++)
    {
        printf("%d,  ",fibonaci(i));
    }
}