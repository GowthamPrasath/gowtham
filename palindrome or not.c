#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,c,d,z;
   clrscr();
   printf("Enter the number:");
   scanf("%d",&a);
   b=a/100;
   c=(a-(b*100))/10;
   d=a-((b*100)+(c*10));
   z=(d*100)+(c*10)+b;
   if(a==z)
   printf("IT iS a PALINDROME");
   else
   printf("IT IS NOt a PALINDROME");
   getch();
}

