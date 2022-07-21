// Simple Game
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i=0;

void Layaout()
{
 clrscr();
	gotoxy(1,1); printf("Controls:-  [w] = Up     [a]= Left    [s] = Down    [d] = Right");
	gotoxy(32,4); printf("Press Space For Exit");
	gotoxy(11,5);  for(i=0; i<60; i++) printf("-");
	gotoxy(11,22); for(i=0; i<60; i++) printf("-");

	for(i=5; i<23; i++)  { gotoxy(10,i); printf("|\n"); }
	for(i=5; i<23; i++)  { gotoxy(71,i); printf("|");   }
	for(i=15; i<35; i++) { gotoxy(i,9);  printf("-");   }
	for(i=20; i<40; i++) { gotoxy(i,12); printf("-");   }
	for(i=15; i<30; i++) { gotoxy(i,15); printf("-");   }
	for(i=23; i<40; i++) { gotoxy(i,18); printf("-");   }
	for(i=40; i<60; i++) { gotoxy(i,7);  printf("-");   }
	for(i=45; i<65; i++) { gotoxy(i,10); printf("-");   }
	for(i=40; i<60; i++) { gotoxy(i,14); printf("-");   }
	for(i=45; i<60; i++) { gotoxy(i,17); printf("-");   }
	for(i=34; i<56; i++) { gotoxy(i,20); printf("-");   }
}

void main()
{
	int X=13,Y=20;
	char Choice;

	Layaout();

	gotoxy(X,Y); printf("0");

	while(1)
		{
			Choice=getch();

			switch(Choice)
				{
					case 'w':
						if(Y>6)
							{
								gotoxy(X,Y); printf(" ");
								Y--;
								gotoxy(X,Y); printf("0");
							}
					break;

					case 'a':
						if(X>11)
							{
								gotoxy(X,Y); printf(" ");
								X--;
								gotoxy(X,Y); printf("0");
							}
					break;

					case 's':
						if(Y<21)
							{
								gotoxy(X,Y); printf(" ");
								Y++;
								gotoxy(X,Y); printf("0");
							}
					break;

					case 'd':
						if(X<70)
							{
								gotoxy(X,Y); printf(" ");
								X++;
								gotoxy(X,Y); printf("0");
							}
					break;

					case ' ': exit(0);
				}
		}

// getch();
}

