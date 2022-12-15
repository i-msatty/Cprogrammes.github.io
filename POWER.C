#include<stdio.h>
#include<conio.h>
void main()
{
int base,power,value=0,i;
clrscr();
printf("Enter the value of base and its Power\n");
scanf("%d\n%d",&base,&power);
for(i=1;i<=power;i++)
{
value= base*base;
}
printf("Power is %d",value);
getch();
}
