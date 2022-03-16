#include<stdio.h>
#include<conio.h>
#include<process.h>
#define Limite 900

struct Student
{
	int  	Roll_No,S1,S2,S3,S4,Sum;
	char  Name[45];
	float Per;
};

FILE *fp;

void Choice(void);
void Create_Record(void);
void Add_New_Record(void);
void Update_Record(void);
void Save_Data(void);
void Display_Records(void);
void Delete_Last_Record(void);

struct Student Data[Limite];

int Number=0,i=0;

void main()
{
	Choice();
}

void Choice(void)
{
	char  Choice1;
	int L;

	Label:
 clrscr();
	gotoxy(22,1); for(L=0; L<34; L++) printf("*");
	gotoxy(22,2); printf("*            Choice              *");
	gotoxy(22,3); for(L=0; L<34; L++) printf("*");
	gotoxy(22,4);  printf("*   0  --->   Exit	              *");
	gotoxy(22,5);  printf("*   1  --->   Create Record      *");
	gotoxy(22,6);  printf("*   2  --->   Add New Record     *");
	gotoxy(22,7);  printf("*   3  --->   Update Record      *");
	gotoxy(22,8);  printf("*   4  --->   Save Your Data     *");
	gotoxy(22,9);  printf("*   5  --->   Display Records    *");
	gotoxy(22,10); printf("*   6  --->   Delete Last Record *");
	gotoxy(22,11); for(L=0; L<34; L++) printf("*");

	printf("\n\n\t\t\tEnter Your Choice:- ");
	Choice1=getch();

	switch(Choice1)
		{
			case '0': exit(0);				  break;
			case '1': Create_Record(); 	  break;
			case '2': Add_New_Record();	  break;
			case '3': Update_Record();		  break;
			case '4': Save_Data();			  break;
			case '5': Display_Records();    break;
			case '6': Delete_Last_Record(); break;
			default : gotoxy(26,16); printf("-> Error:- ");
						 gotoxy(32,18); printf("Invalid Choice");
						 gotoxy(31,20); printf("Press Any Key.....");

						 getch();

						 goto Label;
		}
}

void Create_Record(void)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	printf("How Many Student Data Do You Want To Enter:- ");
	scanf("%d",&Number);

	for(i=0; i<Number; i++)
		{
			printf("\nEnter Roll No      :- ");
			scanf("%d",&Data[i].Roll_No);
			fflush(stdin);
			printf("Enter Student Name :- ");
			gets(Data[i].Name);
			printf("Enter S1 Mark      :- ");
			scanf("%d",&Data[i].S1);
			printf("Enter S2 Mark      :- ");
			scanf("%d",&Data[i].S2);
			printf("Enter S3 Mark      :- ");
			scanf("%d",&Data[i].S3);
			printf("Enter S4 Mark      :- ");
			scanf("%d",&Data[i].S4);

			Data[i].Sum = Data[i].S1 + Data[i].S2 + Data[i].S3 + Data[i].S4;
			Data[i].Per = (Data[i].Sum * 100.0) / 400;
		}
 Choice();
}

void Add_New_Record(void)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	printf("Enter Roll No      :- ");
	scanf("%d",&Data[i].Roll_No);
	fflush(stdin);
	printf("Enter Student Name :- ");
	gets(Data[i].Name);
	printf("Enter S1 Mark      :- ");
	scanf("%d",&Data[i].S1);
	printf("Enter S2 Mark      :- ");
	scanf("%d",&Data[i].S2);
	printf("Enter S3 Mark      :- ");
	scanf("%d",&Data[i].S3);
	printf("Enter S4 Mark      :- ");
	scanf("%d",&Data[i].S4);
	Data[i].Sum = Data[i].S1 + Data[i].S2 + Data[i].S3 + Data[i].S4;
	Data[i].Per = (Data[i].Sum * 100.0) / 400;
	Number++;

	Choice();
}

