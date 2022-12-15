#include<stdio.h>
#include<conio.h>
void main()
{
char c1;
clrscr();
printf("Enter a Character in lower case\n");
scanf("%c",&c1);
c1-=32;
printf("Character in Upper case is %c\n  ",c1);
getch();
}
