#include<process.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct Student
{
	int Roll_No,S1,S2,S3,S4,Total;
	char Name[40];
	float Per;
};

struct Link_List
{
	struct Student Data;
	struct Link_List *Next;

} *New_Node, *First=NULL, *Temp=NULL, *Dummy=NULL;;

int i,Searching,Flag=0;

void Get_Data()
{
 clrscr();

	fflush(stdin);
	printf("Enter Name:- ");
	gets(New_Node->Data.Name);

	printf("Enter Roll No:- ");
	scanf("%d",&New_Node->Data.Roll_No);

	printf("Enter S1 Mark:- ");
	scanf("%d",&New_Node->Data.S1);

	printf("Enter S2 Mark:- ");
	scanf("%d",&New_Node->Data.S2);

	printf("Enter S3 Mark:- ");
	scanf("%d",&New_Node->Data.S3);

	printf("Enter S4 Mark:- ");
	scanf("%d",&New_Node->Data.S4);
}

void Put_Data()
{
	printf("%s\t",Temp->Data.Name);
	printf("%d\t",Temp->Data.Roll_No);
	printf("%d\t",Temp->Data.S1);
	printf("%d\t",Temp->Data.S2);
	printf("%d\t",Temp->Data.S3);
	printf("%d\t",Temp->Data.S4);
}

void Create(void)
{
	int Nodes;
 clrscr();

	printf("How Many Elements :- ");
	scanf("%d",&Nodes);

	printf("\n");

	for(i=0; i<Nodes; i++)
		{
			New_Node=(struct Link_List*)malloc(sizeof(struct Link_List*));

			Get_Data();

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

	for(Temp=First; Temp!=NULL; Temp=Temp->Next)
		{
			Put_Data();
		}
}

void Insert_First(void)
{
 clrscr();


	New_Node=(struct Link_List*)malloc(sizeof(struct Link_List*));

	Get_Data();

	New_Node->Next=First;

	First=New_Node;
}

void Delete_First(void)
{
 clrscr();
	if(First==NULL)
		{
			printf("\n\nLIST IS  EMPTY");
		}
	else
		{
			Temp=First;
			First=First->Next;
			printf("\n\nElement Is Delete");
			free(Temp);
		}
}

void Insert_Last(void)
{
 clrscr();

	New_Node=(struct Link_List*) malloc(sizeof(struct Link_List*));

	Get_Data();

	New_Node->Next=NULL;

	if(First==NULL)
		{
			First=New_Node;
			return;
		}

	for(Temp=First; Temp->Next!=NULL; Temp=Temp->Next);

	Temp->Next=New_Node;
}

void Delete_Last(void)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	if(First==NULL)
		{
			printf("\nLIST IS EMPTY");
			return;
		}
	else if(First->Next==NULL)
		{
			printf("\n\nElement Is Deleted");
			free(First);
			First=NULL;
		}
	else
		{
			for(Temp=First; Temp->Next->Next!=NULL; Temp=Temp->Next);

			free(Temp->Next->Next);
			Temp->Next=NULL;
			printf("\n\nElement Is Deleted");
		}
}

void Search(void)
{
 clrscr();

	if(First==NULL)
		{
			printf("LIST IS EMPLY");
			return;
		}

	clrscr();

	printf("What You Search :- ");
	scanf("%d",&Searching);

	for(Temp=First; Temp!=NULL; Temp=Temp->Next)
	{
		Flag=0;
		if(Searching==Temp->Data.Roll_No)
			{
				printf("\n\n%d Is Found",Temp->Data.Roll_No);
				Flag=1;
				return;
			}
	}
	if(Flag==0)
		{
			printf("\n\nNot Found");
		}
}

void Insert_Between(void)
{
 clrscr();

	Search();

	if(Flag==1)
		{
			New_Node=(struct Link_List*) malloc(sizeof(struct Link_List*));

			Get_Data();

			New_Node->Next=Temp->Next;
			Temp->Next=New_Node;
		}
}

void Delte_Specific(void)
{
	int Delete_Now=0;
 clrscr();

	if(First==NULL)
		{
			printf("LIST IS EMPTY");
			return;
		}

	printf("Which Data You Want To Delete:- ");
	scanf("%d",&Delete_Now);

	if(First->Data.Roll_No==Delete_Now)
		{
			Delete_First();
			return;
		}
	for(Temp=First; Temp!=NULL; Temp=Temp->Next)
		{
			if(Delete_Now==Temp->Next->Data.Roll_No)
				{
					printf("\nFound");
					Flag=1;
					Dummy=Temp->Next;
					Temp->Next=Dummy->Next;
					printf("\n\nElement Is Deleted");
					free(Dummy);
				}
		}
	if(Flag==0)
		{
			printf("\n\nNot Found");
		}
}

void Update(void)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	Search();
	if(Flag==1)
		{
			Get_Data();
			printf("\n\n\n Record Is Updated");
		}
}

void main()
{
	char Choice;

 clrscr();
	while(1)
		{
			window(1,1,80,25);
			textbackground(BLACK);
			clrscr();

			gotoxy(23,1); for(i=0; i<37; i++) printf("*");
			gotoxy(23,2); printf("*");
			gotoxy(38,2); printf("Choices              *");
			gotoxy(23,3); for(i=0; i<37; i++) printf("*");

			gotoxy(23,4);  printf("*   #   --->    Exit                *");
			gotoxy(23,5);  printf("*   0   --->    Create              *");
			gotoxy(23,6);  printf("*   1   --->    Display             *");
			gotoxy(23,7);  printf("*   2   --->    Insert First        *");
			gotoxy(23,8);  printf("*   3   --->    Delete First    	  *");
			gotoxy(23,9);  printf("*   4   --->    Insert Last         *");
			gotoxy(23,10); printf("*   5   --->    Delete Last         *");
			gotoxy(23,11); printf("*   6   --->    Search              *");
			gotoxy(23,12); printf("*   7   --->    Insert Between      *");
			gotoxy(23,13); printf("*   8   --->    Delete Specific     *");
			gotoxy(23,14); printf("*   9   --->    Update Record       *");
			gotoxy(23,15); for(i=0; i<37; i++) printf("*");

			printf("\n Enter Your Choice:- ");
			Choice=getch();
			switch(Choice)
				{
					case '#': exit(0);
					case '0': Create();         getch(); break;
					case '1': Display();        getch(); break;
					case '2': Insert_First();   getch(); break;
					case '3': Delete_First();   getch(); break;
					case '4': Insert_Last();    getch(); break;
					case '5': Delete_Last();    getch(); break;
					case '6': Search();   		 getch(); break;
					case '7': Insert_Between(); getch(); break;
					case '8': Delte_Specific(); getch(); break;
					case '9': Update();         getch(); break;
					default : printf("\n\n\t\t     -> Error:- ");
								 printf("\n\n\t\t\t   Invailid Choice");
								 printf("\n\n\n\t\t\t Press Any Key......");
								 getch();
				}
		}
}
