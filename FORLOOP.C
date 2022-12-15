#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
//for loop implemenatation
clrscr();
for( i=0;i<=5;i++)
{
printf("address of i and j is %d%d\n",&i,&j);
printf("value in i %d\n",i);
if(i==3)
{
printf("break statement is invoked" );
continue;
break;
}
}
getch();
}