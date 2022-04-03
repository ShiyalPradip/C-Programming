/*
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,Row;
	Label:
 clrscr();
	printf("How Many Rows:- ");
	scanf("%d",&Row);
	if(Row>=25)
		{
			printf("\n\n\t\tWe Can Print Only 24 Rows");
			getch();
			goto Label;
		}
	clrscr();
	for(i=1; i<=Row; i++)
		{
			for(j=1; j<=i; j++)
				{
					printf("%d ",j);
				}
			printf("\n");
		}
 getch();
}