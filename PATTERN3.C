#include<stdio.h>
#include<conio.h>
void main()
{
char ch,i,j;
clrscr();
printf("Enter the Character\n");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
{}
else if(ch>=97 && ch<=122)
{}
else if(1)
{printf("Special Character entered \n");
 }
for(i=5;i>0;i--)
{
for(j=0;j<6-i;j++)
{
printf("%c\t",ch);
}
ch++;
printf("\n");
}
getch();
}


