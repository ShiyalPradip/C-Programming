#include<stdio.h>
#include<conio.h>
void main(){

	int Start, End;
	int i, j=0, k=0;
	int *EvenNo, *OddNo;
	int SumOfEvenNo=0, SumOfOddNo=0;
 clrscr();
	printf("Enter Starting Value:- ");
	scanf("%d",&Start);

	printf("Enter Ending Value:- ");
	scanf("%d",&End);

	for(i=Start; i<=End; i++){

		if(i%2==0){
			EvenNo[j] = i;
			j++;
		}else{
			OddNo[k] = i;
			k++;
		}
	}

	printf("\nEven No : ");
	for(i=0; i<=sizeof(EvenNo); i++){
		SumOfEvenNo += EvenNo[i];
		printf("%d ", EvenNo[i]);
	}

	printf("\nOdd Number: ");
	for(i=0; i<=sizeof(OddNo); i++){
		SumOfOddNo += OddNo[i];
		printf("%d ", OddNo[i]);
	}

	printf("\n\nSum Of Even No : %d", SumOfEvenNo);
	printf("\nSum Of Odd No : %d", SumOfOddNo);
 getch();
}