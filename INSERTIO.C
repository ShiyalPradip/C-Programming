#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,i,Array[45],j,Temp;
 clrscr();

	printf("How Many Elements:- ");
	scanf("%d",&Num);

	clrscr();
	printf("Enter %d Elements:- \n",Num);
	for(i=0; i<Num; i++)
		{
			scanf("%d",&Array[i]);

			Temp=Array[i];
			j=i-1;

			while(j>=0 && Array[j]>Temp)
				{
					Array[j+1]=Array[j];
					j--;
				}

			Array[j+1]=Temp;
		}

	printf("\n\n");
	for(i=0; i<Num; i++)
		{
			printf("%d ",Array[i]);
		}
 getch();
}