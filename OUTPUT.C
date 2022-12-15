#include<stdio.h>
#include<conio.h>
void function(char**);
void main()
{
char *arr[]={"ant","bat","cat","dog","egg","fly"};
clrscr();
function(arr);
getch();
}
void function(char **ptr)
{
char *ptr1;
ptr1=(ptr +=sizeof(int))[-2];
printf("%s\n",ptr1);
}
