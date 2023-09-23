#include<stdio.h>

void calculation(float redius)
{
        float area;
        area = redius *redius *3.14;
        printf("calculation is: %f",area);
}

int main()
{
        float redius;

        printf("enter redius: ");
        scanf("%f",&redius);

        calculation(redius);
        return 0;

}