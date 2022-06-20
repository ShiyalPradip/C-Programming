// Matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int Row,Col,i,j,Matrix[100][100];
 clrscr();
	printf("Enter Row Elementd:- ");
	scanf("%d",&Row);

	printf("\nEnter Column Elements:- ");
	scanf("%d",&Col);

	clrscr();
	printf("\nEnter %d Elementd:- ",Row*Col);
	for(i=0; i<Row; i++)
		{
			for(j=0; j<Col; j++)
				{
					scanf("%d",&Matrix[i][j]);
				}
		}

	clrscr();
	printf("Matric Is Shown Below:- \n\n");
	for(i=0; i<Row; i++)
		{
			for(j=0; j<Col; j++)
				{
					printf("%d ",Matrix[i][j]);
				}
			printf("\n");
		}
 getch();
}