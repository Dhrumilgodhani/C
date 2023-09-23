#include<stdio.h>

    int eng,guj,sci,total,per;
    
void result()
{
    printf("enter eng marks: ");
    scanf("%d",&eng);

    printf("enter guj marks: ");
    scanf("%d",&guj);
        
    printf("enter sci marks: ");
    scanf("%d",&sci);
}
void res()
{
    total=eng+sci+guj;
    printf("total = %d\n",total);
    per=total*100/300;
    printf("per = %d\n",per);
}
int main()
{
       result();
       res();        

       printf("eng\tsci\tguj\ttotal\tper\n");
       printf("%d\t%d\t%d\t%d\t%d\n",eng,sci,guj,total,per);

}