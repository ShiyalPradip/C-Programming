struct Student
{
	int   Sem,Roll_No,S1,S2,S3,S4,Sum;
	char  Name[45];
	long  Set_No;
	float Per;

}Data;

FILE *fp,*fp1,*fp2,*fp3;

int   Gd=0,Gm;
int   i,j=0,k,Flag=0,Admin=0,Temp;
int   Temp_Roll_No,Temp_Sem;
char  UserName[45],Temp_UserName[45];
char  Password[45],Temp_Password[45];
char  Choice;