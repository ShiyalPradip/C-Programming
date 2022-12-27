#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>

struct Link_List
{
	int Data;
	struct Link_List *Next;

} *First=NULL, *New_Node=NULL, *Temp=NULL, *Dummy=NULL, *Temp2;

int Flag=0,i;

void Create()
{
	int Records;

	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	textcolor(LIGHTGREEN);
	gotoxy(5,2); cprintf("How Many Elements Do You Want To Enter:- ");
	scanf("%d",&Records);

	textcolor(YELLOW);
	for(i=0; i<Records; i++)
		{
			New_Node=(struct Link_List*)malloc(sizeof(struct Link_List));

			gotoxy(3,4+i); cprintf("Enter Data:- ");
			scanf("%d",&New_Node->Data);

			New_Node->Next=NULL;

			if(First==NULL)
				{
					First=New_Node;
				}
			else
				{
					for(Temp=First; Temp->Next!=NULL; Temp=Temp->Next);

					Temp->Next=New_Node;
				}
		}
}

void Display()
{
	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	textcolor(LIGHTRED);
	gotoxy(30,2); cprintf("Elements Of Linked List");

	textcolor(YELLOW);
	gotoxy(2,4);
	for(Temp=First; Temp!=NULL; Temp=Temp->Next)
		{
			cprintf("%d -> ",Temp->Data);
		}
	printf("NULL");
}

void Insert_First()
{
	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	New_Node=(struct Link_List*)malloc(sizeof(struct Link_List));

	textcolor(YELLOW);
	gotoxy(3,2); cprintf("Enter New Element:- ");
	scanf("%d",&New_Node->Data);

	New_Node->Next=First;
	First=New_Node;
}

void Delete_First()
{
	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW+BLINK);
	if(First==NULL)
		{
			gotoxy(33,12); cprintf("List Is Empty");
			return;
		}
	else
		{
			Temp=First;
			gotoxy(33,12); cprintf("%d Is Deleted",Temp->Data);
			First=First->Next;
			free(Temp);
		}
}

void Insert_Last()
{
	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	New_Node=(struct Link_List*)malloc(sizeof(struct Link_List));

	textcolor(LIGHTRED);
	gotoxy(3,3); cprintf("Enter New Element:- ");
	scanf("%d",&New_Node->Data);

	New_Node->Next=NULL;

	if(First==NULL)
		{
			First=New_Node;
		}
	else
		{
			for(Temp=First; Temp->Next!=NULL; Temp=Temp->Next);

			Temp->Next=New_Node;
		}
}

void Delete_Last()
{
	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW+BLINK);
	if(First==NULL)
		{
			gotoxy(33,12); cprintf("List Is Empty");
			return;
		}
	else if(First->Next==NULL)
		{
			gotoxy(33,12); cprintf("%d Is Deleted",First->Data);
			free(First);
			First=NULL;
		}
	else
		{
			for(Temp=First; Temp->Next->Next!=NULL; Temp=Temp->Next);

			gotoxy(33,12); cprintf("%d Is Deleted",Temp->Next->Data);
			free(Temp->Next->Next);
			Temp->Next=NULL;
		}
}

void Search()
{
	int Search_Now;

	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW+BLINK);
	if(First==NULL)
		{
			gotoxy(33,12); cprintf("List Is Empty");
			return;
		}

	textcolor(LIGHTCYAN);
	gotoxy(3,3); cprintf("Which Data Do You Want To Search:- ");
	scanf("%d",&Search_Now);

	textcolor(LIGHTRED+BLINK);
	for(Temp=First; Temp!=NULL; Temp=Temp->Next)
		{
			Flag=0;
			if(Search_Now==Temp->Data)
				{
					gotoxy(33,6); cprintf("%d Is Found",Temp->Data);
					Flag=1;
					return;
				}
		}

	if(Flag==0)
		{
			gotoxy(33,6); cprintf("%d Is Not Found",Search_Now);
		}
}