void Update_Record(void)
{
	struct Student Temp;

	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	if(Number==0)
		{
			window(1,1,80,25);
			textbackground(BLACK);
			clrscr();

			gotoxy(34,12); printf("List Is Empty");
			gotoxy(33,14); printf("Press Any Key.....");

			getch();

			Choice();
		}
	printf("Enter The Roll No Of The Student Whose Record You Want To Update:- \n");
	scanf("%d",&Temp.Roll_No);

	for(i=0; i<Number; i++)
		{
			if(Temp.Roll_No==Data[i].Roll_No)
				{
					fflush(stdin);
					printf("Enter Student Name :- ");
					gets(Temp.Name);
					printf("Enter S1 Mark      :- ");
					scanf("%d",&Temp.S1);
					printf("Enter S2 Mark      :- ");
					scanf("%d",&Temp.S2);
					printf("Enter S3 Mark      :- ");
					scanf("%d",&Temp.S3);
					printf("Enter S4 Mark      :- ");
					scanf("%d",&Temp.S4);
					Temp.Sum = Temp.S1 + Temp.S2 + Temp.S3 + Temp.S4;
					Temp.Per = (Temp.Sum * 100.0) / 400;

					Data[i]=Temp;
				}
		}
 Choice();
}

void Save_Data(void)
{
	fp=fopen("Student.xls","w");
	fprintf(fp,"Roll No\tName\tS1\tS2\tS3\tS4\tSum\tPer\n");
	fclose(fp);

	if(Number==0)
		{
			window(1,1,80,25);
			textbackground(BLACK);
			clrscr();

			gotoxy(34,12); printf("List Is Empty");
			gotoxy(33,14); printf("Press Any Key.....");

			getch();

			Choice();
		}

	fp=fopen("Student.xls","a");

	for(i=0; i<Number; i++)
		{
			fprintf(fp,"%d\t",Data[i].Roll_No);
			fprintf(fp,"%s\t",Data[i].Name);
			fprintf(fp,"%d\t",Data[i].S1);
			fprintf(fp,"%d\t",Data[i].S2);
			fprintf(fp,"%d\t",Data[i].S3);
			fprintf(fp,"%d\t",Data[i].S4);
			fprintf(fp,"%d\t",Data[i].Sum);
			fprintf(fp,"%f\n",Data[i].Per);
		}
	fclose(fp);

	clrscr();
	gotoxy(29,12); printf("Your Data Has Been Saved");
 getch();
 Choice();
}
void Display_Records(void)
{
	int j;

	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	if(Number==0)
		{
			window(1,1,80,25);
			textbackground(BLACK);
			clrscr();

			gotoxy(34,10); printf("List Is Empty");
			gotoxy(33,12); printf("Press Any Key.....");

			getch();

			Choice();
		}

	for(i=0; i<Number; i++)
		{
			clrscr();

			for(j=0; j<80; j++) printf("*");
			gotoxy(36,2); printf("Student Data\n");
			for(j=0; j<80; j++) printf("*");

			printf("Student Name     :- %s\n",Data[i].Name);
			printf("Student Roll No  :- %d\n",Data[i].Roll_No);
			printf("Student S1 Mark  :- %d\n",Data[i].S1);
			printf("Student S2 Mark  :- %d\n",Data[i].S2);
			printf("Student S3 Mark  :- %d\n",Data[i].S3);
			printf("Student S4 Mark  :- %d\n",Data[i].S4);
			printf("Sum Of Mark      :- %d\n",Data[i].Sum);
			printf("Per Of Mark      :- %f",Data[i].Per);

			printf("\n\n\n\n\tPress Any Key For See NEXT Data --->>");
			getch();
	  }
	printf("\n\n\n\n\t\t\t\t List Is Over");
	printf("\n\n\t\t\t\t Press Any Key.......");

	getch();

	Choice();
}

void Delete_Last_Record(void)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	if(Number==0)
		{
			window(1,1,80,25);
			textbackground(BLACK);
			clrscr();

			gotoxy(34,10); printf("List Is Empty");
			gotoxy(33,12); printf("Press Any Key.....");

			getch();

			Choice();
		}

	gotoxy(28,10); printf("Last Record Is Deleted");
	Number--;

	getch();

	Choice();
}