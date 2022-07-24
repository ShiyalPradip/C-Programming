void Fruit_Position();

void Fruit_Position()
{
	textcolor(YELLOW);

	switch(Fruit)
		{
			Label:
			case 0 : gotoxy(52,3);  cprintf("%c",5); break;
			case 1 : gotoxy(30,7);  cprintf("%c",5); break;
			case 2 : gotoxy(3,14);  cprintf("%c",5); break;
			case 3 : gotoxy(10,2);  cprintf("%c",5); break;
			case 4 : gotoxy(15,17); cprintf("%c",5); break;
			case 5 : gotoxy(40,20); cprintf("%c",5); break;
			case 6 : gotoxy(17,10); cprintf("%c",5); break;
			case 7 : gotoxy(40,13); cprintf("%c",5); break;
			case 8 : gotoxy(30,16); cprintf("%c",5); break;
			case 9 : gotoxy(52,15); cprintf("%c",5); break;
			case 10: gotoxy(20,14); cprintf("%c",5); break;
			case 11: gotoxy(45,8);  cprintf("%c",5); break;
			case 12: gotoxy(2,23);  cprintf("%c",5); break;
			case 13: gotoxy(25,21); cprintf("%c",5); break;
			case 14: gotoxy(59,21); cprintf("%c",5); break;
			case 15: gotoxy(27,12); cprintf("%c",5); break;
			case 16: gotoxy(2,2);   cprintf("%c",5); break;
			case 17: gotoxy(8,8);   cprintf("%c",5); break;
			case 18: gotoxy(10,20); cprintf("%c",5); break;
			case 19: gotoxy(20,6);  cprintf("%c",5); break;
			case 20: gotoxy(59,2);  cprintf("%c",5); break;
			case 21: Fruit=0; goto Label;
		}
}
