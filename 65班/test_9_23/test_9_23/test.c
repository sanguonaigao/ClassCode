#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("很遗憾，找不到\n");
//	}
//
//	return 0;
//}
//
//int binary_search(int arr[], int k)
//{
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
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
//	//找不到
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	
//	int ret = 0;
//	ret = binary_search(arr, k);
//	if(ret == -1)
//	{
//		printf("很遗憾，找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	
//
//	return 0;
//}
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
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
//	//找不到
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = 0;
//	ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("很遗憾，找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//...
//welcome to bit!!!!!

#include <string.h>
#include <windows.h>
//
//int main()
//{
//	char arr[] = "bit";
//
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
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
//
//	return 0;
//}
//
//strlen-字符串求长度
//strcmp-字符串比较
//
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if(i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//
//	return 0;
//}


//猜数字游戏

void menu()
{
	printf("****************************\n");
	printf("*****      1. play     *****\n");
	printf("*****      0. exit     *****\n");
	printf("****************************\n");
}
 //RAND_MAX


#include <stdlib.h>
#include <time.h>
//
//void game()
//{
//	//1. 生成随机值
//	int ret = 0;
//	int guess = 0;
//	//时间戳
//	ret = rand()%100+1;
//
//	//printf("%d\n", ret);
//	//2. 猜数字
//	while(1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if(guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if(guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
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
//	return 0;
//}
//

//void Test()
//{
//flag:
//	printf("haha\n");
//}

//int main()
//{
//flag:
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}
//

#include <stdlib.h>
#include <string.h>
//
//int main()
//{
//	char input[20] = {0};
//	//关机程序
//	system("shutdown -s -t 60");
//again:
//	printf("请注意你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if(strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//
//int main()
//{
//	char input[20] = {0};
//	//关机程序
//	system("shutdown -s -t 60");
//
//	while(1)
//	{
//		printf("请注意你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if(strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	
//	return 0;
//}
//

//f(x) = 2*x+5;
//
//int f(int x)
//{
//	return 2*x+5;
//}
//
//int main()
//{
//	int n = 2;
//	int ret = f(n);
//	printf("%d\n", ret);
//	return 0;
//}
//size_t
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "hello world";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%s\n", arr);
//
//	memset(arr+6, '*', 3);
//	printf("%s\n", arr);
//	return 0;
//}