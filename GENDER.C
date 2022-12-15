#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter M or m for Male and F or f for Female\n");
scanf("%c",&c);
if(c=='m'||c=='M')
{
printf("hello sir\n");
}
else
{
printf("hello Madam\n");
}
getch();
}