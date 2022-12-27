#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm,i,R;
	initgraph(&Gd,&Gm,"C:\\TC\\BGI");

	setfillstyle(WIDE_DOT_FILL,YELLOW);
	circle(325,240,23);
	floodfill(326,246,WHITE);

	for(i=0; i<150; i++)
		{
			arc(325-i,240,90,180,10+i);
			arc(325+i,240,0,90,10+i);
			arc(325+i,240,180,-90,10+i);
			arc(325-i,240,-90,0,10+i);
			setcolor(i/20);
			delay(10);
		}
 getch();
}