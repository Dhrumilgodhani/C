#include<stdio.h>

void print(int i, int n, int mul)
{
        while(i<=n)
        {
            printf("%d ",mul);
            mul *= 2;
            i++;
        }
}

int main()
{
        int i=1,n,mul =1 ;

        printf("enter value of n");
        scanf("%d",&n);

        print(i,n,mul);
        return 0;

}