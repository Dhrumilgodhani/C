#include<stdio.h>

void voting(int age, char yes, char no, int a
)
{
        if(age>=18)
        {
            a = yes;
            printf("you have voter id ?  yes or no. ");
            scanf("%s",&a);

            if(yes)
            {
                printf("yes you are eligible");
            }
            if(no)
            {
                printf("no , you are not eligible  ");
            }

        }
        else
        {
            printf("you are not eligible for voting");

        }
}

int main()
{
    int age, a;
    char yes, no;

    printf("enter your age  ");
    scanf("%d",&age);

    voting(age, yes, no, a);

    return 0;
    
}