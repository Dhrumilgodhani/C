#include<stdio.h>
int main()
{
	char str[20];
	char str2[40];
	int  i, length,j=0;
	
	printf("enter str value: ");
	scanf("%[^\n]s",&str);

	for(i=0; str[i]!='\0'; i++)
	{
		length = i;
	}
	
	for(i=length; i>=0; i--)
	{
		str2[j] = str[i];
		j++;
		printf("str2[%d] %c \n", i,str[i]); 
	}
	
	//str2[j] = '\0';
	printf("reverse str is = %s",str2);

	return 0;
		

}