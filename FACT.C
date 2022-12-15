#include<stdio.h>
#include<conio.h>
void main()
{
int number,i;
long int fact=1;
clrscr();
printf("Enter the Number whose Factorial is needed\n");
scanf("%d",&number);
i=number;
printf("Factorial of ");
for(;i>0;)
{
printf("%d ",i);
fact*=i;
i--;
if(i!=0)
printf(" * ");
else
printf("is\n");
}
printf("Factorial is %ld\n",fact);
getch();
}