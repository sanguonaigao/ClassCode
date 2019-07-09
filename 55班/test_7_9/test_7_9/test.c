#define _CRT_SECURE_NO_WARNINGS 1

//std-标准输入输出头文件

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[20] = {0};
	scanf("%s", name);
	printf("%s\n", name);

	system("pause");
	return 0;
}


//
//main函数-主函数-程序的入口
//
//
//int main()
//{
//	//打印函数-输出函数-库函数-引头文件
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	//停
//	system("pause");
//	return 0;
//}
//


//int main()
//{
//	//printf("%d %c\n", 100, 100);
//	printf("%d\n", sizeof(char));//1字节
//	printf("%d\n", sizeof(short));//4 2 
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//8
//	printf("%d\n", sizeof(long long));//16
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	short age = 100;//2
//	float weight = 55.5f;
//
//	return 0;
//}
//
//int main()
//{
//	//int i,j,m,n,k;
//
//	int num = 10;//变量
//	printf("num = %d\n", num);
//	num = 20;
//	printf("num = %d\n", num);
//
//	system("pause");
//	return 0;
//}
//
//int val = 1000;
//
//int main()
//{
//	int val = 100;
//
//	printf("%d\n", val);//
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//printf("num1 = %d num = %d\n", num1, num2);
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//
//	system("pause");
//	return 0;
//}
//
