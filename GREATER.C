#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter 3 numbers\n ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b&&a>c)
{
	printf("a is largest\n");
}
else if(b>c)
{
	printf("b is largest\n");
}
else if(c>a)
{
	printf("c is largest\n");
}
else
{	printf("All r equal\n");
}
getch();
}

