#include<stdio.h>

void area(float width, float length)
{
        float a;

        a = width * length;
        printf("area of rectangle is: %f",a);

        printf("");
}

int main()
{
    float width,length;

    printf("enter width: ");
    scanf("%f",&width);

    printf("enter length");
    scanf("%f",&length);

    area(width,length);

    return 0;
}