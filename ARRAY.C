#include<stdio.h>
#include<conio.h>

void main()
{
int a[100];
int i,j,l,target;
char c;
l=0;
clrscr();
for(i=0;i<100;i++)
{
 printf("press y for input else n for entering target value\n");
 scanf("%c",&c);
 if(c=='y')
 {
  printf("enter input at index %d",i);
  scanf("%d",&a[i]);
  l++;
}

//else
//{
//printf("enter the targeted value");
//scanf("%d",&target);
//break;
//}
}
 for(i=0;i<l;i++)
 {
 for(j=i+1;j<l;j++)
 {
  if(a[i]+a[j]==target)
  {
   printf("index numbers are [%d,%d]",i,j);
  }
 }
}
getch();
}
