#include<stdio.h>
#include<conio.h>
void main()
{
    int n,fact=1,i;
    printf("enter any no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of no. is:%d",fact);
    getch();
}