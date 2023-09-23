/*
        A A A A A 
        B B B B B 
        C C C C C 
        D D D D D 
        E E E E E
*/


#include<stdio.h>

void pattern(int i, int j)
{
        for(i=65; i<=69; i++)
        {
            for(j=65; j<=69; j++)
            {
                printf("%c ",i);
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