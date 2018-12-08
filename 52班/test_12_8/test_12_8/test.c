#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// 
// int main()
// {
// 	int *p;//0xcccccccc
// 	*p = 20;
// 
// 	return 0;
// }

#include <string.h>
#include <stdlib.h>
#include <assert.h>

//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}


 //
 //char* my_strcpy(char*dest, const char*src)
 //{
 //	char *ret = dest;
 //	assert(dest != NULL);
 //	assert(src != NULL);
 //	//数据拷贝
 //	while(*dest++ = *src++)
 //	{
 //		;
 //	}
 //	return ret;
 //}
 //
 //int main()
 //{
 //	char arr[20] = {0};
 //	my_strcpy(arr, "hello bit");
 //	printf("%s\n", arr);
 //	system("pause");
 //	return 0;
 //}
 //

//
//int main()
//{
//	const int num = 10;
//	//num = 20;
//	int m = 0;
//	int *const p = &num;
//	//p = &m;
//	*p = 20;
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}


//声明函数
//extern用来声明外部符号
//extern int Add(int, int);
//
//int main()
//{
//	//编译型错误
//	//链接型错误
//	//运行时错误
//	//int a = 10;
//	int ret = Add(10, 20);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int a = -1;
//	//11111111111111111111111111111111
//	//
//	/*signed int a  = -1;
//	unsigned int b = -1;
//	printf("%u\n", a);
//	printf("%u\n", b);*/
//
//	unsigned int a = 10;
//	while(a>=0)
//	{
//		printf("%d\n", a);
//		a--;
//	}
//	system("pause");
//	return 0;
//}
//

// int main()
// {
// 	//short a = 0;
// 	int --signed int;
// 	char -- signed char
// 	return 0;
// }
//
//int main()
//{
//	int arr[10] = {0};
//	//char arr2[5];
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [5]));//
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	system("pause");
//	return 0;
//}

//
//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;//4
//	//正数的原码、反码、补码相同
//	//负数
//	//00000000000000000000000000001010-原码
//	//00000000000000000000000000001010-反码
//	//00000000000000000000000000001010-补码
//	//原码
//	//反码
//	//补码
//
//	int b = -1;//4
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//
//	return 0;
//}
// 
// int main()
// {
// 	int a = 0x11223344;
// 
// 	//int a = 1;
// 	//00000000000000000000000000000001
// 	//0x00 00 00 01
// 	//
// 	//int a = 1-1;
// 	//1+(-1)
// 	//00000000000000000000000000000001
// 	//11111111111111111111111111111111
// 	//00000000000000000000000000000000
// 	//
// 	//err
// 	//00000000000000000000000000000001
// 	//10000000000000000000000000000001
// 	//10000000000000000000000000000010
// 	//-2
// 	//
// 	return 0;
// }
//
//int check_sys()
//{
//	int a = 1;
//	//返回1表示小端
//	//返回0表示大端
//	return (*(char*)&a);
//}
//
//int main()
//{
//	if(1 == check_sys())
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	system("pause");
//	return 0;
//}

//联合体--共用体
//
//
//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	system("pause");
//	return 0;
//}
//
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	if(1 == check_sys())
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	system("pause");
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b=-1;
//	unsigned char c=-1;
//
//	printf("a=%d,b=%d,c=%d",a,b,c);
//	//11111111111111111111111111111111
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//-1
//	//11111111-b
//	//00000000000000000000000011111111-c
//	//
//	//
//
//	//-1 -1 -1
//	//-1 -1 1
//	//-1 -1 42+++++++
//	//-1 -1 -127
//	system("pause");
//	return 0;
//}
//

#include <stdio.h>
// 
// int main()
// {
// 	char a = -128;
// 
// 	//10000000000000000000000010000000
// 	//11111111111111111111111101111111
// 	//11111111111111111111111110000000
// 	//11111111111111111111111110000000-a
// 	//11111111111111111111111110000000-a
// 	//
// 	printf("%u\n",a);
// 	system("pause");
// 	return 0;
// }


#include <stdio.h>
// 
// int main()
// {
// 	char a = 128;
// 	//00000000000000000000000010000000
// 	//10000000
// 	printf("%u\n",a);
// 	system("pause");
// 	return 0;
// }
//
//int main()
//{
//	//char a = 1;
//	//char b = 128;
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//	
//	int i= -20;
//  //10000000000000000000000000010100
//	//11111111111111111111111111101011
//  //11111111111111111111111111101100
//  //00000000000000000000000000001010
//  //11111111111111111111111111110110
//  //11111111111111111111111111110101
//  //10000000000000000000000000001010
//   
//	unsigned  int  j = 10;
//  //00000000000000000000000000001010
//	printf("%d\n", i+j); 
//
//	system("pause");
//	return 0;
//}
//
#include <windows.h>
//
//int main()
//{
//	unsigned int i;
//	for(i = 9; i >= 0; i--)
//	{
//		Sleep(100);
//		printf("%u\n",i);
//	}
//	return 0;
//}
//
//《C语言深度解剖》
//

//
//int main()
//{
//	char a[1000];
//	int i;
//	for(i=0; i<1000; i++)
//	{
//		a[i] = -1-i;
//	}
//	//-1 -2 -3 ... -127 -128 127 126 ... 3 2 1 0 -1 -2 -3 ..
//
//	//128 
//	//256
//	//127
//	//255
//	//257
//	//
//	printf("%d",strlen(a));
//
//	system("pause");
//	return 0;
//}

#include <stdio.h>

//unsigned char i = 0;
//int main()
//{
//	for(i = 0;i<=255;i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}


int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n",n);//9
	printf("*pFloat的值为：%f\n",*pFloat);//9.000000

	*pFloat = 9.0;//
	printf("num的值为：%d\n",n);//9
	printf("*pFloat的值为：%f\n",*pFloat);//9.000000
	system("pause");
	return 0;
}



