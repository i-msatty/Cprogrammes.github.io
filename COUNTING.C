#include<stdio.h>
#include<conio.h>
void main()
{
int number,i;
clrscr();
printf("Enter the Value upto which counting is needed\n");
scanf("%d",&number);
i=1;
for(;i<=number;)
{
printf("%d , " , i);
i++;
}
printf("The value of i after loop execution is %d \t",i);
getch();
}

