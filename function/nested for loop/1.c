/*
        1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
*/



#include<stdio.h>

void pattern(int i, int j)
{
        for(i=1; i<=5; i++)
        {
            for(j=1; j<=5; j++)
            {
                printf("%d ,",j);
            }
            printf("\n");
        }
}

int main()
{
        int i, j;

        pattern(i,j);

        return 0;
}