#include<stdio.h>
#include<conio.h>
void main()
{
int i,s,e,z;
printf("\nEnter the two intervals");
scanf("%d%d",&s,&e);
printf("Prime num between two numbers are");
s=s+1;
while(s<e)
{
z=0;
for(i=2;i<=s/2;++i)
{
if(s%i==0)
{
z=1;
break;
}
}
if(z==0)
printf(" %d\n",s);
++s;
}
return 0;
}
