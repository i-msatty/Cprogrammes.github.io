#include<stdio.h>
#include<conio.h>
void main()
{
int d;
clrscr();
printf("Enter Day's Number between 1 to 7\n");
scanf("%d",&d);
switch(d)
{
case 1: printf("The day is Monday\n");
	break;
case 2: printf("The day is Tuesday\n");
	break;
case 3: printf("The day is Wednesday\n");
	break;
case 4: printf("The day is Thrusday\n");
	break;
case 5: printf("The day is Friday\n");
	break;
case 6: printf("The day is saturday\n");
	break;
case 7: printf("The day is Sunday\n");
	break;
default:printf("Entered Day's no is Wrong\n");
}
getch();
}
