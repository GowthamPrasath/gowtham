#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b=0;
    clrscr();
    printf("enter the numbers");
    scanf("%d",&b);
    while(b!=0)
    {
        b/=10;
        ++a;
    }
    printf("Number of digits %d",a);
    getch();
}
