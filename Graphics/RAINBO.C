#include<graphics.h>
#include<conio.h>
void main()
{
	int Gd=0,Gm,i=0,C;

	initgraph(&Gd,&Gm,"C:\\TC\\BGI");


	setcolor(WHITE);
	circle(305,240,220);

	while(!kbhit())
		{
			Label:
			if(i>=0 && i<220)
				{
					C=i/20;
					setcolor(C);
					circle(305,240,i);
					delay(30);
					i++;
				}
			else
				{
					i=0;

					while(i<220)
						{
							C=i/30;
							setcolor(C);
							circle(305,240,i);
							delay(30);
							i++;
						}

					if(i<=220)
						{
							i=0;

							while(i<220)
								{
									C=i/40;
									setcolor(C);
									circle(305,240,i);
									delay(30);
									i++;
								}
						}

					if(i>=220)
						{
							i=0;
							goto Label;
						}
				}
		}
 getch();
}