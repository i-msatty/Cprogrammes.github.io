#include<stdio.h>
#include<conio.h>
void main()
{
char c;
double a,b;
clrscr();
printf("enter the values of two numbers\n");
scanf("%lf\n%lf",&a,&b);
fflush(stdin);
printf("Enter +,-,/,*\n");
scanf("%c",&c);
switch(c)
{
case '+': printf("Sum is %lf ",a+b);
	  break;
case '-': printf("Subtracted value is %lf",a-b);
	  break;
case '*': printf("Multiplied value is %lf",a*b);
	  break;
case '/': printf("Divided value is %lf",a/b);
	  break;
default: printf("Wrong operator entered\n");
}
getch();
}
