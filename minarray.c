#include<stdio.h>
void main()
{
    int i,a[100],b,c;
    printf("Enter the number");
    scanf("%d",&b);
    printf("Enter the array ");
    for(i=0;i<b;i++)
    {
    scanf("%d",&a[i]);
}
c=a[0];
for(i=0;i<b;i++)
{
if(a[i]<c)
{
c=a[i];
}
}
printf("%d",c);
return 0;
}
