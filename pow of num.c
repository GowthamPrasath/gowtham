#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,z;
    clrscr();
    printf("enter the numbers");
    scanf("%d",&a);
    printf("Enter the power ");
    scanf("%d",&b);
    z=pow(a,b);
    printf("The power of the number is %d",z);
    getch();
}
