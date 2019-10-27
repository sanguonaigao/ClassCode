#define _CRT_SECURE_NO_WARNINGS 1

//void main()
//{
//	
//}
//	

#include <stdio.h>


//main-主函数-程序的入口
//int main()
//{
//	//库函数-打印-输出
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}


//谭浩强
//
//int main()
//{
//	short age = 20;
//	float weight = 5.6f;
//	//101.10
//
//	printf("age = %d\n", age);
//	printf("weight = %f\n", weight);
//
//	//printf("%d\n", sizeof(char));//4 5 
//	//printf("%d\n", sizeof(short));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof(long));//8 
//	//printf("%d\n", sizeof(long long));//16 
//	//printf("%d\n", sizeof(float));//12 10 
//	//printf("%d\n", sizeof(double));//18
//
//	//printf("%d\n", 100);//%d--打印整型
//	//printf("%c\n", 100);//%c--打印字符
//
//	return 0;
//}
//
//int main()
//{
//	double weight = 55.5;
//	weight = 48.0;
//	printf("%lf\n", weight);
//
//	return 0;
//}
//
//int a = 100;//全局变量
//
////{}-代码块
//
//int main()
//{
//	int a = 10;//局部变量
//	printf("a = %d\n", a);//
//
//	return 0;
//}
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	char arr[5] = {0};
//
//	//scanf("%s", arr);
//	//strcpy
//	//strcat
//	//...
//
//	printf("%s\n", arr);
//	return 0;
//}
//
//int a = 10;
//
//void test()
//{
//	printf("a = %d\n", a);
//}
//int main()
//{
//	{
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//	test();
//	return 0;
//}

//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}
//
//int main()
//{
//	//...
//	{
//		int a = 10;
//	}
//	printf("a = %d\n", a);
//
//	return 0;
//}
//
//#define MAX 1000
////结构体
//struct Stu
//{
//	char name[20];
//	short age;
//	char id[20];
//};
//
//
////枚举创建性别类型
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//1. 字面常量
//	//3.14;
//	//5;
//	//
//	//2. const修饰的常变量
//	//
//	//const int num = 10;
//	//num = 20;
//	//printf("num = %d\n", num);
//	//const int n = 10;
//	//int arr[n] = {0};
//	//3. #define 定义的标识符常量
//	//printf("%d\n", MAX);
//	//MAX = 10000;
//	//4. 枚举常量
//	//枚举
//	//enum Sex sex = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//// 	struct Stu s1[50];
//// 	struct Stu s2;
//// 	struct Stu s3;
//	return 0;
//}
//
//int main()
//{
//	//"abcdef";//字符串
//	//'a';//字符
//	//ASCII 编码
//	//a 97 b98 c 99 d 100 e f#@%$
//	//
//	char arr1[] = "abcdef";//'\0'
//	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f', 0};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
#include <string.h>

int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//string lenght

	return 0;
}