void Insert_Between()
{
	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	Search();

	textcolor(YELLOW);
	if(Flag==1)
		{
			New_Node=(struct Link_List*)malloc(sizeof(struct Link_List));
			gotoxy(3,8); cprintf("Enter New Element:- ");
			scanf("%d",&New_Node->Data);

			New_Node->Next=Temp->Next;
			Temp->Next=New_Node;
		}
}

void Delete_Specific()
{
	int Delete_Now;

	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	if(First==NULL)
		{
			textcolor(LIGHTRED+BLINK);
			gotoxy(33,12); cprintf("List Is Empty");
			return;
		}

	textcolor(YELLOW);
	gotoxy(3,3); cprintf("Which Data Do You Want To Delete:- ");
	scanf("%d",&Delete_Now);

	if(First->Data==Delete_Now)
		{
			Delete_First();
			return;
		}

	for(Temp=First; Temp!=NULL; Temp=Temp->Next)
		{
			if(Delete_Now==Temp->Next->Data)
				{
					Flag=1;

					Dummy=Temp->Next;
					Temp->Next=Dummy->Next;

					textcolor(LIGHTRED+BLINK);
					gotoxy(33,12); cprintf("%d Is Deleted",Dummy->Data);
					free(Dummy);
					return;
				}
		}

	if(Flag==0)
		{
			textcolor(LIGHTCYAN+BLINK);
			gotoxy(33,12); cprintf("%d Is Not Found",Delete_Now);
		}
}

void Update()
{
	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	Search();

	if(Flag==1)
		{
			textcolor(LIGHTGREEN);
			gotoxy(3,8); cprintf("Enter New Element:- ");
			scanf("%d",&Temp->Data);

			textcolor(LIGHTRED+BLINK);
			gotoxy(30,12); cprintf("Record Is Updated");
		}
}

void main()
{
	char Choice;

	while(1)
		{
			window(1,1,80,25);
			textbackground(WHITE);
			clrscr();

			window(22,4,58,22);
			textbackground(BLUE);
			clrscr();

			window(24,5,56,21);
			textbackground(BLACK);
			clrscr();

			textcolor(RED);
			gotoxy(14,2); cprintf("Main Menu");

			textcolor(YELLOW);
			gotoxy(3,3);  for(i=0; i<29; i++) cprintf("-");
			gotoxy(3,15); for(i=0; i<29; i++) cprintf("-");

			textcolor(WHITE);
			gotoxy(9,4);  cprintf("[#]  Exit");
			gotoxy(9,5);  cprintf("[0]  Create List");
			gotoxy(9,6);  cprintf("[1]  Display Data");
			gotoxy(9,7);  cprintf("[2]  Insert First");
			gotoxy(9,8);  cprintf("[3]  Delete First");
			gotoxy(9,9);  cprintf("[4]  Insert Last");
			gotoxy(9,10); cprintf("[5]  Delete Last");
			gotoxy(9,11); cprintf("[6]  Search Data");
			gotoxy(9,12); cprintf("[7]  Insert Between");
			gotoxy(9,13); cprintf("[8]  Delete Specific");
			gotoxy(9,14); cprintf("[9]  Update Data");

			textcolor(LIGHTGREEN);
			gotoxy(9,16); cprintf("Enter Your Choice:- ");
			Choice=getch();

			switch(Choice)
				{
					case '#': exit(0);
					case '0': Create();				getch(); break;
					case '1': Display();				getch(); break;
					case '2': Insert_First();		getch(); break;
					case '3': Delete_First();		getch(); break;
					case '4': Insert_Last();		getch(); break;
					case '5': Delete_Last();		getch(); break;
					case '6': Search();				getch(); break;
					case '7': Insert_Between();	getch(); break;
					case '8': Delete_Specific();	getch(); break;
					case '9': Update();				getch(); break;
					default: printf("\n\nInvalid Choice\n");
								printf("Press Any Key...");
								getch();
				}
		}
}