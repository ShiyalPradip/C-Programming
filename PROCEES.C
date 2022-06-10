#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm,i,j;

	initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");

	for(i=0; i<500; i++)
		{
			setcolor(WHITE);
			circle(53+i,200,4);
		}

	for(j=0; j<500; j++)
		{
			setcolor(RED);
			circle(53+j,200,4);
			delay(20);
		}

 getch();
}