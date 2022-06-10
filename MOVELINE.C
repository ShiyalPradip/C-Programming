#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm,i;

	initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");

	for(i=0; i<200; i++)
		{
			cleardevice();
			line(0+i,200,150+i,100+i);
			delay(50);
		}
	getch();
}
