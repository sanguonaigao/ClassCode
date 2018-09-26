#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	for(i=0; i<line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for(i=0; i<line-1; i++)
//	{
//		//打印一行
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<=999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		//1234
//		while(tmp/10)
//		{
//			count++;
//			tmp = tmp/10;
//		}
//		//2. 计算每一位的次方和
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp = tmp/10;
//		}
//		//3. 判断
//		if(sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//	scanf("%d%d", &a, &n);
//	for(i=0; i<n; i++)
//	{
//		tmp = tmp*10+a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//形参
//实参传给形参的时候
//形参是实参的一份临时拷贝
//改变形参是不会改变实参的
//
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//	if(a<b)
//	{
//		//实参
//		Swap(&a, &b);
//	}
//
//	if(a<c)
//	{
//		Swap(&a, &c);
//	}
//
//	if(b<c)
//	{
//		Swap(&b, &c);
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//
#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	//"123456"
//
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if(0 == strcmp(password, "123456"))
//		{
//			break;
//		}
//		else
//		{
//			printf("密码错误,请重新输入！\n");
//		}
//	}
//	if(i<3)
//	{
//		printf("登录成功\n");
//	}
//	else
//	{
//		printf("退出程序\n");
//	}
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
//
//		printf("%d ", i);
//		i++;
//	}
//	while(i<=10);
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6
//	for(j=1; j<=3; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret = ret * i;	
//		}
//		//
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6
//	for(j=1; j<=3; j++)
//	{
//		ret = ret * j;	
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//
// talk is cheap, show me the code
//
//

//
//int binary_search(int arr[], int key, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]>key)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<key)
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
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	int ret= binary_search(arr, key, left, right);
//	if(ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了:%d\n", ret);
//	return 0;
//}
//
//
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("********************************\n");
//	printf("*******     1. play      *******\n");
//	printf("*******     0. exit      *******\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//RAND_MAX-32767
//	//1.生成随机数
//	int ret = rand()%100+1;
//	int num = 0;
//	//2.猜数字
//	while(1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &num);
//		if(num == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if(num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n")
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
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//





