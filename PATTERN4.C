#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,Row;
	Lable:
 clrscr();
	printf("How Many Rows:- ");
	scanf("%d",&Row);
	if(Row>=25)
		{
			printf("\n\n\t\tWe Can Only Print 24 Rows");
			getch();
			goto Lable;
		}
	clrscr();
	for(i=Row; i>=1; i--)
		{
			for(j=1; j<=i; j++)
				{
					printf("%d ",j);
				}
			printf("\n");
		}
 getch();
}