#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
void checking(char,int,int,int,int,int);
long int num,i,count=0,sum=0,n=0,last,original;
char ch;
clrscr();
printf("Enter 1 for checking Prime and enter 2 for checking armstrong number\n");
scanf("%c",&ch);
printf("Enter any positive number which is needed to be checked\n");
scanf("%ld",&num);
n=num;
original=num;
while(num!=0)
{
count++;
num=num/10;
}
printf("Entered number is %d digits\n",count);
checking(ch,i,original,n,sum,count);
getch();
}

void checking(char ch,int i,int original,int n, int sum,int count)
{
int last;
int flag=1;
clrscr();
switch(ch)
{
case '1': for(i=2;i<=sqrt(original);i++)
	{
		if(original%i==0)
		{
		flag=0;
		break;
		}
	}

		if(flag==1 && original>0)
		{
		printf("%d is prime number\n",original);
		}
		else
		{
		printf("%d is not a Prime Number\n",original);
		}
	   break;

case '2': while(n!=0)
	{
	last=n%10;
	sum=sum+pow(last,count);
	n/=10;
	}
	if(sum==original)
	{
	printf("Number is Armstrong Number\n");
	}
	else
	{
	printf("Not an Armstrong Number\n");
	}
	break;

default:printf("Wrong Choice is Entered\n");
}
}




