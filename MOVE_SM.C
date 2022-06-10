#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm,i;

	initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");

	for(i=0; i<620; i++)
		{
			cleardevice();
			circle(10+i,100,10); // Head

			line(10+i,110,10+i,140); // Body
			line(10+i,110,0+i,134); // Left Hand
			line(10+i,110,20+i,134);// Right Hand
			line(10+i,140,0+i,163); // Left Lag
			line(10+i,140,20+i,163);
			delay(15);
		}
	getch();
}