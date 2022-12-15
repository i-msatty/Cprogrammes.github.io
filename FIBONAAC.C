#include<stdio.h>
#include<conio.h>
void main()
{
int base,power,value=0,i;
printf("Enter the value of base and its Power\n");
scanf("%d\n%d",&base,&power);
for(i=base;i<=power;i++)
{
value+=i;
}
printf("Power is %d",value);
getch();
}
