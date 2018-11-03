#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//define定义一个标识符常量
//#define MAX 1000

//#define定义宏
// #define MAX(X,Y)  ((X)>(Y)?(X):(Y))


//int main()
//{
//	int max = MAX(5, 3+1);
//	//int max = ((5)>(3+1)?(5):(3+1));
//	printf("max = %d\n", max);
//	//int a = MAX;
//	//printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//
//#define ADD(x, y) ((x)+(y))
//
//int main()
//{
//	int sum = 0;
//	sum = 10*ADD(2, 3);
//	sum = 10*((2)+(3));
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//// 	int a = 0x11223344;
//// 	int* p = &a;//指针变量
//// 
//// 	*p = 0;//*解引用操作符,间接访问操作符
//// 
//// 	printf("%d\n", a);
//// 
////  	char ch = 'u';
////  	char* pc = &ch;
//	int a = 10;
//	int* pa = &a;
//	//
//	char c = 'w';
//	char* pc = &c;
//
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(long*));//4
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//4
//
//
//	return 0;
//}
//
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s = {"张三", 20, "男"};
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	return 0;
//}

// int main()
// {
// 	int arr[10] = {0};
// 	printf("%d\n", sizeof(arr));
// 	return 0;
// }
//


//int main()
//{
//	int age = 2;
//	if(age>=18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//	return 0;
//}
//
//int main()
//{
//	int age = 2;
//	if(age<18)
//	{
//		printf("未成年\n");
//		printf("不能打游戏\n");
//	}
//	else if(age>=18 && age<=30)
//	{
//		printf("青年\n");
//	}
//	else if(age>30 && age<=50)
//	{
//		printf("中年\n");
//	}
//	else
//	{
//		printf("老年\n");
//	}
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
//	}
//	else
//		printf("haha\n");
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//int  main()
//{
//	char firstname[20];
//	char first_name[20];//2
//	char FirstName[20];//3
//	char First_Name[20];
//	return 0;
//}
//

// int main()
// {
// 	int num = 1;
// 	if(5 == num)
// 		printf("hehe\n");
// 
// 	return 0;
// }
// 
// int main()
// {
// 	int i = 0;
// 
// 	for(i=1; i<=100; i+=2)
// 	{
// 		printf("%d ", i);
// 	}
// 
// //	for(i=1; i<=100; i++)
// //	{
// //		//pan duan ji shu
// //// 		if(1 == i%2)
// //// 		{
// //// 			printf("%d ", i);
// //// 		}
// //	}
// 	return 0;
// }
//
//int test()
//{
//	if(0)
//	{
//		printf("hehe\n");
//		return 3;
//	}
//	printf("haha\n");
//	return 4;
//}
//int main()
//{
//	test();
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);//
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("workday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("input error\n");
//	}
//// 	if(1 == day)
//// 	{
//// 		printf("1\n");
//// 	}
//// 	else if(2 == day)
//// 	{
//// 		printf("2\n");
//// 	}
//// 	else if(3 == day)
//// 	{
//// 		printf("3\n");
//// 	}
//
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
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;n++;
//			break;
//		}
//	case 4:m++;break;
//	default:break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//
#include <windows.h>

// int main()
// {
// 	while(1)
// 	{
// 		printf("hehe\n");
// 		printf("haha\n");
// 		Sleep(100);
// 	}
// 	return 0;
// }

//
//int main()
//{
//	int i = 1;
//
//	while(i<=10)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	//printf("%c\n", ch);
//	return 0;
//}

//
//int main()
//{
//	int ch = 0;
//	//EOF---end of file
//	while((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//
//int main()
//{
//	int ch = 0;
//	//EOF---end of file
//	while((ch=getchar()) != EOF)
//	{
//		if(ch>'9' || ch<'0')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


// int main()
// {
// 	int i = 1;//初始化
// 
// 	while(i<=10)//判断
// 	{
// 		printf("%d ", i);
// 
// 		i++;//调整
// 	}
// 	return 0;
// }
// 

//
//int main()
//{
//// 	for(初始化;判断;调整)
//// 	{
//// 
//// 	}
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

int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for(i=0; i<=12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}
