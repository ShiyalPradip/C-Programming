#include<graphics.h>
#include<conio.h>
void main()
{
	int Gd=0,Gm,i;

	initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");

	for(i=0; i<130; i++)
		{
			ellipse(200,200,0,360,20+i,65+i);
			///ellipse
			delay(10);
			setcolor(i/10);
		}

 getch();
}