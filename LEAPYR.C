#include<stdio.h>
#include<conio.h>
void main()
{
int y=0;
clrscr();
printf("enter year %d");
scanf("%d",y);
if(y%400==0||y%4==0 && y%100!=0)
{
	printf("Is a Leap year\n");

}
else
{
	printf("Not a Leap year");
}
getch();
}
