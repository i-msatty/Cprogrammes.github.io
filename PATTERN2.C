#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter the number upto which you need the pattern to be printed \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<(n-i);j++)
{
printf("*");
}
printf("\n");
}
getch();
}