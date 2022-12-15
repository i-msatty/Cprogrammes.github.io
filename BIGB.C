#include<stdio.h>
#include<conio.h>
void main()
{
int is_prime(int);
int is_armstrong(int);
int NCR(int);
int NPR(int);
int to_upper(char);
int to_lower(char);
int is_upper(char);
int is_lower(char);
int is_digit(char);
int is_alphabet(char);
int power(int,int);
int factorial(int);
char ch;
clrscr();
printf("Enter 1 for checking prime,2-armstrong,3-NCR,4-to uper,5-to lower,6-is upper,
7-is digit,8-is alphabet,9-power,10-factorial\n");
scanf("%c",&ch);
switch(ch)
{
case '1':
case
