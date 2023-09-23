/*
    A B C D E
    F G H I J 
    K L M N O
    P Q R S T 
    U V W X Y
*/


#include<stdio.h>
void pattern(int i, int j, int k )
{
        while(i<=5)
        {
                j=1;
                while(j<=5)
                {
                        j++;
                        printf("%c ",k);
                        k++;
                }
                printf("\n");
                i++;
        }
}

int main()
{
    int i=1, j,k=65;

    pattern(i,j,k);

    return 0;

}
