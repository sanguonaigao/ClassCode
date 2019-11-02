#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//int ch = getchar();
//	//printf("%c\n", ch);
//	//ch = getchar();
//	////printf("%c\n", ch);
//	//putchar(ch);
//
//	int ch = 0;
//	while((ch=getchar()) != EOF)//end of file
//	{
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//int i = 1;//初始化
//
//	//while(i<=10)//判断
//	//{
//	//	printf("%d ", i);
//
//	//	i++;//调整
//	//}
//
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", i);
//		i=4;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	/*for(;;)
//	{
//		printf("hehe\n");
//	}*/
//	int i = 0;
//	int j = 0;
//	for(i=0; i<10; i++)
//	{
//		for(; j<10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}
//
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
//1*2*3****n
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);//5
//	for(i=1; i<=n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=10; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret*i;
//		}
//		sum  = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=10; n++)
//	{
//		ret = ret*n;
//		sum  = sum + ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;
//	int left = 0;
//	int right = 9;
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
//		printf("找不到\n");
//	}
//	return 0;
//}


//welcome to bit!!!!!!
//####################
//w##################!
//we################!!
//wel##############!!!
//...
//welcome to bit!!!!!!
#include <string.h>
#include <windows.h>
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
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		//"123456"
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)//string compare
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入!\n");
//		}
//	}
//	if(i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//	return 0;
//}
//
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("*****      1. play         ******\n");
//	printf("*****      0. exit         ******\n");
//	printf("*********************************\n");
//}
////RAND_MAX
////0-32767
//
//void game()
//{
//	//1. 生成随机数
//	int ret = rand()%100+1;
//	int guess = 0;
//	//2. 猜数字
//	while(1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if(ret > guess)
//		{
//			printf("猜小了\n");
//		}
//		else if(ret < guess)
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
//			//玩游戏
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}
//
//
//


//int main()
//{
//flag:
//	printf("hehe\n");
//	goto flag;
//
//	return 0;
//}


//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机,如果输入：我是猪，就取消关机\n");
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
//		printf("请注意，你的电脑在1分钟内关机,如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if(strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


int main()
{
	//char arr1[20] = {0};
	//char arr2[] = "bit";
	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);
	char arr[] = "hello bit";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}
