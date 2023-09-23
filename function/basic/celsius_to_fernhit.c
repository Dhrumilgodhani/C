#include<stdio.h>

void convert(float celsius)
{
        float a;
        a = (celsius*9/5)+32;
        printf("fernhit is: %f",a);
}

int main()
{
    float celsius;

    printf("enter value of celsius");
    scanf("%f",&celsius);

    convert(celsius);

    return 0;
}