#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter a character\n");
scanf("%c",&c);
if(c>=65 &&c<=90)
{
c=c+32;
printf("Entered value in lower case is %c\n",c);
}
else
{
c=c-32;
printf("Entered value in Upper Case is %c\n",c);
}
getch();
}

