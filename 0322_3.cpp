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
	//z���� ������ ������ ���ϱ� ���� ��� 
	int colA=sizeof(A[0])/sizeof(int);
	
	int AB[2][2]={0};
	//����� �� ���ϱ� 
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			for (int z=0;z<colA;z++){
				AB[i][j] += A[i][z]*B[z][j];
			}
		}
	}
	//���� ��� ��� 
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("%d ",AB[i][j]);
		}
		printf("\n");
	}
	return 0;
}
