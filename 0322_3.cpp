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
	//z값을 어디까지 돌릴지 구하기 위한 계산 
	int colA=sizeof(A[0])/sizeof(int);
	
	int AB[2][2]={0};
	//행렬의 곱 구하기 
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			for (int z=0;z<colA;z++){
				AB[i][j] += A[i][z]*B[z][j];
			}
		}
	}
	//구한 행렬 출력 
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("%d ",AB[i][j]);
		}
		printf("\n");
	}
	return 0;
}
