#include<stdio.h>
#include<conio.h>
void main()
{
    int n,b[10],value=0,j,i;
    clrscr();
     printf("Input");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(b[i]>b[j])
           { value=b[i];
               b[i]=b[j];
               b[j]=value; }
       }
    }
   
     if(n%2==0)
     {
         printf("Output %d\n",(b[n/2]+b[(n/2)-1])/2);
     }
     else
     {
         printf("Output %d\n",b[(n-1)/2]);
     }
     getch();
}
