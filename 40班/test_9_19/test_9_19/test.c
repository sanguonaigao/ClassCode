#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//
//	printf("请输入两个数字:>");
//	scanf("%d%d", &num1, &num2);
//	//
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	//交换
//	/*tmp = num1;
//	num1 = num2;
//	num2 = tmp;*/
//	//1. 加减
//	//num1 = num1+num2;
//	//num2 = num1-num2;
//	//num1 = num1-num2;
//
//	//2. 异或--按二级制位以后
//	//num1= 3 num2=5
//	//011-num2
//	//101-num1
//	//110-
//
//	num1 = num1^num2;
//	num2 = num1^num2;
//	num1 = num1^num2;
//
//	printf("num1 = %d num2 = %d\n", num1, num2);
//
//	return 0;
//}
//
//cvte
//NICE
//

//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int max = 0;
//
//	for(i=0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//
//	max = arr[0];
//	for(i=1; i<10; i++)
//	{
//		if(arr[i]>max)
//			max = arr[i];
//	}
//
//	printf("max = %d\n", max);
//
//	return 0;
//}
//
//
//形参--形式参数
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
////实参传给形参的时候
////形参是实参的一份临时拷贝
////改变形参是不会改变实参的
//
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	int tmp = 0;
//	if(a<b)
//	{
//		//实参-实际参数
//		Swap(a, b);
//	}
//	if(a<c)
//	{
//		Swap(a, c);
//	}
//	if(b<c)
//	{
//		Swap(b, c);
//	}
//
//	printf("%d %d %d\n", a, b, c);//3 2 1
//	return 0;
//}
//


//int main()
//{
//	int a = 18;
//	int b = 24;
//	int c = 0;
//	while(c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//#include 
//
//#define MAX 100
//#define STR "呵呵"
//#define do_forever for(;;){printf("hehe\n");}
//
//int main()
//{
//	//printf("MAX = %d\n", MAX);
//	//printf("%s\n", STR);
//	do_forever
//	return 0;
//}
//
////函数
//int Add(int x, int y)
//{
//	return x+y;
//}
////宏定义
////#define ADD(x,y)    x+y
//#define MUL(x, y) x*y
//
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	//int sum = Add(num1, num2);
//	//int sum = ADD(num1, num2);
//	int sum = MUL(1+2, 1+2);
//	//int sum = 1+2*1+2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	while(1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//jian jie
//yun yong
//
//int main()
//{
//
//	int a = 10;
//	int &b = a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	*pc = 'a';//解引用操作符
//
//	//int num = 10;//
//	//int* p = &num;//指针变量
//	//*p = 20;
//	//printf("%d\n", num);
//	//
//	//printf("%p\n", &num);
//	//printf("%p\n", p);
//
//	//printf("%p\n", &num);
//	//00 00 00 0a
//	//00 00 00 0a
//	return 0;
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[15];
//};
//
//int main()
//{
//	struct Stu s1 = {"zhangsan", 20, "男", "20180101"};
//	struct Stu s2 = {"lisi", 21, "女", "20180102"};
//
//	printf("名字:%s 年龄:%d 性别:%s 学号:%s\n", 
//		s1.name, s1.age, s1.sex, s1.id);
//	printf("名字:%s 年龄:%d 性别:%s 学号:%s\n", 
//		s2.name, s2.age, s2.sex, s2.id);
//
//	//int a = 10;
//	//char c = 'w';
//	//double d = 0.0;
//	//
//	//int *pa = &a;
//	//char *pc = &c;
//	//double* pd = &d;
//	//
//	//printf("%d\n", sizeof(pa));//4
//	//printf("%d\n", sizeof(pc));//4
//	//printf("%d\n", sizeof(pd));//4
//
//	return 0;
//}

//
//int main()
//{
//	int age = 20;
//	if(age>=18)
//		printf("成年人\n");
//	else
//		printf("未成年\n");
//	return 0;
//}

//
//int main()
//{
//	int age = 10;
//	if(age<14)
//		printf("少年\n");
//	else if(age>=14 && age<=30)
//		printf("青年\n");
//	else if(age>=31 && age<=50)
//		printf("中年\n");
//	else
//		printf("壮年\n");
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if(a == 1)
		if(b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	return 0;
}

