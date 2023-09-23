// print 0.5 , 1, 2.5 , 5, 8.5......n


#include<stdio.h>

void print(float i, float n, float sum)
{
        printf("%.1f ,",sum);

        while(i<=n)
        {
            sum += i;
          
            printf("%.1f ,",sum);
            i++; 
        }
}

int main()
{
    float i = 0.5 , n , sum = 0.5;

    printf("enter n:  ");
    scanf("%f",&n);

    print(i,n,sum);
    return 0;
}