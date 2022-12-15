#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i;
clrscr();
printf("Enter the phone number\n");
for(i=0;i<20;i++)
{
scanf("%d",&a[i]);
}
printf("\n\n\n\n\n\n");
for(i=0;i<20;i++)
{
printf("%d,",a[i]);
}
getch();
}