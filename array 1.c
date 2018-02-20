#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,max;
clrscr();
printf("enter the range");
scanf("%d",&n);
printf("enter the array vlues");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
getch();
}
