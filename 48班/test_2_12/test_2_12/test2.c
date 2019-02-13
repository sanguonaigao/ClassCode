#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
	int i = 0;
	int j = 0;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			//printf("%d ", arr[i][j]);
			printf("%p\n", &arr[i][j]);
		}
		//printf("\n");
	}
	system("pause");
	return 0;
}
//
//int main()
//{
//	//f(x) = 2*x+1;
//	int arr[] = {1,2,3,4,5};
//	int i = 0;
//	int* p = arr;
//
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		//printf("%d ", arr[i]);
//		//printf("%p == %p\n", &arr[i], p+i);
//		printf("%d ", *(p+i));
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int day = 10;
//	switch(day)
//	{
//	case 1:
//		break;
//	}
//	return 0;
//}
//
//int main()
//{
//	int num = 10;//4
//	int * p = &num;//p是指针变量
//	printf("%d\n", num);
//	*p = 20;//解引用
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
