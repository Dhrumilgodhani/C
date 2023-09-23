#include<stdio.h>

void find(int a)
{
         if(a % 5 ==0)
        {
                printf("yes");
        }
        else
        {
            printf("no");
        }
}

int main()
{
        int a;

        printf("enter value of a: ");
        scanf("%d",&a);

       
        find(a);

        return 0;

}
