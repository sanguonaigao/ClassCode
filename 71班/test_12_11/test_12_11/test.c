#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//二分查找/折半查找
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	int k = 17;
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
//		else if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("找到了:%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//welcome to bit!!!!!!
//####################
//w##################!
//we################!!
//wel##############!!!
//..
//welcome to bit!!!!!!

#include <string.h>
//
//#include <windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//
//	int left = 0;
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
//strlen - 求字符串长度 string length
//strcmp - 字符串比较   string compare
//strcpy - 字符串拷贝   string copy
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
//	return 0;
//}

#include <stdlib.h>
#include <time.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****      1. play       ****\n");
//	printf("*****      0. exit       ****\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	//猜数字游戏的实现
//	//1. 生成随机数
//	//0-32767
//	//时间戳 
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2. 猜数字
//	while(1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess < ret)
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
//		menu();//菜单
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
//


//int main()
//{
//flag:
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}
//
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关进，如果输入：我是猪，就取消关机\n");
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
//	while(1)
//	{
//		printf("请注意，你的电脑在1分钟内关进，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if(strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//size_t

//int main()
//{
//	//char buf1[20] = {0};
//	//char buf2[] = "bit";
//	//strcpy(buf1, buf2);
//	//printf("%s\n", buf1);
//	char arr[] = "hello bit";
//	memset(arr, '#', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	/*if(x>y)
//	return x;
//	else
//	return y;*/
//	return ((x>y)?x:y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//x,y 形式参数
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//a,b 实参
//	Swap(a, b);
//	//当实参传给形参的时候
//	//形参是实参的一份临时拷贝
//	//对于形参的修改不会影响实参
//
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//
//void Swap2(int* pa, int *pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//a,b 实参
//	Swap2(&a, &b);
//	//当实参传给形参的时候
//	//形参是实参的一份临时拷贝
//	//对于形参的修改不会影响实参
//
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//


