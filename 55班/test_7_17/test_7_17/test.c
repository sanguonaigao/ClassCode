#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//	int i = 1;
//	do
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}while(i<=10);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	//scanf("%d", &n);
//	//1 + 2 + 6 = 9
//
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;//sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for(n=1; n<=3; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;//sum += ret;
//	}
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;
//
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	//二分查找/折半查找
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
//			printf("找到了:%d\n", mid);
//			break;
//		}
//	}
//	//
//	if(left>right)
//	{
//		printf("很遗憾，找不到\n");
//	}
//
//	system("pause");
//	return 0;
//}

//
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//...
//welcome to bit!!!!!
//
#include <string.h>
#include <windows.h>
//
//int main()
//{
//	char arr[] = "abc";//[a b c \0]
//
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
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
//		//睡眠
//		Sleep(1000);
//		system("cls");
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
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)//strcmp strlen
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误!\n");
//		}
//	}
//	if(i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//	system("pause");
//	return 0;
//}
//
//void menu()
//{
//	printf("***********************************\n");
//	printf("********      1.play       ********\n");
//	printf("********      0.exit       ********\n");
//	printf("***********************************\n");
//}
////time_t
//void game()
//{
//	//1. 生成一个随机数
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("ret = %d\n", ret);
//	//RAND_MAX
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
//	srand((unsigned int)time(NULL));//时间戳
//
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
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}

//
//int main()
//{
//	//shutdown -s -t 60
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
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
//
//int main()
//{
//	//shutdown -s -t 60
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		//strcmp--判断两个字符串是否相等
//		//相等返回0
//		//第一个字符串大于第二个字符串的时候，返回>0
//		//第一个字符串小于第二个字符串的时候，返回<0
//
//		if(strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

