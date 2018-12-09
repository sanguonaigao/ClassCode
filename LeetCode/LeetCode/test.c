#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//1
//1 1
//1 2 1
//1 3 3 1
//
//leetcode 打印杨辉三角
//

int** generate(int numRows, int** columnSizes) {
	int i = 0;
	//开辟存放杨辉三角的二维数组
	int **arr = (int **)calloc(numRows , sizeof(int*));
	for(i=0; i<numRows; i++)
	{
		arr[i] = (int*)calloc((i+1),sizeof(int));
	}
	*columnSizes = (int*)calloc(numRows, sizeof(int));
	for(i=0; i<numRows; i++)
	{
		int j = 0;
		columnSizes[0][i] = i;
		for(j=0; j<=i; j++)
		{
			if(i==j || j==0)
				arr[i][j] = 1;
			else if(i>1 && j>0)
				arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
		}
	}
	return arr;
}

int main()
{
	int *ret = NULL;
	int **arr = generate(3, &ret);
	int i = 0;
	int j = 0;
	for(i=0; i<3; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<3; i++)
	{
		free(arr[i]);
	}
	free(arr);
	free(ret);
	system("pause");

	return 0;
}
