#include"gv.h"

int i=0;

void Go_Right()
{
	circle(50+i,100,20);

	line(50+i,120,50+i,190);

	line(50+i,120,10+i,150);
	line(50+i,120,90+i,150);

	line(50+i,190,30+i,240);
	line(50+i,190,70+i,240);
}

void Go_Left()
{
	circle(50+i,100,20);

	line(50+i,120,50+i,190);

	line(50+i,120,10+i,150);
	line(50+i,120,90+i,150);

	line(50+i,190,30+i,240);
	line(50+i,190,70+i,240);
}

void main()
{
	initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");

	while(!kbhit())
		{
			if(i>=0 && i<=540)
				{
					Go_Right();

					i++;
					delay(9);
					cleardevice();
				}
			else
				{
					while(i!=0 && !kbhit())
						{
							Go_Left();

							i--;
							delay(9);
							cleardevice();
						}
				}
		}
 getch();
}