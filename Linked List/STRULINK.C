#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Student
{
	int Roll_No;
	char Name[45];
};

struct Struct_Link
{
	struct Student Data;
	struct Struct_Link *Next;

} *New_Node=NULL, *Start=NULL, *End=NULL, *Temp;

void Create()
{
	int Nodes,i;
 clrscr();
	printf("How Many Elements Do You Want To Enter:- ");
	scanf("%d",&Nodes);

	for(i=0; i<Nodes; i++)
		{
			New_Node=(struct Struct_Link*)malloc(sizeof(struct Struct_Link));

			printf("Enter Roll No:- ");
			scanf("%d",&New_Node->Data.Roll_No);

			printf("Enter Name:- ");
			scanf("%s",&New_Node->Data.Name);

			New_Node->Next=NULL;

			if(Start==NULL)
				{
					Start=New_Node;
				}
			else
				{
					End->Next=New_Node;
				}
			End=New_Node;
		}
}

void Display()
{
 clrscr();
	for(Temp=Start; Temp!=NULL; Temp=Temp->Next)
		{
			printf("%d,%s\n",Temp->Data.Roll_No,Temp->Data.Name);
		}
}

void Insert_First()
{
 clrscr();
	New_Node=(struct Struct_Link*)malloc(sizeof(struct Struct_Link));

	printf("Enter Roll No:- ");
	scanf("%d",&New_Node->Data.Roll_No);

	printf("Enter Name:- ");
	scanf("%s",&New_Node->Data.Name);

	New_Node->Next=Start;

	if(End==NULL)
		{
			End=New_Node;
		}
	Start=New_Node;
}

void Delete_First()
{
 clrscr();
	if(Start==NULL)
		{
			printf("List Is Empty");
			return;
		}
	else
		{
			Temp=Start;
			printf("[%d,%s] Record Is Deleted",Temp->Data.Roll_No,Temp->Data.Name);
			Start=Start->Next;
			free(Temp);
		}
}

void Insert_Last()
{
 clrscr();
	New_Node=(struct Struct_Link*)malloc(sizeof(struct Struct_Link));

	printf("Enter Roll No:- ");
	scanf("%d",&New_Node->Data.Roll_No);

	printf("Enter Name:- ");
	scanf("%s",&New_Node->Data.Name);

	New_Node->Next=NULL;

	if(Start==NULL)
		{
			Start=New_Node;
		}
	else
		{
			End->Next=New_Node;
		}
	End=New_Node;
}

void Delete_Last()
{
 clrscr();
	if(Start==NULL)
		{
			printf("List Is Empty");
			return;
		}
	else if(Start->Next==NULL)
		{
			printf("[%d,%s] Record Is Deleted",Start->Data.Roll_No,Start->Data.Name);
			free(Start);
			Start=NULL;
			return;
		}
	else
		{
			for(Temp=Start; Temp->Next->Next!=NULL; Temp=Temp->Next);

			free(Temp->Next->Next);
			Temp->Next=NULL;
		}
}

void Search()
{

}

void Insert_Between()
{

}

void Delete_Specific()
{

}

void Update()
{

}

void main()
{
	char Choice;

	while(1){
		clrscr();
		printf("(#) Exit\n");
		printf("(0) Create\n");
		printf("(1) Display\n");
		printf("(2) Insert First\n");
		printf("(3) Delete First\n");
		printf("(4) Insert Last\n");
		printf("(5) Delete Last\n");
		printf("(6) Search\n");
		printf("(7) Insert Between\n");
		printf("(8) Delete Specific\n");
		printf("(9) Update\n");

		printf("\nEnter Your Choice:- ");
		Choice=getch();

		switch(Choice)
			{
				case '#': exit(0);
				case '0': Create();				getch(); break;
				case '1': Display();				getch();	break;
				case '2': Insert_First();		getch();	break;
				case '3': Delete_First();		getch();	break;
				case '4': Insert_Last();		getch(); break;
				case '5': Delete_Last();		getch();	break;
				case '6': Search();				getch();	break;
				case '7': Insert_Between();   getch();	break;
				case '8': Delete_Specific();	getch(); break;
				case '9': Update();				getch(); break;
				default: printf("\n\nInvalid Choice\n");
							printf("Press Any Key...");
							getch();
			}
	}
}