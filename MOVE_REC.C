#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm,i;

	initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");

	for(i=0; i<200; i++)
		{
			cleardevice();
			setcolor(i);
			rectangle(300-i,230-i,310+i,240+i);
			delay(100);
		}
	getch();
}