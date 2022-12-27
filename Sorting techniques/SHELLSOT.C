//Shell Sort On Number
#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,i,Array[45],j,k,Temp;

 clrscr();
	printf("How Many Elements:- ");
	scanf("%d",&Num);

	clrscr();
	printf("Enter %d Elements:- ",Num);

	for(i=0; i<Num; i++)
		{
			scanf("%d",&Array[i]);
		}

	//Logic
	for(i=Num/2; i>0; i=i/2)
		{
			for(j=i; j<Num; j++)
				{
					for(k=j-i; k>=0; k=k-i)
						{
							if( Array[k+i] >= Array[k])
								{
									break;
								}
							else
								{
									Temp=Array[k];
									Array[k]=Array[k+i];
									Array[k+i]=Temp;
								}
						}
				}
		}

	clrscr();
	printf("Sorted Data Are:- \n\n");
	for(i=0; i<Num; i++)
		{
			printf("%d ",Array[i]);
		}
 getch();
}