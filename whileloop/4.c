/*
	A A A A A
	B B B B B
	C C C C C
	D D D D D
	E E E E E
*/


#include<stdio.h>
int main()
{
	int i=65;
	do
	{
		int j=65;
		while(j<=69)
		{
			printf("%c ",i);
			j++;
		}
		printf("\n");
		i++;
	}
	while(i<=69);
	return 0;
}

	