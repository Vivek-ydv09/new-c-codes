#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int n,r,sum;
    printf("enter a no.:");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if (n==sum) 
    {
        printf("its a pelindrom no.");
    }
    else
    printf("not a pelindrom");
    getch();
}
    

    