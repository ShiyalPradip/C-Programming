void Information_Page()
{
	Background();

	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	textcolor(LIGHTRED);
	gotoxy(34,2);  cprintf("Project Name");
	gotoxy(36,8);  cprintf("Developer");
	gotoxy(37,14); cprintf("Version");

	textcolor(LIGHTGREEN);
	gotoxy(16,3);  for(i=0; i<46; i++) cprintf("-");
	gotoxy(22,9);  for(i=0; i<36; i++) cprintf("-");
	gotoxy(26,15); for(i=0; i<30; i++) cprintf("-");

	textcolor(YELLOW);
	gotoxy(24,4);  cprintf("B.C.A Student Information System");
	gotoxy(34,10); cprintf("Shiyal Pradip");
	gotoxy(38,16); cprintf("3.6.9");

	window(3,18,78,24);
	textbackground(BLACK);
	clrscr();

	textcolor(LIGHTCYAN);
	gotoxy(19,4); cprintf("[1]   Log In");
	gotoxy(52,4); cprintf("[2]   Exit");
	Choice=getch();

	switch(Choice)
		{
			case '1':
				window(3,18,78,24);
				textbackground(BLACK);
				clrscr();

				textcolor(LIGHTRED+BLINK);
				gotoxy(19,2); cprintf("We Are Connecting Your Data With The Server");

				textcolor(WHITE);
				gotoxy(30,4); cprintf("......Please Wait......");

				textcolor(RED);
				gotoxy(3,6); for(i=0; i<72; i++) cprintf("%c",220);

				textcolor(YELLOW);
				gotoxy(3,6);
				for(i=0; i<72; i++)
					{
						cprintf("%c",220);
						delay(100-i);
					}

				Log_In_Page();
			break;

			case '2': exit(0);

			default: Information_Page();
		}
}

void Log_In_Page()
{
	//initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");
	initgraph(&Gd,&Gm,"C:\\TC\\BGI");

	setcolor(RED);
	setfillstyle(XHATCH_FILL,LIGHTBLUE);
	rectangle(20,70,600,390);
	floodfill(21,71,RED);

	setfillstyle(SOLID_FILL,CYAN);
	rectangle(60,115,555,345);
	floodfill(61,116,RED);

	setcolor(YELLOW);
	settextstyle(COMPLEX_FONT,HORIZ_DIR,2);
	outtextxy(280,110,"Log in");

	// Administrator Window
	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(90,159,210,230);
	floodfill(91,160,BLUE);

	setcolor(YELLOW);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(215,170,"[1]:-");
	outtextxy(215,190,"Administrator");

	circle(150,185,14);    //Administrator Head
	arc(150,230,0,180,30); //Administrator Body

	// User Window
	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(325,159,450,230);
	floodfill(326,160,BLUE);

	setcolor(YELLOW);
	circle(390,185,14); 				// User's Head
	arc(390,229,0,180,30);        // User's Body
	outtextxy(455,170,"[2]:-");
	outtextxy(455,190,"Other User");

	// Exit Window
	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(90,255,210,320);
	floodfill(91,256,BLUE);

	setcolor(YELLOW);
	settextstyle(COMPLEX_FONT,HORIZ_DIR,1);
	outtextxy(133,271,"Exit");

	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(215,265,"[3]:-");
	outtextxy(220,285,"EXIT");

	//Choice Window
	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(289,237,540,258);
	floodfill(296,238,BLUE);

	//Massege Window
	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(290,270,540,335);
	floodfill(291,271,BLUE);

	setcolor(LIGHTGREEN);
	outtextxy(359,277,"Message Window");
	setcolor(RED);
	outtextxy(320,287,"-------------------------");

	fflush(stdin);
	setcolor(YELLOW);
	outtextxy(305,245,"Enter Your Choice:- ");
	Choice=getch();

	switch(Choice)
		{
			case '1': // Administrator Window
						 setcolor(BLUE);
						 setfillstyle(SOLID_FILL,LIGHTGREEN);
						 rectangle(90,159,210,230);
						 floodfill(91,160,BLUE);

						 setcolor(RED);
						 circle(150,185,14);    //Administrator Head
						 arc(150,230,0,180,30); //Administrator Body

						 setcolor(YELLOW);
						 outtextxy(333,310,".....Please Wait.....");
						 delay(2000);
						 closegraph();
						 Administrator();
			break;
			case '2': //User Window
						 setcolor(BLUE);
						 setfillstyle(SOLID_FILL,LIGHTGREEN);
						 rectangle(325,159,450,230);
						 floodfill(326,160,BLUE);

						 setcolor(RED);
						 circle(390,185,14);   // User Head
						 arc(390,229,0,180,30);// User Body

						 setcolor(YELLOW);
						 outtextxy(333,310,".....Please Wait.....");
						 delay(2000);
						 closegraph();
						 User();
			break;
			case '3': // Exit Window
						 setcolor(BLUE);
						 setfillstyle(SOLID_FILL,LIGHTGREEN);
						 rectangle(90,255,210,320);
						 floodfill(91,256,BLUE);

						 setcolor(RED);
						 settextstyle(COMPLEX_FONT,HORIZ_DIR,1);
						 outtextxy(133,271,"Exit");

						 setcolor(YELLOW);
						 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
						 outtextxy(333,310,".....Please Wait.....");
						 delay(2000);
						 closegraph();
						 Information_Page();
			break;
			default:  outtextxy(355,300,"Invailid Choice");
						 setcolor(WHITE);
						 outtextxy(327,319,".....Press Any Key.....");
						 getch();
						 cleardevice();
						 Log_In_Page();
		}
}