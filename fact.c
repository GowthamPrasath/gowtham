#include <stdio.h>
#include<conio.h>

int main(void)
{
	int i,a,fact=1;
	printf("enter the number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of num is%d",fact);
	return 0;
}
