#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>

struct Link_List
{
	int Data;

	struct Link_List *Next;
} *New_Node, *First, *Temp, *Dummy;

void Create(void);
void Display(void);
void Insert_First(void);
void Delete_First(void);
void Insert_Last(void);
void Delete_Last(void);
void Search(void);
void Insert_Between(void);
void Update(void);
void Delete_Specific(void);

int Flag=0;

void main()
{
	char Choice;

	while(1)
		{
			clrscr();
			textcolor(RED);
			gotoxy(37,2);  cprintf("Choices");
			textcolor(GREEN);
			gotoxy(17,3);  cprintf("----------------------------------------------");
			gotoxy(17,15); cprintf("----------------------------------------------");
			textcolor(CYAN);
			gotoxy(29,4);  cprintf("Press [#] For Exit");
			gotoxy(29,5);  cprintf("Press [0] For Create");
			gotoxy(29,6);  cprintf("Press [1] For Display");
			gotoxy(29,7);  cprintf("Press [2] For Insert First");
			gotoxy(29,8);  cprintf("Press [3] For Delete First");
			gotoxy(29,9);  cprintf("Press [4] For Insert Last");
			gotoxy(29,10); cprintf("Press [5] For Delete Last");
			gotoxy(29,11); cprintf("Press [6] For Search");
			gotoxy(29,12); cprintf("Press [7] For Insert Between");
			gotoxy(29,13); cprintf("Press [8] For Update");
			gotoxy(29,14); cprintf("Press [9] For Delete Specific");

			textcolor(RED);
			gotoxy(25,17); cprintf("Enter Your Choice:- ");
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
					case '8': Update();				getch(); break;
					case '9': Delete_Specific();  getch(); break;
					default: textcolor(RED);
								gotoxy(30,19); cprintf("--------: Error :--------");

								textcolor(YELLOW+BLINK);
								gotoxy(35,21); cprintf("Invailid Choice");

								textcolor(CYAN);
								gotoxy(29,23); cprintf("Press Any Key For Continue");
								getch();
				}
		}
}

void Create(void)
{
	int No_Node,i;

 clrscr();

	textcolor(RED);
	gotoxy(5,2); cprintf("How Many Elements Do You Want To Enter:- ");
	scanf("%d",&No_Node);

	printf("\n");

	textcolor(CYAN);

	for(i=0; i<No_Node; i++)
		{
			New_Node=(struct Link_List*)malloc(sizeof(struct Link_List*));

			cprintf("Enter Data:- ");
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

void Display(void)
{
 clrscr();

	textcolor(YELLOW);
	gotoxy(24,2); cprintf("----------: List Of Element :---------");

	printf("\n\n");

	for(Temp=First; Temp!=NULL; Temp=Temp->Next)
		{
			textcolor(RED);
			cprintf("%d",Temp->Data);

			textcolor(BLUE); cprintf(", ");
		}

	textcolor(YELLOW);
	cprintf("NULL");
}

void Insert_First(void)
{
 clrscr();

	New_Node=(struct Link_List*)malloc(sizeof(struct Link_List*));

	textcolor(RED);
	gotoxy(30,13); cprintf("Enter New Element:- ");
	scanf("%d",&New_Node->Data);

	New_Node->Next=First;

	First=New_Node;
}

void Delete_First(void)
{
 clrscr();

	textcolor(YELLOW+BLINK);

	if(First==NULL)
		{
			gotoxy(34,13); cprintf("List Is Empty");
		}
	else
		{
			Temp=First;
			First=First->Next;

			gotoxy(33,14); cprintf("%d Is Deleted",Temp->Data);
			free(Temp);
		}
}

void Insert_Last(void)
{
 clrscr();

	New_Node=(struct Link_List*)malloc(sizeof(struct Link_List*));

	textcolor(RED);

	gotoxy(30,13); cprintf("Enter New Element:- ");
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

void Delete_Last(void)
{
 clrscr();

	textcolor(YELLOW+BLINK);

	if(First==NULL)
		{
			gotoxy(34,13); cprintf("List Is Empty");
			return;
		}
	else if(First->Next==NULL)
		{
			gotoxy(34,13); cprintf("%d Is Deleted.",First->Data);

			free(First);

			First=NULL;
		}
	else
		{
			for(Temp=First; Temp->Next->Next; Temp=Temp->Next);

			gotoxy(34,13); cprintf("%d Is Deleted",Temp->Next->Data);

			free(Temp->Next->Next);

			Temp->Next=NULL;
		}
}

void Search(void)
{
	int Search_Now;

 clrscr();

	textcolor(YELLOW+BLINK);

	if(First==NULL)
		{
			gotoxy(34,13); cprintf("List Is Empty");
			return;
		}

	textcolor(RED);
	gotoxy(23,9); cprintf("Which Data Do You Want To Search:- ");
	scanf("%d",&Search_Now);

	textcolor(YELLOW+BLINK);

	for(Temp=First; Temp!=NULL; Temp=Temp->Next)
		{
			Flag=0;

			if(Search_Now==Temp->Data)
				{
					gotoxy(35,13); cprintf("%d Is Found",Temp->Data);

					Flag=1;
					return;
				}
		}

	if(Flag==0)
		{
			gotoxy(35,13); cprintf("%d Is Not Found",Search_Now);
		}
}

void Insert_Between(void)
{
 clrscr();

	Search();

	if(Flag==1)
		{
			New_Node=(struct Link_List*)malloc(sizeof(struct Link_List*));

			textcolor(RED);
			gotoxy(31,15); cprintf("Enter New Element:- ");
			scanf("%d",&New_Node->Data);

			New_Node->Next=Temp->Next;

			Temp->Next=New_Node;
		}
}

void Update(void)
{
 clrscr();

	Search();

	if(Flag==1)
		{
			textcolor(RED);
			gotoxy(30,15); cprintf("Enter New Element:- ");
			scanf("%d",&Temp->Data);

			textcolor(CYAN+BLINK);
			gotoxy(33,18); cprintf("Record Is Updated");
		}
}

void Delete_Specific(void)
{
	int Delete_Now;

 clrscr();

	if(First==NULL)
		{
			textcolor(YELLOW+BLINK);
			gotoxy(34,13); cprintf("List Is Empty");
			return;
		}

	textcolor(RED);
	gotoxy(23,9); cprintf("Which Data Do You Want To Delete:- ");
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

					clrscr();

					textcolor(YELLOW+BLINK);
					gotoxy(34,13); cprintf("%d Is Deleted.",Dummy->Data);

					free(Dummy);
					return;
				}
		}

	if(Flag==0)
		{
			textcolor(YELLOW+BLINK);
			gotoxy(33,13); cprintf("%d Is Not Found",Delete_Now);
		}
}