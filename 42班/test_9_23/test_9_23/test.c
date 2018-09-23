#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

// int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//
//	scanf("%d%d", &num1, &num2);
//	
//	//交换
//
//	printf("num1 = %d num2 = %d\n", num1 ,num2);
//	/*tmp = num1;
//	num1 = num2;
//	num2 = tmp;*/
//
//	/*num1 = num1 + num2;
//	num2 = num1 - num2;
//	num1 = num1 - num2;*/
//
//	//异或--按二进制位异或
//	//011-num2
//	//101-num1
//	//110
//
//	num1 = num1^num2;
//	num2 = num1^num2;
//	num1 = num1^num2;
//
//	printf("num1 = %d num2 = %d\n", num1 ,num2);
//
//	return 0;
//}
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
//	max = arr[0];
//
//	for(i=1; i<10; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	//...
//
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//
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
//	printf("%d\n", b);
//
//	return 0;
//}
//

//#define //预处理指令
//#include //
//#if  
//
//#define MAX 1000
//#define STR "呵呵"
////续行符
//#define LOOP for(;;) \
//{\
//	printf("hehe\n");\
//}
//
//
//int main()
//{
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//	LOOP
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	return x+y;
//}
////宏
//// #define ADD(x, y) ((x)+(y))
//// #define MUL(x, y) ((x)*(y))
//// 
//// int main()
//// {
//// 	int a = 10;
//// 	int b = 20;
//// 	//int sum = Add(a, b);
//// 	//int sum = ADD(a, b);
//// 	//int sum = a+b;
//// 
//// 	//测试驱动开发
//// 	//printf("sum = %d\n", sum);
//// 	printf("%d\n", MUL(1+2, 1+2));
//// 	//printf("%d\n", 1+2*1+2);
//// 	return 0;
//// }
//
//int main()
//{
//	while(1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//

//
//
//int main()
//{
//	int a = 10;
//	int* p = &a;//指针变量
//
//	*p = 20;//*是一个操作符---解引用操作符
//	printf("%d\n", a);
//
//
//	//char ch = 'w';
//	//char* pc = &ch;
//	//0x0000000a
//	//
//	//printf("%p\n", &a);
//
//	return 0;
//}
//

// int main()
// {
// 	printf("%d\n", sizeof(char *));  //4
// 	printf("%d\n", sizeof(int *));   //4 
// 	printf("%d\n", sizeof(double *));//4
// 	//32
// 	//64
// 	return 0;
// }
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//};
//
//int main()
//{
//	struct Stu s1 = {"zhangsan", 20, "男", "20180101"};
//	struct Stu s2 = {"lisi", 23, "男", "20180102"};
//
//	printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.id);
//	printf("%s %d %s %s\n", s2.name, s2.age, s2.sex, s2.id);
//
//	return 0;
//}


//int main()
//{
//	;//空语句
//
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if(age>=18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//	return 0;
//}

//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if(age<16)
//		printf("少年\n");
//	else if(age>=16 && age<=30)
//		printf("青年\n");
//	else if(age>30 && age<=50)
//		printf("壮年\n");
//	else 
//		printf("中老年\n");
//
//	return 0;
//}
//
//
#include <stdio.h>
int main()
{
	char first_name[20];
	char FirstName[20];
	char First_Name[20];//
	int a = 0;
	int b = 2;
	if(a == 1)
	{
		if(b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");
	
	int i = 0;
	for(i=0; i<10; i++)
	{
		
	}
	return 0;
}