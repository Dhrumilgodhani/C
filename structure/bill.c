
#include<stdio.h>
struct bill

{

    int rate,quantity,amount,discount,billamount,gst,netbill;
    char productname[40];
};

int main()
{
    struct bill b[5];

    int i;
    for(i=1; i<=3; i++)
    {
            printf("enter product name   ");
            scanf("%s",&b[i].productname);

            printf("enter rate: ");
            scanf("%d",&b[i].rate);

            printf("enter quantity: ");
            scanf("%d",&b[i].quantity);
    }

    printf("productname\trate\tquantity\tamount   \tdiscount\tbillamount\tgst18\tnetbill\n");

    for(i=1; i<=3; i++)
    {
        b[i].amount = b[i].rate * b[i].quantity;
        b[i].discount = b[i].amount*5/100 ;
        b[i].billamount = b[i].quantity*b[i].rate-b[i].discount;
        b[i].gst = b[i].billamount*18/100;
        b[i].netbill = b[i].billamount + b[i].gst;


        printf("%s\t\t%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t%d\n",b[i].productname,b[i].rate,b[i].quantity,b[i].amount,b[i].discount,b[i].billamount,b[i].gst,b[i].netbill);
    }
        

}
