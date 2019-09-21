#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//
//	if(age<16)
//	{
//		printf("少年\n");
//		printf("不能去网吧\n");
//	}
//	else if(age>=16 && age<24)
//		printf("青年\n");
//	else if(age>=24 && age<40)
//		printf("中年\n");
//	else if(age>=40 && age<60)
//		printf("中老年\n");
//	else if(age>=60 && age<90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//
//	//if(age>=18)
//	//	printf("成年\n");
//	//else
//	//	printf("未成年\n");
//
//	/*if(age>=18)
//		printf("成年\n");
//	*/
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//	{
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char firstname[20];
//	char first_name[20];
//	char FirstName[20];
//	char First_Name[20];
//	/*int a = 10;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//
//	}
//	*/
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	//if(age = 5)
//	if(5 == age)
//		printf("呵呵\n");
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);
//	}
//
//	//for(i=1; i<=100; i++)
//	//{
//	//	//判断i是否为奇数
//	//	if(1 == i%2)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
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
//		printf("星期天\n");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}


//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:	m++;
//	case 2: n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	//4 3 -6
//	//4 4
//	//5 3
//	//4 2
//	//3 3
//	return 0;
//}

//int  main()
//{
//	while(1)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;//初始化
//	while(i<10)//判断
//	{
//		i++;//调整
//		if(i==5)
//			continue;
//		printf("%d ", i);
//	}
//	//
//	return 0;
//}

//int main()
//{
//	//printf("hehe\n");
//	char name[20] = {0};
//	scanf("%s", name);
//	printf("name = %s\n", name);
//
//	getchar();
//	getchar();
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//EOF -- END OF FILE
//	while((ch=getchar()) != EOF)
//	{
//			putchar(ch);
//	}
//	printf("hehe\n");
//
//	return 0;
//}
//


//
//int main()
//{
//	//int i = 1;//初始化
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
//	//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(; i<10; i++)
//	{
//		for(; j<10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	/*int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<10; i++)
//	{
//	printf("%d ", arr[i]);
//	}*/
//	/*int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//	arr[i] = 0;
//	printf("hehe\n");
//	}*/
//	//<C陷阱和缺陷>
//
//// 	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		i = 0;
//// 		printf("%d ", i);
//// 	}
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b = a+4;
//
//	return 0;
//}

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
//	return 0;
//}

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
//	printf("ret = %d\n", ret);
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
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	//1 2 6 = 9
	for(n=1; n<=3; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("sum = %d\n", sum);

	return 0;
}