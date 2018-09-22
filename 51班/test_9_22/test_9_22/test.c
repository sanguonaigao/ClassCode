#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//	//在线笔试
//	//gcc
//
//	scanf("%d%d", &num1, &num2);
//	//scanf("%d", &num2);
//	//交换
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	/*tmp = num1;
//	num1 = num2;
//	num2 = tmp;*/
//
//	/*num1 = num1+num2;
//	num2 = num1-num2;
//	num1 = num1-num2;*/
//
//	//011-num2
//	//101-num1
//	//110-
//	//异或--按二进制位异或
//// 	num1 = num1^num2;
//// 	num2 = num1^num2;
//// 	num1 = num1^num2;
//
//	printf("num1 = %d num2 = %d\n", num1, num2);
//
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int max = 0;
//	for(i=0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//
//	max = arr[0];
//	for(i=1; i<10; i++)
//	{
//		if(arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//当实参传给形参的时候
//形参将是实参的一份临时拷贝
//对形参的修改，不会改变实参

//形参
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(int* px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	if(a < b)
//	{
//		//实参
//		Swap(&a, &b);
//	}
//
//	if(a < c)
//	{
//		Swap(&a, &c);
//	}
//
//	if(b < c)
//	{
//		Swap(&b, &c);
//	}
//
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


//int main()
//{
//	int a = 18;
//	int b = 24;
//	int c = 0;
//
//	while(c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", b);
//	return 0;
//}
//

// 
// #define NUM 1000
// #define STR "呵呵"
// #define LOOP for(;;)\
// {\
// 	printf("hehe\n");\
// }
// 
// int main()
// {
// 	//int max = NUM;
// 	//printf("%d\n", max);
// 	//printf("%s\n", STR);
// 	LOOP
// 	return 0;
// }
// 
// 
// //函数
// int Add(int x, int y)
// {
// 	return x+y;
// }
// 
// #define ADD(x, y) ((x)+(y))
// #define MUL(x, y) ((x)*(y))
// 
// 
// int main()
// {
// 	printf("%d\n", MUL(1+2, 1+2));
// 	//printf("%d\n", 1+2*1+2);
// 	//int a = 10;
// 	//int b = 20;
// 	//int sum = Add(a, b);
// 	//int sum = ADD(a, b);
// 	//int sum = a+b;
// 	//测试驱动开发
// 	//printf("sum = %d\n", sum);
// 	return 0;
// }
// 

//
//int main()
//{
//	char ch  = 'a';
//	char *pc = &ch;
//	*pc = 'b';
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//
//
//// 	char ch = 'w';
//// 	char* pc = &ch;
//
//	//printf("%p\n", &num);
//	//printf("%x\n", &num);
//
//	//int num = 0x11223344;
//	//0000 0000 00000000 00000000 00001010
//	//0x00 00 00 0a
//	//
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(int*));//4 
//	printf("%d\n", sizeof(char*));//4 
//	printf("%d\n", sizeof(double*));//4
//
//	return 0;
//}
//

//结构体
struct Stu
{
	char name[20];
	int  age;
	char sex[5];
	char id[15];
};

int main()
{
	struct Stu s1 = {"zhangsan", 20, "男", "2018010101"};
	struct Stu s2 = {"lisi", 20, "男", "2018010102"};
	printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.id);
	printf("%s %d %s %s\n", s2.name, s2.age, s2.sex, s2.id);

	return 0;
}