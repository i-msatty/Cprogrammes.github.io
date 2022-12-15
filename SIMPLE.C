#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
char c;
double principle,rate,time;
double si,asi,ci,aci;
clrscr();
printf("Enter 1 for Simple Intrest or 2 for Compound Intrest\n");
fflush(stdin);
scanf("%c",&c);
switch(c)
{
default: printf("wrong choice is entered ");
case '1': printf("For Simple Intrest enter principle , rate of intrest and Time in years\n");
	 scanf("%lf%lf%d",&principle,&rate,&time);
	 si=(principle*rate*time)/100;
	 asi=principle+si;
	 printf("Simple Intrest and Amount is %lf\n %lf",si,asi);
	 break;
case '2': printf("For Compound Intrest enter Principle, Rate of interest and Time in months\n");
	  scanf("%lf%lf%lf",&principle,&rate,&time);
	  ci=principle*pow((1+(rate/100)),time) -principle;
	  aci=principle+ci;
	  printf("The compund intrest and Amount is %lf\n %lf\n",ci,aci);
	  break;
}
getch();
}
