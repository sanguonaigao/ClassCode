#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>


int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int j = 0;
	int sum = 0;
	//1 2 6 = 9
	for(j=1; j<=3; j++)
	{
		ret *= j;
		sum += ret;
	}

	printf("%d\n", sum);
	system("pause");
	return 0;
}


//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	//1 2 6 = 9
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
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	system("pause");
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
//	} while (i<=10);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; y<5,x<2; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//
//	//int i = 0;
//	//int j = 0;
//	//for(i=0; i<10; i++)
//	//{
//	//	for(j=0; j<10; j++)
//	//	{
//	//		printf("hehe\n");
//	//	}
//	//}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(; i<10; i++)
//	{
//		printf("hehe\n");
//	}
//	//for(;;)
//	//{
//	//	printf("hehe\n");
//	//}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", i);
//	}
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
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		i = i+5;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 1;//初始化部分
//	while(i<=10)//判断部分
//	{
//		printf("%d ", i);
//		i++;//调整部分
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//EOF-end of file
//	while((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	//1 2 3 4
//	system("pause");
//	return 0;
//}
//int main()
//{
//	while(1)
//	{
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:	n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch(day)
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
//		printf("选择错误\n");
//		break;
//	}
//	
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	}
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
//	////...
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	/*for(i=1; i<100; i++)
//	{
//		if(1 == i%2)
//		{
//			printf("%d ", i);
//		}
//	}*/
//	for(i=1; i<100; i+=2)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int num = 1;
//	if(5 == num)
//		printf("hehe\n");
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%10==9)
//		{
//			count++;
//		}
//		if(i/10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr1[5] = {1,3,5,7,9};
//	int arr2[5] = {2,4,6,8,0};
//	int i = 0;
//
//	for(i=0; i<sizeof(arr1)/sizeof(arr1[0]); i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	/*printf("%p\n", arr1);
//	printf("%p\n", &arr1[0]);*/
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int m = 18;
//	int n = 24;
//	int k = 0;
//	while(k=m%n)
//	{
//		m = n;
//		n = k;
//	}
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}

//形参-形式参数
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 2;
//	//当实参传递给形参的时候
//	//形参是实参的一份临时拷贝
//	//对形参的修改，不会改变实参
//	if(a<b)
//	{
//		//实参
//		Swap(&a, &b);
//	}
//	if(a<c)
//	{
//		Swap(&a, &c);
//	}
//	if(b<c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr[5] = {0};//10*4=40
//	int i = 0;
//	int max = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		scanf("%d", &arr[i]);		
//	}
//	max = arr[0];
//
//	for(i=1; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		if(arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}