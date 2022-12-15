#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter a character to check \n");
scanf("%c",&c);
if(c>=65 && c<=90)
{
printf("Entered character is capital alphabet\n%d",c);
}
else if(c>=97 && c<=122)
{
printf("Entered Character is Lowercase Alphaber\n");
}
else if(c>=48 && c<=57)
{
printf("Entered Character is Numerals");
}
else
printf("Special Characters\n");
getch();
}
