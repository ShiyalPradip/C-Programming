#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Link_List
{
	int Data;

	struct Link_List *Next;
} *New_Node, *First, *Temp, *Dummy;

void Give_Memory_Block();
void Create();
void Creating_Nodes();
void Display();
void Insert_First();
void List_Is_Empty_Or_Not();
void Delete_First();
void Insert_Last();
void Delete_Last();
void Search();
void Insert_Between();
void Delete_Specific();
void Update();

int Flag=0;

void main()
{
	char Choice;

	while(1)
		{
			clrscr();
			printf("# Exit\n");
			printf("0 Create\n");
			printf("1 Display\n");
			printf("2 Insert First\n");
			printf("3 Delete First\n");
			printf("4 Insert Last\n");
			printf("5 Delete Last\n");
			printf("6 Search\n");
			printf("7 Insert Between\n");
			printf("8 Delete Specific\n");
			printf("9 Update\n");

			printf("\nEnter Your Choice:- ");
			Choice=getch();

			switch(Choice)
				{
					case '#': exit(0);
					case '0': Create();				getch(); break;
					case '1': Display();				getch(); break;
					case '2': Insert_First();     getch(); break;
					case '3': Delete_First();		getch(); break;
					case '4': Insert_Last();		getch(); break;
					case '5': Delete_Last();		getch(); break;
					case '6': Search();				getch(); break;
					case '7': Insert_Between();	getch(); break;
					case '8': Delete_Specific();  getch(); break;
					case '9': Update();				getch(); break;
					default: printf("\n\nInvailid Choice");
								printf("\nPress Any Key......");
								getch();
				}
		}
}

void Give_Memory_Block(void)
{
	New_Node=(struct Link_List*)malloc(sizeof(struct Link_List*));

	printf("Enter Data:- ");
	scanf("%d",&New_Node->Data);
}

void Create(void)
{
	int No_Node,i;
 clrscr();
	printf("How Many Elements Do You Want To Enter:- ");
	scanf("%d",&No_Node);
	printf("\n");

	for(i=0; i<No_Node; i++)
		{
			Creating_Nodes();
		}
}

void Creating_Nodes(void)
{
	Give_Memory_Block();

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

void Display(void)
{
 clrscr();

	for(Temp=First; Temp!=NULL; Temp=Temp->Next)
		{
			printf("%d, ",Temp->Data);
		}
	printf("NULL");
}

void Insert_First(void)
{
 clrscr();
	Give_Memory_Block();

	New_Node->Next=First;
	First=New_Node;
}

void List_Is_Empty_Or_Not(void)
{
	if(First==NULL)
		{
			printf("List Is Empty");
			getch();

			main();
		}
}

void Delete_First(void)
{
 clrscr();

	List_Is_Empty_Or_Not();

	Temp=First;
	First=First->Next;
	free(Temp);
	printf("Elemnt Is Deleted");
}

void Insert_Last(void)
{
 clrscr();
	Creating_Nodes();
}

void Delete_Last(void)
{
 clrscr();

	List_Is_Empty_Or_Not();

	if(First->Next==NULL)
		{
			free(First);
			First=NULL;
			printf("Element Is Deleted.");
			return;
		}
	else
		{
			for(Temp=First; Temp->Next->Next!=NULL; Temp=Temp->Next);

			free(Temp->Next->Next);
			Temp->Next=NULL;
			printf("Element Is Deleted");
		}
}

void Search(void)
{
	int Search_Now;

 clrscr();

	List_Is_Empty_Or_Not();

	printf("Which Data Do You Want To Search:- ");
	scanf("%d",&Search_Now);

	for(Temp=First; Temp!=NULL; Temp=Temp->Next)
		{
			Flag=0;
			if(Search_Now==Temp->Data)
				{
					Flag=1;
					printf("\n%d Is Found\n\n",Temp->Data);
					return;
				}
		}

	if(Flag==0)
		{
			printf("\n%d Is Not Found",Search_Now);
		}
}

void Insert_Between(void)
{
 clrscr();
	Search();

	if(Flag==1)
		{
			Give_Memory_Block();

			New_Node->Next=Temp->Next;
			Temp->Next=New_Node;
		}
}

void Delete_Specific(void)
{
	int Delete_Now;

 clrscr();

	List_Is_Empty_Or_Not();

	printf("Which Data Do You Want To Delete:- ");
	scanf("%d",&Delete_Now);

	if(Delete_Now==First->Data)
		{
			Delete_First();
			return;
		}

	for(Temp=First; Temp->Next!=NULL; Temp=Temp->Next)
		{
			if(Delete_Now==Temp->Next->Data)
				{
					Flag=1;
					Dummy=Temp->Next;
					Temp->Next=Dummy->Next;
					free(Dummy);
					printf("\n\nElement Is Deleted");
				}
		}

	if(Flag==0)
		{
			printf("\n\n%d Is Not Found",Delete_Now);
		}
}

void Update(void)
{
 clrscr();
	Search();

	if(Flag==1)
		{
			printf("Enter New Element:- ");
			scanf("%d",&Temp->Data);

			printf("\nRecord Is Updated");
		}
}