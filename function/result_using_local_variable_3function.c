#include<stdio.h>
void result(int eng,int guj,int sci)
{
    printf("enter eng marks: ");
    scanf("%d",&eng);

    printf("enter guj marks: ");
    scanf("%d",&guj);
        
    printf("enter sci marks: ");
    scanf("%d",&sci);

    res(eng,guj,sci);
}
void res(int eng,int guj,int sci)
{
    int total,per;
    total= eng+ sci+ guj;
    printf("total = %d\n",total);
    per=total*100/300;
    printf("per = %d\n",per);
}
int main()
{
        int eng,guj,sci;
       result(eng,guj,sci);
}