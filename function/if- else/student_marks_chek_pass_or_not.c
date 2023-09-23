#include<stdio.h>

void chek(int total, float per ,int sci, int guj, int eng)
{
        total = sci + guj + eng;
        per = (total*100) / 300;
        if(per>=35)
        {
            printf("student is pass");
        }
        else
        {
            printf("student is fail");
        }
}       


int main()
{
        int sci,guj,eng,total;
        float per;

        printf("enter scie marks");
        scanf("%d",&sci);

        printf("enter guj marks");
        scanf("%d",&guj);

        printf("enter eng marks");
        scanf("%d",&eng);

        chek(total,per,guj,sci,eng);

        return 0;
}