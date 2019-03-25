#define _CRT_SECURE_NO_WARNINGS 1

//

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//
//当实参传给形参的时候
//形参是实参的一份临时拷贝
//对形参的修改不会改变实参
//

//形参
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

void Swap(int *px, int *py)
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
	//实参
	Swap(&a, &b);
	printf("a = %d b = %d\n", a, b);

	/*int n = 10;
	int* p = &n;
	*p = 20;
	*/
	system("pause");
	return 0;
}
//f(x, y) = x+y
// 
// int get_max(int x, int y)
// {
// 	if(x>y)
// 		return x;
// 	else
// 		return y;
// }
// 
// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int max = get_max(a, b);
// 	printf("max = %d\n", max);
// 	system("pause");
// 	return 0;
// }
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);//
//	system("pause");
//	return 0;
//}
////NULL-空指针

//null
//NUL
//'\0'
//
//int main()
//{
//	//f(x) = 2*x+1;
//	//f(x, y) = x+y;
//	char arr1[20] = {0};
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	//
//	//VMWare workstation
//	//.vmdk
//	//
//	system("pause");
//	return 0;
//}
//int main()
//{
//flag:
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}
//
//int main()
//{
//	char input[20] = {0};
//	//关机
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
//int main()
//{
//	char input[20] = {0};
//	//关机
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if(strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



//
//void menu()
//{
//	printf("********************************\n");
//	printf("******       1. play       *****\n");
//	printf("******       0. exit       *****\n");
//	printf("********************************\n");
//}
//
////time_t
//void game()
//{
//	//0-RAND_MAX
//	//NULL-0
//	//初始指针
//	//int *p = NULL;
//	//1. 生成随机数
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2. 猜数字
//	while(1)
//	{
//		printf("请输入你要猜的数字(1-100):>");
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
//
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			//玩游戏
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误, 重新选择!\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);//"123456"
//		if(strcmp(password, "123456") == 0)//string compare
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入！\n");
//		}
//	}
//	//
//	if(i == 3)
//		printf("三次密码都错，退出程序\n");
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//welcome to bit!!!!!
//	//###################
//	//w#################!
//	//we###############!!
//	//wel#############!!!
//	//..
//	//welcome to bit!!!!!
//
//	char arr[] = "bit";//4
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
//		Sleep(100);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);	
//	system("pause");
//	return 0;
//}

//
//int binary_search(int arr[], int k, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] < k)
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
//	return -1;
//}

//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] < k)
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
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);	
//	int k = 7;
//	//int left = 0;
//	//int right = sz-1;
//	//调用二分查找函数
//	//&arr[0]
//	int ret = binary_search(arr, k, sz);
//	if(-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);	
//	int k = 17;
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//		printf("找不到\n");
//	
//	system("pause");
//	return 0;
//}