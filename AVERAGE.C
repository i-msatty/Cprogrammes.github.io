#include<stdio.h>
#include<conio.h>
void main()
{
float p,c,m,e,cs;
float avg;
clrscr();
printf("enter the marks of five subjects \n");
scanf("%f",&p);
scanf("%f",&c);
scanf("%f",&m);
scanf("%f",&e);
scanf("%f",&cs);
avg=(p+c+m+e+cs)/5;
if(avg<40)
{
	printf("Gradual learner\n");
}
else if(avg<60)
{
	printf("Growing Learner\n");
}
else if(avg<75)
{
	printf("gallent\n");
}
else
{
printf("Honours\n");
}
getch();
}

