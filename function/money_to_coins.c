#include<stdio.h>

void coin()
{
    int n;
    printf("enter value of money: ");
    scanf("%d",&n);

    int arr[5]= {20,10,5,2,1};
    printf("the coins are:  ");

    while(n>=arr[0])
    {
        printf("%d, ",arr[0]);
        n = n-20;
    }
    while(n>=arr[1])
    {
        printf("%d, ",arr[1]);
        n = n-10;
    }
    while(n>=arr[2])
    {
        printf("%d, ",arr[2]);
        n = n-5;
    }
    while(n>=arr[3])
    {
        printf("%d, ",arr[3]);
        n = n-2;
    }
    while(n>=arr[4])
    {
        printf("%d, ",arr[4]);
        n = n-1;
    }

}

int main()
{
    coin();
}