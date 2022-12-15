#include<stdio.h>
#include<conio.h>
void main()
{
int number,i;
clrscr();
printf("Enter the Number whose table is needed to be obtained\t");
scanf("%d",&number);
for(i=1;i<=10;i++)
{
printf("%d * %d = %d\n",number,i,number*i);
}
for(i=10;i>=1;i--)
{
printf("Table in Reverse order is displayed below\n");
printf("%d * %d = %d\n",number,i,number*i);
}
getch();
}

