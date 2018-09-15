#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int n = 5;
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for(n=1; n<=3; n++)
//	{
//		//for(i=1; i<=n; i++)
//		//{
//			ret = ret*n;
//		//}
//		sum  = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}
//
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	//int right = sizeof(arr)/sizeof(arr[0])-1;//err
//	int right = sz-1;
//	int mid = (left+right)/2;
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] == k)
//		{
//			return mid;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			right = mid-1;
//		}
//	}
//	//
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int k = -1;
//	//TDD--测试驱动开发
//	//数组传参的时候，传递的是数组首元素的地址
//	//所以这里的arr是一个地址
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d\n", ret);
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("************************\n");
//	printf("******    1.play   *****\n");
//	printf("******    0.exit   *****\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	//1. 生成一个随机数
//	int ret = 0;
//	int n = 0;
//	ret = rand()%101;
//	//2. 猜数字
//	while(1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &n);
//		if(n == ret)
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//		else if(n>ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n");
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
//			//玩游戏
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
// int main()
// {
// 	int ch = 0;
// 	while((ch=getchar()) !=EOF)
// 	{
// 		if(ch>='a' && ch<='z')
// 		{
// 			putchar(ch-32);
// 		}
// 		else if(ch>='A' && ch<='Z')
// 		{
// 			putchar(ch+32);
// 		}
// 		else if(ch>='0' && ch<='9')
// 		{
// 			;
// 		}
// 		else
// 		{
// 			putchar(ch);
// 		}
// 	}
// 	return 0;
// }

// int main()
// {
// 	int a = 10;
// 	//int b = 3;
// 	int c = a%3;//1
// 	return 0;
// }

// 
// int main()
// {
// 	int a = 7;	
// 	//00000000000000000000000000000111
// 	//00000000000000000000000000100000
// 	//00000000000000000000000000000001
// 	//00000000000000000000000000000001
// 
// 	//int a = 3;
// 	//int b = -2;
// 	//int c = a^b;//
// 	//printf("%d\n", c);
// 
// 	//
// 	//00000000000000000000000000000011
// 	//11111111111111111111111111111110
// 	//11111111111111111111111111111101
// 	//11111111111111111111111111111100
// 	//10000000000000000000000000000011
// 	//
// 	//
// 
// 	//10000000000000000000000000000010
// 	//11111111111111111111111111111101
// 	//11111111111111111111111111111110
// 
// 	//00000000000000000000000000000110
// 	//
// 
// 	//int a = 10;
// 
// 	//a>>-3;//
// 	//a<<3;
// 
// 
// 	//int a = -1;
// 	//int b = a>>1;
// 	//00000000000000000000000000000001
// 	//
// 	//1111
// 	//10000000000000000000000000000001--原码
// 	//11111111111111111111111111111110--反码
// 	//11111111111111111111111111111111--补码
// 
// 	//
// 	//00000000000000000000000000000001
// 	//00000000000000000000000000000011
// 	//
// 	//
// 	//00000000000000000000000000001010
// 	//
// 	//int c = a>>2;//
// 
// 	//printf("%d\n", c);
// 	//printf("%d\n", a);
// 
// 	return 0;
// }
// 


// void test()
// {
// 	printf("hehe\n");
// }

// int main()
// {
// 	//printf("%p\n", &test);
// 	//int arr[10] = {0};
// 	//printf("%p\n", &arr);//1
// 	//printf("%p\n", &arr+1);//2
// 
// 	//printf("%p\n", arr);//1
// 	//printf("%p\n", arr+1);//2
// 
// 
// 	//int a = 10;
// 	//int* p = &a;
// // 	int a = 0;
// // 	if(!a)
// // 	{
// // 
// // 	}
// 	//printf("%d\n", !a);//
// 	//a/=2;
// 	//a = a&1;
// 	//a &= 1;
// 
// // 	a = a+1;//1
// // 	a += 1; //2
// 
// 	return 0;
// }

// 
// int main()
// {
// 	short s = 20;
// 	int a = 3;
// 	printf("%d\n", sizeof(s=a+10));//2
// 	printf("%d\n", s);//20
// 	printf("%d\n", a);//3
// 
// 	//
// 
// 	//int arr[10] = {0};
// 	//int a = 10;
// 
// 	//int sz = sizeof(arr)/sizeof(arr[0]);
// // 
// // 	printf("%d\n", sizeof(arr));//40
// // 	printf("%d\n", sizeof(int [9]));//36
// // 
// // 	printf("%d\n", sizeof(a));//4
// // 	printf("%d\n", sizeof(int));//4
// // 
// 
// 	return 0;
// }
// 
// int main()
// {
// 	int a = -1;
// 	//00000000000000000000000000000000
// 	//11111111111111111111111111111111
// 	//
// 	printf("%d\n", ~a);//
// 	return 0;
// }



