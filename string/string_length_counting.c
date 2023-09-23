#include<stdio.h>
int main()
{
	char str[20];
	int  i, length;
	
	printf("enter str value: ");
	scanf("%[^\n]s",&str);

	for(int i=0; str[i]!='\0'; i++)
	{
		printf("str[%d]  value is :%c\n",i,str[i]);
		length = i;
	}
	
	
	printf("str length is: %d ",i);
	return 0;
		

}