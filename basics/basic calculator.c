#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    char ch;
    printf("enter 1st no.:");
    scanf("%d",&a);
    printf("enter 2nd no.:");
    scanf("%d",&b);
    getchar();
    printf("enter the operations:");
    scanf("%c",&ch);
    switch (ch)
    {
    case '+':printf("sum of no.is:%d",a+b);break;
    case '-':printf("differnce of no.:%d",a-b);break;
    case '*':printf("product of no.:%d",a*b);break;
    case '/':printf("division of no.:%d",a/b);break;
    default:
    printf("non operable");
    }
    getch();
}