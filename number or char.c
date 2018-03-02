#include<stdio.h>
void main()
{
    char a[10];
    printf("Enter the string");
    scanf("%s",&a);
    if(a>=65 && a<=90 || a>=97 && a<=122)
    printf("not a number");
    else
    {
        printf("yes");
    }
}
