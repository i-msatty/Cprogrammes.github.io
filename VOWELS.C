#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter a Character to check for vowels or consonent\n");
scanf("%c",&c);
if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
{
printf("Is a vowel\n");
}
else
{
printf("Consonent\n");
}
getch();
}
