#include<stdio.h>

void print(int i, int n)
{
        for(i=n; i>=1; i--)
        {
                printf("%d, ",i);
        }
}

int main()
{
        int i,n;

        printf("enter value of n");
        scanf("%d",&n);

        print(i,n);
        return 0;

}