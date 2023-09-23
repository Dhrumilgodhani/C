#include<stdio.h>

void find(int year)
{
        if(year % 4 ==0 )
        {
           printf ("yes it's a leap year");
        }
        else
        {
            printf("no, it's not a leap year");

        }
}

int main()
{
        int year;
        printf("enter year");
        scanf("%d",&year);

        find(year);

        return 0;

}