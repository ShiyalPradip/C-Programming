void User()
{
	Background();
	window(21,6,59,20);
	textbackground(YELLOW);
	clrscr();

	window(23,7,57,19);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(15,2); cprintf("Main Menu");

	textcolor(LIGHTRED);
	gotoxy(3,3);  for(i=0; i<31; i++) cprintf("-");
	gotoxy(3,11); for(i=0; i<31; i++) cprintf("-");

	textcolor(WHITE);
	gotoxy(9,4);  cprintf("1)  Add New Marksheet");
	gotoxy(9,5);  cprintf("2)  Search Marksheet");
	gotoxy(9,6);  cprintf("3)  Update Marksheet");
	gotoxy(9,7);  cprintf("4)  Go To Log In Page");
	gotoxy(9,8);  cprintf("5)  See All Records");
	gotoxy(9,9);  cprintf("6)  See Marksheets");
	gotoxy(9,10); cprintf("7)  Exit");

	fflush(stdin);
	textcolor(LIGHTCYAN);
	gotoxy(9,12); cprintf("Enter Your Choice ? ");
	Choice=getch();

	switch(Choice)
		{
			case '1': New_Marksheet(); More_Choice();	break;
			case '2': See_Now(); 		   	 break;
			case '3': Update();			   	 break;
			case '4': Log_In_Page();  			 break;
			case '5': Admin=0; All_Records(); break;
			case '6': See_Marksheets();   	 break;
			case '7': Information_Page();     break;
			default : Error_Window();
						 User();
		}
}