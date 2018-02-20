#include<stdio.h>
#include<conio.h>
void main()
{
    int b,c,i;
    clrscr();
    printf("Enter the number");
    scanf("%d",&b);
    for(i=1;i<=5;i++)
    {
    c=b*i;
    printf("%d\n",c);}
    getch();
}
