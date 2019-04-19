#define _CRT_SECURE_NO_WARNINGS 1

//switch
#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int day = 0;//
//	int n = 1;
//	scanf("%d", &day);
//	switch(day)//整型表达式
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	//if(1 == day)
//	//{
//	//	printf("星期1\n");
//	//}
//	//else if(2 == day)
//	//{
//	//	printf("星期2\n");
//	//}
//	//else if(3 == day)
//	//{
//	//	printf("星期3\n");
//	//}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch(n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;break;
//	default:break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	system("pause");
//	return 0;
//}

//if
//switch
//分支语句

//while
//for
//do while
//循环语句

//
//int main()
//{
//	//while(1)
//	//	printf("hehe\n");
//	int i = 1;
//	while(i<=10)
//	{
//		if(i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	/*int ch = getchar();
//	putchar(ch);*/
//
//	int ch = 0;
//	//EOF-end of file-文件结束标志
//	while((ch=getchar()) != EOF)
//	{
//		//putchar(ch);
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(c);
//	}
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int i = 1;//初始化
//
//	while(i<=10)//判断
//	{
//		printf("%d ", i);
//		i++;//调整
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(i==5)
//			continue;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	/*int i = 0;
//	for(i=0; i<10; i++)
//	{
//	printf("hehe\n");
//	i=0;
//	}*/
//	system("pause");
//	return 0;
//}
//
//《C陷阱和缺陷》
//
//
//
//int  main()
//{
//	/*int arr[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//	printf("%d ", arr[i]);
//	}*/
//	int i = 0;
//	for(i=100; i<=200; i++)
//	{
//
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	/*for(;;)
//	{
//	printf("hehe\n");
//	}*/
//	/*int i = 0;
//	int j = 0;
//	for(; i<10; i++)
//	{
//	for(; j<10; j++)
//	{
//	printf("hehe\n");
//	}
//	}*/
//	//变种2
//	int x = 0, y = 0;
//	for (x = 0, y = 0; x<2, y<5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//
//	system("pause");
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
//		printf("%d\n", i);
//		i++;
//	}
//	while(i<=10);
//	system("pause");
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
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum+ret;
//	}
//	
//	printf("%d\n", sum);
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
//	//scanf("%d", &n);//5
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = ret * n;
//		sum = sum+ret;
//	}
//
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}
//
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	//int mid = (left+right)/2;//err
	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if(arr[mid] > k)
		{
			right = mid-1;
		}
		else if(arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			printf("找到了,下标是：%d\n", mid);
			break;
		}
	}
	if(left>right)
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}


//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//	//int c = (a+b)/2;
//	int c = a+(b-a)/2;
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}