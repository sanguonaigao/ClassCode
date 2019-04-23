#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	//int i = 1;//初始化
//	//while(i<=10)//判断
//	//{
//	//	printf("%d ", i);
//	//	i++;//调整
//	//}
//
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//		i = 5;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 20;
//		//printf("%d\n", arr[i]);
//		//printf("hehe\n");
//		//arr[i] = 0;
//	}
//
//	//system("pause");
//	return 0;
//}
//
//
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	for(i=0; i<=9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	for(i=100; i<201; i++)
//	{
//
//	}
//
//	return 0;
//}
//
//int main()
//{
//	/*for(;;)
//	{
//	printf("hehe\n");
//	}*/
//
//	int i = 0;
//	int j = 0;
//	for(; i<10; i++)
//	{
//		for(; j<10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; y<5, x<2 ; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int b = a=0;
//	2+3;
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while(i<=10);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int i= 0;
//	int ret = 1;
//	scanf("%d", &n);//10
//	for(i=1; i<=n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i= 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret*i;
//		}
//		sum += ret;//sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i= 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = ret*n;
//		sum += ret;//sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	
//	//int a = 2147483646;
//	//int b = 2147483646;
//
//	////int c = (a+b)/2;
//	//int c = (a-b)/2+b;
//
//	//printf("%d\n", c);
//	//system("pause");
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;
//
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("找不到\n");
//	}
//	system("pause");
//	return 0;
//}

//welcome to bit!!!!
//##################
//w################!
//we##############!!
//...
//welcome to bit!!!!
#include <string.h>
#include <windows.h>
//
//int main()
//{
//	char arr[] = "bit";
//
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//	int right = strlen(arr1)-1;
//
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//}

//"123456"
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)//string compare
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误！\n");
//		}
//	}
//	if(i == 3)
//		printf("三次密码输入错误，退出程序\n");
//
//	system("pause");
//	return 0;
//}
//
				 //int* arr, int k
//int binary_search(int arr[10], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//找不到
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了：%d\n", ret);
//	}
//
//	system("pause");
//	return 0;
//}



