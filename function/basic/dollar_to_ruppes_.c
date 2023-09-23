#include<stdio.h>
void convert(int dollar)
{
        float a;
        a = dollar*80;

        printf("in ruppes : %f",a);
}

int main()
{
        int dollar;

    printf("enter dollar: ");
    scanf("%d",&dollar);

    convert(dollar);
    return 0;
}