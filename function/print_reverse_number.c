#include <stdio.h>

int reverse(int n)
{
    int i=0,a;
    
    while (n != 0) 
    {
        a = n % 10;
        i = i * 10 + a;
        n = n / 10;
        
    }
    return i;
   
}

int main() 
{
    int i,n;
    
    printf("Enter a number:");
    scanf("%d",&n);
    
    i = reverse(n);
    
    printf("Reverse number is: %d\n",i);
    
}