#include<stdio.h>

void print(int i)
{
        i=65;
        while(i<=90)
        {
                printf("%c-%c   ",i,i+32);
                i++;
        }
}

int main()
{
    int i;

    print(i);
    return 0;
}