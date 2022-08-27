#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm,i;
	initgraph(&Gd,&Gm,"C:\\TC\\BGI");

	setfillstyle(WIDE_DOT_FILL,YELLOW);
	circle(325,240,23);
	floodfill(326,246,WHITE);

	for(i=0; i<125; i++)
		{
			arc(325-i,240,90+i,180,10+i);
			arc(325+i,240,0+i,90,10+i);
			arc(325-i,240,180+i,-90,10+i);
			arc(325+i,240,-90+i,0,10+i);
			setcolor(i/10);
			delay(40);
		}
 getch();
}
