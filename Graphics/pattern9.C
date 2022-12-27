#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm,i,R;
	initgraph(&Gd,&Gm,"C:\\TC\\BGI");

	setfillstyle(WIDE_DOT_FILL,YELLOW);
	circle(325,240,23);
	floodfill(326,246,WHITE);

	for(i=0; i<155; i++)
		{
			arc(325+i,240,90-i,180-i-20,0+i);
			arc(325-i,240,0-i,90-i-20,0+i);
			arc(325+i,240,180-i,-90-i-20,0+i);
			arc(325-i,240,-90-i,0-i-20,0+i);
			setcolor(i/20);
			delay(10);
		}
 getch();
}