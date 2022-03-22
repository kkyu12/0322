#include <stdio.h>

int main()
{
	int A[2][2]={
	{3,4},
	{5,6}
	};
	int B[2][2]={
	{1,5},
	{3,2}
	};
	
	int AB[2][2]={0};
	
	AB[0][0]=A[0][0]*B[0][0]+A[0][1]*B[1][0];
	AB[0][1]=A[0][0]*B[0][1]+A[0][1]*B[1][1];
	AB[1][0]=A[1][0]*B[0][0]+A[1][1]*B[1][0];
	AB[1][1]=A[1][0]*B[0][1]+A[1][1]*B[1][1];
	
	/*
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			AB[i][j]=A[i][j]*B[i][j]+A[i]B[j+1]*B[i+1][j];
		}
	}
	*/
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("%d ",AB[i][j]);
		}
		printf("\n");
	}
	return 0;
}
