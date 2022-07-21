#include<stdio.h>
#include<conio.h>

void Merge( int Arr[], int l, int m, int r)
{
	int i,j,k;
	int N1 = m - l + 1;
	int N2 = r - m;

	int *L = malloc(N1);
	int *R = malloc(N2);

	for(i=0; i<N1; i++)
		{
			L[i] = Arr[l+i];
		}

	for(j=0; j<N2; j++)
		{
			R[j] = Arr[ m + 1 + j];
		}

	i=0; j=0; k=l;

	while( i < N1 && j < N2 )
		{
			if( L[i] <= R[j] )
				{
					Arr[k] = L[i];
					i++;
				}
			else
				{
					Arr[k] = R[j];
					j++;
				}

			k++;
		}

	while( i < N1)
		{
			Arr[k] = L[i];
			i++;
			k++;
		}

	while( j < N2 )
		{
			Arr[k] = R[j];
			j++;
			k++;
		}
}

void Merge_Sort( int Arr[] , int l , int m, int r)
{
	if( l < r )
		{
			int m = l + ( r - l ) / 2;

			Merge_Sort( Arr, l, m);
			Merge_Sort( Arr, m + 1, r);
			Merge_Sort( Arr, l, r);
		}
}

void Print_Array( int A[], int Size)
{
	int i;

	for(i=0; i<Size; i++)
		{
			printf("%d ",A[i]);
		}
}

void main()
{
	int Arr[]={12,11,13,5,6,7};
	int Arr_Size = sizeof(Arr) / sizeof(Arr[0]);
 clrscr();

	printf("Given Array:- \n\n");

	Print_Array( Arr, Arr_Size);
	//Print_Array( Arr, 0, Arr_Size-1);

	Merge_Sort( Arr, 0, Arr_Size-1);
	printf("\n\nSorted Array :- \n\n");

	Print_Array( Arr, Arr_Size);
 getch();
}