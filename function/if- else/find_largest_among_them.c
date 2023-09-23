#include<stdio.h>

void find(int a, int b)
{
        if(a>b)
        {
            printf("a is big");

        }
        else if(b>a)
        {
            printf("b is big");

        }

}

int main()
{
    int a, b;

    printf("enter a value");
    scanf("%d",&a);

    printf("enter b value");
    scanf("%d",&b);

    find(a,b);

    return 0;
}