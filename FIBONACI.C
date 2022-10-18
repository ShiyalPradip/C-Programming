#include<stdio.h>
#include<conio.h>
void main()
{
	long Num,i,Prev=-1,Next=1,Temp;
 clrscr();
	printf("Enter a Number:- ");
	scanf("%ld",&Num);

	printf("\nFibonacci Series Is:-\n\n");
	for(i=0; i<Num; i++)
		{
			Temp=Prev+Next;

			printf("%ld ",Temp);

			Prev=Next;
			Next=Temp;
		}
 getch();
}
