#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**************************\n");
	printf("*******   1. play  *******\n");
	printf("*******   0. exit  *******\n");
	printf("**************************\n");
}

void game()
{
	int num = 0;
	int guess = 0;
	//1. 生成一个随机数
	//设置随机数的生成起点
	num = rand()%100+1;//1-100
	//printf("%d\n", num);
	//2. 猜数字
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if(guess<num)
		{
			printf("猜小了\n");
		}
		else if(guess > num)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你,猜对了\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	//在代码中只要执行一次就可以
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}


//
//int binary_search(int arr[], int k, int left, int right)
//{
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
//			return mid;//找到
//		}
//	}
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,19};
//
//	//折半查找,二分查找
//	int ret = 0;
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//	ret = binary_search(arr, k, left, right);
//	if(ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了,下标是:%d\n", ret);
//
//	return 0;
//}


//
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	//1 2 6  = 9
//	for(j=1; j<=3; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	//1 2 6  = 9
//	for(j=1; j<=3; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
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


// int main()
// {
// 	int i = 1;
// 	
// 	do
// 	{
// 		if(i == 5)
// 			continue;
// 		printf("%d ", i);
// 		i++;
// 	}
// 	while(i<=10);
// 
// 	return 0;
// }



// int main()
// {
// 	int i = 0;
// 	char password[20] = {0};
// 
// 	for(i=0; i<3; i++)
// 	{
// 		printf("请输入密码:>");
// 		scanf("%s", password);//"123456"
// 		if(strcmp(password, "123456") == 0)//strcmp()--字符串比较
// 		{
// 			printf("密码正确,登录成功\n");
// 			break;
// 		}
// 		else
// 		{
// 			printf("密码错误,请重新输入!\n");
// 		}
// 	}
// 	if(i==3)
// 	{
// 		printf("三次密码错误,退出程序\n");
// 	}
// 	return 0;
// }

//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠函数-Windows.h
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}

//
//welcome to bit!!!!!!!
//#####################
//
//w###################!
//we#################!!
//wel###############!!!
//welc#############!!!!
//...
//welcome to bit!!!!!!!
//

//
//int main()
//{
//	int x = 0, y = 0;
//	
//	for(x=0, y=0; y<5, x<2; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int j= 0;
//	for(; i<10 ;i++)
//	{
//		for(; j<10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	//int i = 0;
//	//for(i=0; i<10; i++)
//	//{
//	//	printf("%d\n", i);
//	//}
//
//// 	for(;;)
//// 	{
//// 		printf("hehe\n");
//// 	}
//	return 0;
//}
// int main()
// {
// 	int arr[] = {1,2,3,4,5,6,7,8,9,0};
// 	int i = 0;
// // 	for(i=0; i<10; i++)
// // 	{
// // 		printf("%d ", arr[i]);
// // 	}
// 	for(i=100; i<=200; i++)
// 	{
// 
// 	}
// 	return 0;
// }
//
//int main()
//{
////	int i = 0;
//// 	for(i=1; i<=10; i++)
//// 	{
//// 		printf("%d ", i);
//// 		i = 0;
//// 	}
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		printf("呵呵\n");
//		arr[i] = 0;
//	}
//	return 0;
//}