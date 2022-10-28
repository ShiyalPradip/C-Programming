void Marksheet()
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	textcolor(LIGHTRED);
	gotoxy(38,2); cprintf("Marksheet");
	gotoxy(3,4);  cprintf("Student Name   :- ");
	gotoxy(3,5);  cprintf("Class          :-");
	gotoxy(3,6);  cprintf("Roll No        :-");
	gotoxy(3,7);  cprintf("Set_No         :-");
	gotoxy(3,9);  cprintf("Subject Name");
	gotoxy(21,9); cprintf("Total Mark");
	gotoxy(37,9); cprintf("Obtained Mark");
	gotoxy(54,9); cprintf("Pass Or Fail");
	gotoxy(71,9); cprintf("Grade");

	textcolor(WHITE);
	gotoxy(21,4); cprintf("%s",Data.Name);
	gotoxy(21,5); cprintf("B.C.A Sem_%d",Data.Sem);
	gotoxy(21,6); cprintf("%d",Data.Roll_No);
	gotoxy(21,7); cprintf("%ld",Data.Set_No);

	textcolor(LIGHTMAGENTA);
	if(Data.Sem==1)
		{
			gotoxy(3,11); cprintf("C Language");
			gotoxy(3,13); cprintf("Math");
			gotoxy(3,15); cprintf("RDBMS");
			gotoxy(3,17); cprintf("Computer Orga.");
		}
	else if(Data.Sem==2)
		{
			gotoxy(3,11); cprintf("C Language");
			gotoxy(3,13); cprintf("Statistics");
			gotoxy(3,15); cprintf("Web Designing");
			gotoxy(3,17); cprintf("Advance CO.");
		}
	else if(Data.Sem==3)
		{
			gotoxy(7,11); cprintf("C++");
			gotoxy(7,13); cprintf("SAD");
			gotoxy(7,15); cprintf("DFS");
			gotoxy(7,17); cprintf("OS");
		}

	textcolor(LIGHTGREEN);
	gotoxy(1,1);  for(i=0; i<80; i++) cprintf("*");
	gotoxy(1,3);  for(i=0; i<80; i++) cprintf("*");
	gotoxy(1,8);  for(i=0; i<80; i++) cprintf("*");
	gotoxy(1,20); for(i=0; i<80; i++) cprintf("*");
	gotoxy(1,22); for(i=0; i<80; i++) cprintf("*");

	gotoxy(1,2);   cprintf("*");    		gotoxy(1,4);   cprintf("*");
	gotoxy(1,5);   cprintf("*");     	gotoxy(1,6);   cprintf("*");
	gotoxy(1,7);   cprintf("*");			gotoxy(1,9);   cprintf("*");
	gotoxy(1,11);  cprintf("*");			gotoxy(1,12);  cprintf("*");
	gotoxy(1,13);  cprintf("*");			gotoxy(1,14);  cprintf("*");
	gotoxy(1,15);  cprintf("*");			gotoxy(1,16);  cprintf("*");
	gotoxy(1,17);  cprintf("*");			gotoxy(1,19);  cprintf("*");
	gotoxy(1,21);  cprintf("*");			gotoxy(80,2);  cprintf("*");
	gotoxy(80,4);  cprintf("*");			gotoxy(80,5);  cprintf("*");
	gotoxy(80,6);  cprintf("*");			gotoxy(80,7);  cprintf("*");
	gotoxy(80,9);  cprintf("*");			gotoxy(80,11);	cprintf("*");
	gotoxy(80,12); cprintf("*");			gotoxy(80,13); cprintf("*");
	gotoxy(80,14);	cprintf("*");			gotoxy(80,15); cprintf("*");
	gotoxy(80,16);	cprintf("*");			gotoxy(80,17);	cprintf("*");
	gotoxy(80,19);	cprintf("*");			gotoxy(80,21); cprintf("*");

	gotoxy(1,10);	cprintf("****************");
	gotoxy(1,18);  cprintf("****************");
	gotoxy(18,10);	cprintf("****************");
	gotoxy(18,18); cprintf("****************");
	gotoxy(35,10);	cprintf("****************");
	gotoxy(35,18); cprintf("****************");
	gotoxy(52,10);	cprintf("***************");
	gotoxy(52,18); cprintf("***************");
	gotoxy(68,10);	cprintf("*************");
	gotoxy(68,18); cprintf("*************");

	textcolor(BROWN);
	gotoxy(2,12);  cprintf("---------------");
	gotoxy(2,14);  cprintf("---------------");
	gotoxy(2,16); 	cprintf("---------------");
	gotoxy(18,12); cprintf("----------------");
	gotoxy(18,14); cprintf("----------------");
	gotoxy(18,16);	cprintf("----------------");
	gotoxy(35,12); cprintf("----------------");
	gotoxy(35,14); cprintf("----------------");
	gotoxy(35,16);	cprintf("----------------");
	gotoxy(52,12); cprintf("---------------");
	gotoxy(52,14); cprintf("---------------");
	gotoxy(52,16);	cprintf("---------------");
	gotoxy(59,19); cprintf("-");
	gotoxy(68,12); cprintf("------------");
	gotoxy(68,14); cprintf("------------");
	gotoxy(68,16);	cprintf("------------");
	gotoxy(74,19); cprintf("-");

	textcolor(YELLOW);
	gotoxy(17,9);  cprintf("|");     	gotoxy(17,10); cprintf("|");
	gotoxy(17,11); cprintf("|"); 			gotoxy(17,12); cprintf("|");
	gotoxy(17,13); cprintf("|"); 			gotoxy(17,14); cprintf("|");
	gotoxy(17,15); cprintf("|"); 			gotoxy(17,16); cprintf("|");
	gotoxy(17,17); cprintf("|"); 			gotoxy(17,18); cprintf("|");
	gotoxy(17,19);	cprintf("|"); 			gotoxy(34,9);  cprintf("|");
	gotoxy(34,10); cprintf("|"); 			gotoxy(34,11); cprintf("|");
	gotoxy(34,12); cprintf("|"); 			gotoxy(34,13); cprintf("|");
	gotoxy(34,14); cprintf("|"); 			gotoxy(34,15); cprintf("|");
	gotoxy(34,16); cprintf("|"); 			gotoxy(34,17); cprintf("|");
	gotoxy(34,18);	cprintf("|"); 			gotoxy(34,19);	cprintf("|");
	gotoxy(51,9);  cprintf("|"); 			gotoxy(51,10); cprintf("|");
	gotoxy(51,11); cprintf("|"); 			gotoxy(51,12); cprintf("|");
	gotoxy(51,13); cprintf("|"); 			gotoxy(51,14); cprintf("|");
	gotoxy(51,15); cprintf("|"); 			gotoxy(51,16); cprintf("|");
	gotoxy(51,17); cprintf("|"); 			gotoxy(51,18);	cprintf("|");
	gotoxy(51,19);	cprintf("|"); 			gotoxy(67,9);  cprintf("|");
	gotoxy(67,10);	cprintf("|"); 			gotoxy(67,11); cprintf("|");
	gotoxy(67,12); cprintf("|"); 			gotoxy(67,13); cprintf("|");
	gotoxy(67,14); cprintf("|"); 			gotoxy(67,15); cprintf("|");
	gotoxy(67,16); cprintf("|"); 			gotoxy(67,17); cprintf("|");
	gotoxy(67,18);	cprintf("|"); 			gotoxy(67,19);	cprintf("|");

	textcolor(LIGHTRED);
	gotoxy(3,19);  cprintf("TOTAL --->");
	gotoxy(3,21);  cprintf("PERCENTAGE --->");
	
	textcolor(WHITE);
	gotoxy(41,19); cprintf("%d",Data.Sum);
	gotoxy(19,21); cprintf("%f",Data.Per);

	gotoxy(24,11);	cprintf("100");
	gotoxy(24,13); cprintf("100");
	gotoxy(24,15); cprintf("100");
	gotoxy(24,17); cprintf("100");
	gotoxy(41,11);	cprintf("%d",Data.S1);
	gotoxy(41,13); cprintf("%d",Data.S2);
	gotoxy(41,15);	cprintf("%d",Data.S3);
	gotoxy(41,17); cprintf("%d",Data.S4);

	textcolor(YELLOW); gotoxy(24,19); cprintf("400");

	textcolor(WHITE);
 // This Conditions For S1 Subject
	if(Data.S1<=40.0)
		{
			gotoxy(57,11); cprintf("Fail");
		}
	else
		{
			gotoxy(57,11); cprintf("Pass");
		}

	if(Data.S1>=41.0 && Data.S1<=50.0)
		{
			gotoxy(73,11); cprintf("C2");
		}
	else if(Data.S1>=51.0 && Data.S1<=60.0)
		{
			gotoxy(73,11); cprintf("C1");
		}
	else if(Data.S1>=61.0 && Data.S1<=70.0)
		{
			gotoxy(73,11); cprintf("B2");
		}
	else if(Data.S1>=71.0 && Data.S1<=80.0)
		{
			gotoxy(73,11); cprintf("B1");
		}
	else if(Data.S1>=81.0 && Data.S1<=90.0)
		{
			gotoxy(73,11); cprintf("A2");
		}
	else if(Data.S1>=91.0 && Data.S1<=100.0)
		{
			gotoxy(73,11); cprintf("A1");
		}
	else
		{
			gotoxy(73,11); cprintf("-");
		}

  // This Conditions For S2 Subject
	if(Data.S2<=40.0)
		{
			gotoxy(57,13); cprintf("Fail");
		}
	else
		{
			gotoxy(57,13); cprintf("Pass");
		}

	if(Data.S2>=41.0 && Data.S2<=50.0)
		{
			gotoxy(73,13); cprintf("C2");
		}
	else if(Data.S2>=51.0 && Data.S2<=60.0)
		{
			gotoxy(73,13); cprintf("C1");
		}
	else if(Data.S2>=61.0 && Data.S2<=70.0)
		{
			gotoxy(73,13);	 cprintf("B2");
		}
	else if(Data.S2>=71.0 && Data.S2<=80.0)
		{
			gotoxy(73,13);	cprintf("B1");
		}
	else if(Data.S2>=81.0 && Data.S2<=90.0)
		{
			gotoxy(73,13);	cprintf("A2");
		}
	else if(Data.S2>=91.0 && Data.S2<=100.0)
		{
			gotoxy(73,13);	cprintf("A1");
		}
	else
		{
			gotoxy(73,13);	cprintf("-");
		}

  // This Conditions For S3 Subject
	if(Data.S3<=40.0)
		{
			gotoxy(57,15); cprintf("Fail");
		}
	else
		{
			gotoxy(57,15); cprintf("Pass");
		}

	if(Data.S3>=41.0 && Data.S3<=50.0)
		{
			gotoxy(73,15); cprintf("C2");
		}
	else if(Data.S3>=51.0 && Data.S3<=60.0)
		{
			gotoxy(73,15); cprintf("C1");
		}
	else if(Data.S3>=61.0 && Data.S3<=70.0)
		{
			gotoxy(73,15); cprintf("B2");
		}
	else if(Data.S3>=71.0 && Data.S3<=80.0)
		{
			gotoxy(73,15); cprintf("B1");
		}
	else if(Data.S3>=81.0 && Data.S3<=90.0)
		{
			gotoxy(73,15); cprintf("A2");
		}
	else if(Data.S3>=91.0 && Data.S3<=100.0)
		{
			gotoxy(73,15); cprintf("A1");
		}
	else
		{
			gotoxy(73,15); cprintf("-");
		}

	// This Conditions For S4 Subject
	if(Data.S4<=40.0)
		{
			gotoxy(57,17); cprintf("Fail");
		}
	else
		{
			gotoxy(57,17); cprintf("Pass");
		}

	if(Data.S4>=41.0 && Data.S4<=50.0)
		{
			gotoxy(73,17); cprintf("C2");
		}
	else if(Data.S4>=51.0 && Data.S4<=60.0)
		{
			gotoxy(73,17); cprintf("C1");
		}
	else if(Data.S4>=61.0 && Data.S4<=70.0)
		{
			gotoxy(73,17); cprintf("B2");
		}
	else if(Data.S4>=71.0 && Data.S4<=80.0)
		{
			gotoxy(73,17); cprintf("B1");
		}
	else if(Data.S4>=81.0 && Data.S4<=90.0)
		{
			gotoxy(73,17); cprintf("A2");
		}
	else if(Data.S4>=91.0 && Data.S4<=100.0)
		{
			gotoxy(73,17); cprintf("A1");
		}
	else
		{
			gotoxy(73,17); cprintf("-");
		}

	textcolor(YELLOW+BLINK);
	gotoxy(28,24); cprintf("......Press Any Key......");
	getch();
}