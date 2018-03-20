#include<stdio.h>
void main()
{
    int a,b=0;
    printf("Enter the Number");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        b++;
    }
        printf("%d",b);
}
