#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
long int num;
int base,power,digit;
int factorial(int);
int topower(int,int);
int digitsum(int);
clrscr();
 printf("Enter 1 for Factorial,\t2 for X to the power Y or \t3 for digit sum\n");
scanf("%c",&ch);
switch(ch)
{
case '1':
	printf("Enter the number whose factorial is needed\n");
	scanf("%d",&num);
	printf("Factorial of the number is %ld\n",factorial(num));
	break;
case '2':
	printf("Enter base value and power value ");
	scanf("%d",&base);
	scanf("%d",&power);
	printf("The Value of %d to the power of %d is %d\n ",base,power,topower(base,power));
	break;
case '3':
	printf("Enter the value whose digit sum is needed\n");
	scanf("%ld",&digit);
	printf("The sum of digits of the number %ld is %ld\n",digit,digitsum(digit));
	break;

default:
	printf("Wrong Choice\n");
}
getch();
}

int factorial(int num)
{
int i=1,sum=1;
clrscr();
for(;i<=num;i++)
{
sum=sum*i;
}
return sum;
}

int topower(int base,int power)
{
int i;
clrscr();
for(i=2;i<=power;i++)
{
base*=base;
}
return base;
}

int digitsum(int num)
{int rem,sum=0;
clrscr();
while(num!=0)
{
rem=num%10;
sum=sum+rem;
num/=10;
}
return sum;
}
