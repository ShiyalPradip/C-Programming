#include<stdio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm,R;
	initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");
	for(R=10; R<220; R++)
		{
			delay(40);
			setcolor(R/10);
			arc(315,240,0,360,R);
		}
 getch();
 closegraph();
}
