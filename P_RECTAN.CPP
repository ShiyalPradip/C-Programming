#include<iostream.h>
#include<conio.h>
void main()
{
	int Rows,Columns;
 clrscr();
	cout<<"Enter Rows:- ";
	cin>>Rows;
	cout<<"Enter Columns:- ";
	cin>>Columns;

	cout<<endl;
	int i,j;
	for(i=0; i<Rows; i++)
		{
			for(j=0; j<Columns; j++)
				{
					cout<<"* ";
				}
			cout<<endl;
		}
 getch();
}