// Write a Programe For Sort Data In Acending Order Using Bobble Sort
#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Array[45],i,j,Temp;
 clrscr();
	printf("How Many Elements Do You Want To Enter:- ");
	scanf("%d",&Num);

	clrscr();
	printf("Enter %d Element:- ",Num);
	for(i=0; i<Num; i++)
		{
			scanf("%d",&Array[i]);
		}

	//Logic Of Do Sort
	for(i=0; i<Num; i++)
		{
			for(j=0; j<Num-i-1; j++)
				{
					if( Array[j] > Array[j+1] )
						{
							Temp=Array[j];
							Array[j]=Array[j+1];
							Array[j+1]=Temp;
						}
				}
		}

	clrscr();
	printf("Shorted Data Is:- \n\n");

	for(i=0; i<Num; i++)
		{
			printf("%d ",Array[i]);
		}
 getch();
}