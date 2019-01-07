#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int i = 0;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
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
//


//int binary_search(int *arr, int k)
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是:%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}


#include <stdio.h>

//
//welcome to bit!!!!
//##################
//w################!
//we##############!!
//wel############!!!
//...
//welcome to bit!!!!
//
#include <windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
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
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[10] = {0};
//	//"123456"
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if(i>=3)
//		printf("三次密码均输入错误，退出程序\n");
//	system("pause");
//	return 0;
//}
//
//#include <time.h>
//
//void menu()
//{
//	printf("******************************\n");
//	printf("****   1. play   0.exit    ***\n");
//	printf("******************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	//time_t
//	//1. 生成一个随机数
//	ret = rand()%100+1;
//	//printf("ret = %d\n", ret);
//	//2. 猜数字
//	while(1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误， 重新选择!\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}

//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}
#include <string.h>
//
//int main()
//{
//	char input[10] = {0};
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("请注意，你的电脑在1分钟后关机，如果输入：我是猪，就取消关机！\n");
//		scanf("%s", input);
//		if(strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}


//f(x) = 2*x+1;
//
//int main()
//{
//	char arr[10] = "aaaaaaaa";
//	char arr2[] = {'b', 'i', 't'};
//	strcpy(arr, arr2);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%s\n", arr);
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
int get_max(int x, int y)
{
	return (x>y?x:y);
}

//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}

void Swap(int* px, int *py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	Swap(&a, &b);
	printf("a = %d b = %d\n", a, b);

	//int max = a>b?a:b;
	//int max = get_max(a, b);
	//printf("max = %d\n", max);
	system("pause");
	return 0;
}
