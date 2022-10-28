void Set_Admin_Account()
{
	Background();
	window(20,8,60,18);
	textbackground(BLUE);
	clrscr();

	window(22,9,58,17);
	textbackground(BLACK);
	clrscr();

	textcolor(LIGHTRED);
	gotoxy(12,2); cprintf("Account Settings");

	textcolor(YELLOW);
	gotoxy(3,3); for(i=0; i<33; i++) cprintf("-");
	gotoxy(3,7); for(i=0; i<33; i++) cprintf("-");

	textcolor(WHITE);
	gotoxy(8,4); cprintf("(1)  Change Username");
	gotoxy(8,5); cprintf("(2)  Change Password");
	gotoxy(8,6); cprintf("(3)  Go Back");

	textcolor(LIGHTCYAN);
	gotoxy(10,8); cprintf("Enter Your Choice ? ");
	Choice=getch();

	switch(Choice)
		{
			case '1': Change_UserName(); 	  getch(); break;
			case '2': Change_Password(); 	  getch(); break;
			case '3': Main_Menu();
			default : Error_Window();
						 Set_Admin_Account();
		}
}

void Change_UserName()
{
	Background();
	window(17,6,65,20);
	textbackground(BLUE);
	clrscr();

	window(19,7,63,19);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(16,2); cprintf("Change Username");

	textcolor(LIGHTGREEN);
	gotoxy(4,2);  cprintf("<---------:");
	gotoxy(32,2); cprintf(":--------->");

	textcolor(LIGHTMAGENTA);
	gotoxy(6,4); cprintf("Enter Correct Username:- ");
	gotoxy(6,5); gets(UserName);

	fp=fopen("Admin_U.dat","rb");
	fgets(Temp_UserName,45,fp);
	fclose(fp);

	if(strcmp(UserName,Temp_UserName)!=0)
		{
			textcolor(LIGHTGREEN);
			gotoxy(8,8);  cprintf("-----------:");
			gotoxy(27,8); cprintf(":-----------");

			textcolor(WHITE);
			gotoxy(21,8); cprintf("Error");

			textcolor(LIGHTRED+BLINK);
			gotoxy(15,10); cprintf("Incorrect Username");

			textcolor(YELLOW);
			gotoxy(13,12); cprintf(".....Press Any Key.....");
		}
	else
		{
			Background();
			window(19,6,65,20);
			textbackground(RED);
			clrscr();

			window(21,7,63,19);
			textbackground(BLACK);
			clrscr();

			textcolor(LIGHTGREEN);
			gotoxy(16,2); cprintf("Change Username");

			textcolor(YELLOW);
			gotoxy(3,2);  cprintf("<----------:");
			gotoxy(32,2); cprintf(":-------->");

			textcolor(LIGHTRED);
			gotoxy(6,4); cprintf("Enter New Username:- ");
			gotoxy(6,5); gets(UserName);

			fp=fopen("Admin_U.dat","wb");
			fprintf(fp,"%s",UserName);
			fclose(fp);

			textcolor(WHITE+BLINK);
			gotoxy(14,10); cprintf("SuccessFully Saved");

			textcolor(YELLOW);
			gotoxy(12,12); cprintf(".....Press Any Key.....");
		}
	getch();
	Main_Menu();
}

void Change_Password()
{
	Background();
	window(17,6,65,20);
	textbackground(MAGENTA);
	clrscr();

	window(19,7,63,19);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(16,2); cprintf("Change Password");

	textcolor(LIGHTGREEN);
	gotoxy(4,2);  cprintf("<---------:");
	gotoxy(32,2); cprintf(":--------->");

	textcolor(YELLOW);
	gotoxy(4,4); cprintf("Enter Correct Password:- ");

	for(j=0; j!='13'; j++)
		{
			fflush(stdin);
			Password[j]=getch();
			if(Password[j]==Enter)
				{
					Password[j]=NULL;
					break;
				}
			printf("*");
		}

	fp=fopen("Admin_P.dat","rb");
	fscanf(fp,"%s",Temp_Password);
	fclose(fp);

	if(strcmp(Password,Temp_Password)!=0)
		{
			textcolor(LIGHTGREEN);
			gotoxy(8,8);  cprintf("-----------:");
			gotoxy(27,8); cprintf(":-----------");

			textcolor(WHITE);
			gotoxy(21,8); cprintf("Error");

			textcolor(LIGHTRED+BLINK);
			gotoxy(15,10); cprintf("Incorrect Password");

			textcolor(YELLOW);
			gotoxy(13,12); cprintf(".....Press Any Key.....");
		}
	else
		{
			Background();
			window(19,6,65,20);
			textbackground(RED);
			clrscr();

			window(21,7,63,19);
			textbackground(BLACK);
			clrscr();

			textcolor(LIGHTGREEN);
			gotoxy(16,2); cprintf("Change Password");

			textcolor(YELLOW);
			gotoxy(3,2);  cprintf("<----------:");
			gotoxy(32,2); cprintf(":-------->");

			textcolor(LIGHTRED);
			gotoxy(6,4); cprintf("Enter New Password:- ");
			gotoxy(6,5);

			for(j=0; j!='13'; j++)
				{
					fflush(stdin);
					Password[j]=getch();
					if(Password[j]==Enter)
						{
							Password[j]=NULL;
							break;
						}
					printf("*");
				}

			fp=fopen("Admin_P.dat","wb");
			fprintf(fp,"%s",Password);
			fclose(fp);

			textcolor(WHITE+BLINK);
			gotoxy(14,10); cprintf("SuccessFully Saved");

			textcolor(YELLOW);
			gotoxy(12,12); cprintf(".....Press Any Key.....");
		}
	getch();
	Main_Menu();
}