void War_Start(void);
void You_Kill_Enemy(void);
void Enemy_Kill_You(void);

int i;

void You_Kill_Enemy(void)
{
	char Choice2;

	for(i=0; i<530; i++)
		{
			cleardevice();
			// This Is Stick Man 1
			setcolor(CYAN);
			circle(30,100,10);// Head

			setcolor(MAGENTA);
			line(30,110,30,140);// Body

			setcolor(LIGHTBLUE);
			line(30,113,15,117);// Left Hand
			line(30,113,63,113);// Right Hand

			setcolor(LIGHTCYAN);
			line(30,140,20,163);// Left Lag
			line(30,140,40,163);// Right Lag
			outtextxy(20,170,"You");

			setcolor(LIGHTRED);
			arc(44,113,-90,90,20);// Archery

			setcolor(WHITE);
			line(43,93,15,117);// Uper Rope
			line(43,133,15,117);// Lover Rope

			setcolor(RED);
			line(16+i,113,80+i,113);// Arrow

			setcolor(YELLOW);
			line(80+i,114,75+i,108);// Up Arrow
			line(80+i,114,75+i,120);// Down Arrow

			//This Is Stick Man 2
			setcolor(MAGENTA);
			circle(610,100,10);// Head

			setcolor(RED);
			line(610,110,610,140);// Body

			setcolor(LIGHTGREEN);
			line(610,113,598,117);// Left Hand
			line(610,113,622,117);// Right Hand

			setcolor(CYAN);
			line(610,140,600,155);// Left Lag
			line(610,140,622,155);// Right Lag

			setcolor(YELLOW);
			outtextxy(590,170,"Enemy");

			delay(5);
		}

	outtextxy(230,140,"One Enemy Is Killed");
	outtextxy(220,290,"Press 1 For Attack Again");
	outtextxy(250,310,"Press 2 For Exit");
	Choice2=getch();

	if(Choice2=='1')
		{
			War_Start();
		}
	else if(Choice2=='2')
		{
			exit(0);
		}
	else
		{
			Enemy_Kill_You();
		}
}

void Enemy_Kill_You(void)
{
	char Choice3;

	for(i=0; i<520; i++)
		{
			cleardevice();
			// This Is Stick Man 1
			setcolor(CYAN);
			circle(30,100,10);// Head

			setcolor(MAGENTA);
			line(30,110,30,140);// Body

			setcolor(LIGHTBLUE);
			line(30,117,9,100);// Left Hand
			line(31,117,50,100);// Right Hand

			setcolor(LIGHTCYAN);
			line(30,140,20,163);// Left Lag
			line(30,140,40,163);// Right Lag

			setcolor(YELLOW);
			outtextxy(20,170,"You");

			//This Is Stick Man 2
			setcolor(MAGENTA);
			circle(610,100,10);// Head

			setcolor(RED);
			line(610,110,610,140);// Body

			setcolor(LIGHTGREEN);
			line(610,113,585,117);// Left Hand
			line(610,113,622,117);// Right Hand

			setcolor(CYAN);
			line(610,140,600,155);// Left Lag
			line(610,140,622,155);// Right Lag

			setcolor(RED);
			line(550-i,116,580-i,104);// Arrow Line Uper
			line(550-i,116,580-i,125);// Arrow Line Down

			setcolor(YELLOW);
			line(570-i,110,600-i,110);// Line Uper
			line(570-i,120,600-i,120);// Line Lower

			setcolor(YELLOW);
			outtextxy(590,170,"Enemy");

			delay(5);
		}

	outtextxy(230,140,"Enemy Is Kill You");
	outtextxy(230,250,"Press 1 For Continue");
	outtextxy(248,270,"Press 2 For Exit");
	Choice3=getch();

	if(Choice3=='1')
		{
			War_Start();
		}
	else if(Choice3=='2')
		{
			exit(0);
		}
	else
		{
			Enemy_Kill_You();
		}
}
