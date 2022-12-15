#include<stdio.h>
#include<conio.h>
void main()
{
char a =5;
int c,l,r;
clrscr();
c=~a;
printf("One's compliment of 5 is%d\n",c);
l=a<<1;
printf("left shift by one %d\n ",l);
r=a>>2;
printf("Right shift by 2 will result in%d\n");
getch();
}