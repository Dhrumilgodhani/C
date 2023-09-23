/*
        2 2 2 2 2 
        4 4 4 4 4 
        6 6 6 6 6 
        8 8 8 8 8 
        10 10 10 10 10 

*/


#include<stdio.h>

void pattern(int i, int j)
{
        for(i=2; i<=10; i+=2)
        {
            for(j=1; j<=5; j++)
            {
                printf("%2d  ",i);

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