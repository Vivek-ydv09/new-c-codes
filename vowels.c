#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("enter the alphabet");
    scanf("%c",&ch);
    switch (ch)
    {
    case'a':
    case'A':
    case'e':
    case'E': 
    case'i':
    case'I':
    case'o':
    case'O':
    case'u':
    case'U':
     printf("its a vowel");  break;
   
    default:printf("not a vowel");
        break;
    }
    getch();
}