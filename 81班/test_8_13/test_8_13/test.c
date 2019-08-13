#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//int main()
//{
//	/*for(;;)
//	{
//	printf("hehe\n");
//	}*/
//
//// 	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		printf("%d ", i);
//// 	}
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
//	//10 x 10 
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
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);//5
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);//5
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);//5
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//
// 
// int main()
// {
// 	int arr[] = {1,2,3,4,5,6,7,8,9,10};
// 	int n = 70;
// 
// 	int left = 0;
// 	int right = sizeof(arr)/sizeof(arr[0])-1;
// 
// 	while(left<=right)
// 	{
// 		int mid = (left+right)/2;
// 		if(arr[mid] > n)
// 		{
// 			right = mid-1;
// 		}
// 		else if(arr[mid] < n)
// 		{
// 			left = mid+1;
// 		}
// 		else 
// 		{
// 			printf("找到了:%d\n", mid);
// 			break;
// 		}
// 	}
// 	if(left>right)
// 		printf("找不到\n");
// 	return 0;
// }
// 


//welcome to bit!!!!!!
//####################
//w##################!
//we################!!
//wel##############!!!
//...
//welcome to bit!!!!!!
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//
//int main()
//{
//	//char arr[] = "abc";
//	//a b c \0
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	//int sz = sizeof(arr1)/sizeof(arr1[0]);
//	int sz = strlen(arr1);
//
//	int left = 0;
//	int right = sz-1;
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
//int main()
//{
//	//"123456"
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
//		printf("三次密码均输入错误，退出程序\n");
//	}
//	return 0;
//}
//

void menu()
{
	printf("****************************\n");
	printf("*****     1. play       ****\n");
	printf("*****     0. exit       ****\n");
	printf("****************************\n");
}

//RAND_MAX-32767
//65535
//127
//255
//char
//11111111
//01111111
//10000000
#include <time.h>
//
//void game()
//{
//	int ret = 0;
//	int num = 0;
//	//1. 生成随机数
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2. 猜数字
//	while(1)
//	{
//		printf("请输入要猜的数字:>");
//		scanf("%d", &num);
//		if(num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(num < ret)
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
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//时间戳
//	do 
//	{
//		menu();//菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();//玩游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
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
//	return 0;
//}
//
//

//关机程序
//
//int main()
//{
//	//关机
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关进，如果输入：我是猪，就取消关机\n");
//	printf(">:");
//	scanf("%s", input);//
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
//	//关机
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//
//	while(1)
//	{
//		printf("请注意，你的电脑在1分钟内关进，如果输入：我是猪，就取消关机\n");
//		printf(">:");
//		scanf("%s", input);//
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

//
//系统调用
//linux   系统api
//
//<C和指针>
//<C专家编程>
//<C陷阱和缺陷>
//

void test()
{
flag:
	printf("test\n");
}

int main()
{
	printf("hehe\n");
	goto flag;
	return 0;
}