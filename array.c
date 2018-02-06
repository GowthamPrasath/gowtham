#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,a[100],b,i;
    clrscr();
    printf("Enter the N & k value:");
    scanf("%d %d",&n,&k);
    printf("enter numbers");
    for(i=0;i<n;++i)
    scanf("%d",&a[i]);
    for(i=1;i<=k;++i)
    {
    b=a[i];
    }
    printf("%d",b);
    getch();
}
