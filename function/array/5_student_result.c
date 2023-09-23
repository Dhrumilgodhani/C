#include<stdio.h>

void result(int eng[5], int guj[5], int sp[5], int total[5], int per[5])
{
        int i;
        for(i=0; i<5; i++)
        {
            printf("\n enter %dst student marks ",i+1);

            printf("\nenter eng marks:  ");
            scanf("%d",&eng[i]);

            printf("\nenter guj marks:  ");
            scanf("%d",&guj[i]);

            printf("\nenter sp marks:  ");
            scanf("%d",&sp[i]);
            total[i] = eng[i] + guj[i] + sp[i];
            per[i] = (total[i] * 100) / 300;
        

        }
        printf("\nno.\t eng\t guj\t sp\t total\t per");

        for(i=0; i<5; i++)
        {
            printf("\n%d \t%d \t%d \t%d \t%d \t%d \t  ",i+1, eng[i], guj[i], sp[i], total[i], per[i]);
            if(per[i] <=35)
            {
                printf("student is fail");
            }
            else if(per[i] >= 90)
            {
                printf("grade A");
            }
            else if(per[i] >=80 && per[i] <= 90)
            {
                printf("gradr B");
            }
            else if(per[i] >=70 && per[i] <= 80)
            {
                printf("grade C");
            }
            else if(per[i] >=60 && per[i] <=70)
            {
                printf("grade D");
            }
            else
            {
                printf("grade E");
            }
        }
}

int main()
{
        int eng[5], guj[5], sp[5], total[5], per[5], i=0;

       
        result(eng,guj,sp,total,per);
        return 0;
}