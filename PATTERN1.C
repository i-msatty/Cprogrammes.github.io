#include<stdio.h>
#include<conio.h>
void main()
{
int j,n,i;
clrscr();
printf("enter the number upto which pattern is needed to be printed\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("*");
}
printf("\n");
}
getche();
}

