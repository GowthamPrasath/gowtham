#include<stdio.h>
void main()
{
int b,temp,i,j,a[20];
printf("enter the array of numbers");
scanf("%d",&b);
printf("enter the numbers");
for(i=0;i<=b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=b;i++)
{
for(j=i+1;j<=b;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<=b;i++)
{
    printf("%d",a[i]);
}
}
