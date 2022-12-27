#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct D_Link
{
	int Data;
	struct D_Link *Prev,*Next;

} *New_Node=NULL,*Start=NULL,*End=NULL,*Temp;

int Flag=0,Dummy;

void Memory()
{
	New_Node=(struct D_Link*)malloc(sizeof(struct D_Link));

	printf("Enter Data:- ");
	scanf("%d",&New_Node->Data);
}

void Create()
{
	int Nodes,i;
 clrscr();
	printf("How Many Elements Do You Want To Enter:- ");
	scanf("%d",&Nodes);

	for(i=0; i<Nodes; i++)
		{
			Memory();

			New_Node->Next=NULL;
			New_Node->Prev=Start;

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
			printf("%d -> ",Temp->Data);
		}
	printf("NULL");
}

void Insert_First()
{
 clrscr();
	Memory();

	New_Node->Next=Start;
	New_Node->Prev=NULL;

	if(Start==NULL)
		{
			End=New_Node;
		}
	else
		{
			Start->Prev=New_Node;
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
			printf("%d Is Deleted",Temp->Data);
			Start=Start->Next;
			free(Temp);
			Start->Prev=NULL;
		}
}

void Insert_Last()
{
 clrscr();
	Memory();

	New_Node->Next=NULL;
	New_Node->Prev=End;

	if(End==NULL)
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
			printf("%d Is Deleted",Start->Data);
			Start=NULL;
			free(Start);
		}
	else
		{
			for(Temp=Start; Temp->Next->Next!=NULL; Temp=Temp->Next);

			free(Temp->Next->Next);
			Temp->Next=NULL;
			End=Temp;
		}
}

void Search(int Search_Now)
{
	for(Temp=Start; Temp!=NULL && Temp->Data!=Search_Now; Temp=Temp->Next);

	if(Temp->Data==Search_Now)
		{
			printf("\n%d Is Found",Temp->Data);
			Flag=1;
		}
	else
		{
			printf("\n%d Is Not Found",Search_Now);
			Flag=0;
		}
}

void Update()
{
 clrscr();
	if(Start==NULL)
		{
			printf("List Is Empty");
			return;
		}
	else
		{
			printf("Which Data Do You Eant To Update:- ");
			scanf("%d",&Dummy);

			Search(Dummy);

			if(Flag==1)
				{
					printf("\n\nEnter New Element:- ");
					scanf("%d",&Temp->Data);

					printf("\nRecord Is Updated");
				}
		}
}

void main()
{
	char Choice;

	while(1){
		clrscr();
		printf("# Exit\n");
		printf("0 Create\n");
		printf("1 Display\n");
		printf("2 Insert First\n");
		printf("3 Delete First\n");
		printf("4 Insert Last\n");
		printf("5 Delete Last\n");
		printf("6 Search\n");
		printf("7 Update\n");

		printf("\nEnter Your Choice:- ");
		Choice=getch();

		switch(Choice)
			{
				case '#': exit(0);
				case '0': Create();			getch(); break;
				case '1': Display();			getch(); break;
				case '2': Insert_First();  getch(); break;
				case '3': Delete_First();	getch(); break;
				case '4': Insert_Last();	getch();	break;
				case '5': Delete_Last();	getch(); break;
				case '6':
					clrscr();
					if(Start==NULL)
						{
							printf("List Is Empty");
						}
					else
						{
							printf("Which Data Do You Want To Search:- ");
							scanf("%d",&Dummy);

							Search(Dummy);
						}

					getch();
				break;

				case '7': Update();			getch(); break;
				default: printf("\nInvalid Choice\n");
							printf("Press Any Key...");
							getch();
			}
	}
}