#include<stdio.h>

void convert(float feet)
{
    float a;
    a= feet * 12;
    printf("inches is: %f",a);
}

int main()
{
    float feet;

    printf("enter value of feet: ");
    scanf("%f",&feet);

    convert(feet);

    return 0;
}