#include<stdio.h>

void totalodd(int i, int total)
{
        for(i=0; i<=10; i++)
        {
            if(i % 2 == 0)
            {
                total += i;
                printf(" %d ",i,total);
            }
            
        }
        printf("total is: %d",total);
}

int main()
{
        int i, total=0;

        totalodd(i,total);
        return 0;
}