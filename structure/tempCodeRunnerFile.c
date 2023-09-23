

    printf("productname\trate\tquantity\tamount   \tdiscount\tbillamount\tgst18\tnetbill\n");

    for(i=1; i<=3; i++)
    {
        b[i].amount = b[i].rate * b[i].quantity;
         b[i].discount = b[i].amount*5/100 ;