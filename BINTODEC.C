#include<stdio.h>
#include<conio.h>
void main()
{
	long Num,Binary_Num;
	int Rem,Decimal_Num=0,Base=1;
 clrscr();
	printf("\n\nEnter a Binary Number:- ");
	scanf("%ld",&Num);

	Binary_Num = Num;

	while(Num > 0)
		{
			Rem = Num % 10;
			Decimal_Num = Decimal_Num + Rem * Base;
			Num = Num / 10;
			Base = Base * 2;
		}

	printf("\nThe Binary Number Is %ld",Binary_Num);
	printf("\n\nIt's Decimal Number Is %d",Decimal_Num);
 getch();
}