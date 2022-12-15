#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum=0,i,count;
clrscr();
printf("Enter the First two value of Fibonacci series \n");
scanf("%d\n%d",&a,&b);
printf("Enter the number upto how many times you need to print the series\n");
scanf("%d",&count);
printf("The series you want is listed below \n %d,",a,b);
for(i=1;i<=count;i++)
{
sum=(a+b);
printf("%d,",sum);
a=b;
b=sum;
}
printf("\b\b");
getch();
}
