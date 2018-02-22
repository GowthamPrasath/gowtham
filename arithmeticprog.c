#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,b,c,sum=0;
    printf("Enter the number of terms");
    scanf("%d",&b);
    printf("Enter the first num ");
    scanf("%d",&a);
    printf("Enter the diffrence ");
    scanf("%d",&c);
    for(i=0;i<b;i++)
    {
        sum=sum+a;
        a=a+c;
    }
    printf("%d",sum);
}
