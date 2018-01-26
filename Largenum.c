#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three numbers\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b&c)
printf("%d is maximum",a);
else
{
    if(b<a&c)
    printf("%d is maximum",b);
    else
    printf("%d is maximum",c);
}
    getch();
}
