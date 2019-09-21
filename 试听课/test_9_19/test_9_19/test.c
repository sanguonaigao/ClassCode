#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//main-主函数-程序的入口
//
//int main()
//{
//	//输出库函数
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//	return 0;
//}
//

//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//	total = money*2-1;
//
//	//total = money;
//	//empty = money;
//	////置换
//	//while(empty>=2)
//	//{
//	//	total += empty/2;
//	//	empty = empty/2 + empty%2;
//	//}
//	printf("total = %d\n", total);
//
//	return 0;
//}

void problem(int* src, long long* dst, int n)
{
	int i = 0;
	dst[0] = 1;
	//
	for (i = 1; i < n; ++i)
	{
		dst[i] = dst[i - 1] * src[i - 1];
	}

	for (i = n - 1; i > 0; --i)
	{
		dst[i] *= dst[0];
		dst[0] *= src[i];
	}
}
int main()
{
	int i = 0;
	int arr1[] = {1,2,3,4,5};
	long long arr2[5] = {0};
	problem(arr1, arr2, 5);
	for(i=0; i<5; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}