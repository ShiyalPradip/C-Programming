#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm,R;
	initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");
	getch();
	for(R=20; R<328; R++)
		{
			delay(50);
			setcolor(R/10);
			arc(320,370,0,180,R);
		}
 getch();
 closegraph();
}