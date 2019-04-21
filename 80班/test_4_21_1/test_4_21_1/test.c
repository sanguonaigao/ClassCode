#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<k)
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
//	//二分查找/折半查找
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//	if(-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是：%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
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
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//	int right = strlen(arr1)-1;
//	//
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
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	//"123456"
//	char password[20] = {0};
//
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)//string compare   strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入!\n");
//		}
//	}
//	//
//	if(i == 3)
//	{
//		printf("三次密码输入错误，退出程序\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
//#include <time.h>
//
//void menu()
//{
//	printf("************************\n");
//	printf("******   1. play  ******\n");
//	printf("******   0. exit  ******\n");
//	printf("************************\n");
//}
//
////时间戳
//
//void game()
//{
//	//0x7fff
//	//0111 1111 1111 1111
//	//
//	//RAND_MAX
//	//1. 生成随机数
//	int num  = 0;
//	int guess = 0;
//	num = rand()%100+1;
//
//	//printf("%d\n", num);
//	//2. 猜数字
//	while(1)
//	{
//		printf("请猜数字(1-100)>:");
//		scanf("%d", &guess);
//		if(guess < num)
//		{
//			printf("猜小了\n");
//		}
//		else if(guess > num)
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
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//time_t  == unsigned int
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
//			printf("选择错误！\n");
//			break;
//		}
//		//
//	} while (input);
//	return 0;
//}
//
//
//void test()
//{
//again:
//	printf("test\n");
//}
//
//int  main()
//{
//	printf("hehe\n");
//	goto again;
//	return 0;
//}

//
//int main()
//{
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
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//
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
//	
//	return 0;
//}
//


//
//int  main()
//{
//	/*do
//	printf("hehe\n");
//	while(1);*/
//
//	int i = 1;
//	do
//	{
//		printf("%d ", i);//1
//		i++;
//	}
//	while(i<=10);
//	system("pause");
//	return 0;
//}


// f(x) = 2*x+1;
// f(x, y) = x+y;

//NULL-空指针
//null-'\0'
//NUL -'\0'
//size_t 
//int main()
//{
//// 	char arr1[20] = "aaaaaaaa";
//// 	char arr2[] = "bit";
//// 	strcpy(arr1, arr2);
//// 	printf("%s\n", arr1);
//	char arr[] = "hello bit";
//
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	system("pause");
//	return 0;
//}
//
int get_max(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	int a = 10;
	int b = 20;
	//
	int max = get_max(3+5, get_max(3, 7));
	printf("max = %d\n", max);

	system("pause");
	return 0;
}


//当实参传给形参的时候
//形参是实参的一份临时拷贝
//对形参的修改不会改变实参

//形参
//void Swap1(int x, int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
//void Swap2(int *px, int *py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int temp = 0;
//	printf("a = %d b = %d\n", a, b);
//	//实参
//	//Swap1(a, b);
//	Swap2(&a, &b);
//	//temp = a;
//	//a = b;
//	//b = temp;
//	
//	printf("a = %d b = %d\n", a, b);
//
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}