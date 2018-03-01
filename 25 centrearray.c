#include<stdio.h>
void main()
{
    int a[20],b,c,d,i,j,temp=0;
    printf("Enter the number");
    scanf("%d",&b);
    printf("Enter the array number");
    for(i=0;i<b;i++)
    {
    scanf("%d",&a[i]);}
    for(i=0;i<b;i++);
    {
        for(j=i+1;j<b;j++);
    {
        if(a[i]>a[j])
    {temp=a[i];
    a[i]=a[j];
    a[j]=temp;}
    }}
    if(b%2==0)
    {
        printf("%d",(a[b/2]+a[(b/2)-1])/2);
    }
    else
    {
        printf("%d",(a[b-1]/2));
    }
    return 0;
}
