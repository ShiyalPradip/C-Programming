#include<stdio.h>
#include<conio.h>
void main()
{
	long Principal;
	int Rate,Time,Simple_Interest;
 clrscr();
	printf("Enter The Principal:- ");
	scanf("%ld",&Principal);

	printf("Enter The Rate:- ");
	scanf("%d",&Rate);

	printf("Enter The Time:- ");
	scanf("%d",&Time);

	Simple_Interest = Principal * Rate * Time / 100;

	printf("\n\nThe Simple Interest Is %d",Simple_Interest);
 getch();
}