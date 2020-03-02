#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


int main()
{
	int arr[10] = {0};//10个整型元素的数组
	int sz = 0;
	//10*sizeof(int) = 40
	printf("%d\n", sizeof(arr));
	//计算数组的元素个数
	//个数 = 数组总大小/每个元素的大小
	sz = sizeof(arr)/sizeof(arr[0]);
	printf("sz = %d\n", sz);
	//int a = 10;
	////sizeof 计算的是变量/类型所占空间的大小，单位是字节
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));//
	//printf("%d\n", sizeof a);//?
	//printf("%d\n", sizeof int);
	return 0;
}
//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a+b;//+ 双目操作符
//	//c语言中我们表示真假
//	//0-假
//	//非0- 真
//	//int a = 0;
//	int a = -2;
//	int b = -a;
//	int c = +3;//+正号都会省略
//	printf("%d\n", a);
//	printf("%d\n", !a);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//= 赋值     == 判断相等 
//	a = a+10;//1
//	a += 10; //2
//	a = a-20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//复合赋值符
//	//+= -= *= /= %= >>= <<= &= |= ^=
//
//	return 0;
//}
//
//int main()
//{
//	//(2进制)位操作
//	//& 按位与
//	//| 按位或
//	//^ 按位异或
//	/*int a = 3;
//	int b = 5;
//	int c = a&b;*/
//	int a = 3;
//	int b = 5;
//	int c = a^b;//不是次方-是异或
//	//异或的计算规律：
//	//对应的二进制位相同，则为0
//	//对应的二进制位相异，则为1
//	//011
//	//101
//	//110
//	//
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//移（2进制）位操作符
//	//<< 左移
//	//>> 右移
//	int a = 1;
//	//整型1占4个字节-32bit位
//	//00000000000000000000000000000001
//	int b = a<<2;
//	//b = a+1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 5%2;//取模
//	printf("%d\n", a);
//	return 0;
//}
//
#include <stdio.h>
//
//int main()
//{
//// 	int a = 1;
//// 	int b = 2;
//// 	int c = 3;
//// 	int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
//	//0-9
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//下标的方式访问元素
//	//arr[下标];
//	//char ch[20];//
//	//float arr2[5];//
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	//sum = a + b;
//	sum = Add(a, b);
//	sum = Add(2, 3);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//函数
//f(x) = 2*x+1;
//f(x,y) = x+y;
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while(line<20000)
//	{
//		printf("敲一行代码: %d\n", line);
//		line++;
//	}
//	if(line>=20000)
//		printf("好offer\n");
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0)>: ");
//	scanf("%d", &input);//1/0
//
//	if(input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}

//int  main()
//{
//	
//	//int a = 10;
//	
//	return 0;
//}


	/*
int main()
{
	//printf("%c\n", '\x61');
	//61->
	//printf("%d\n", strlen("c:\test\32\test.c"));
	//printf("%c\n", '\132');
	//\32 -- 32是2个8进制数字
	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	//32 -- > 10进制 26 ->作为ASCII码值代表的字符
	return 0;
}
*/

//
//int main()
//{
//	//printf("c:\\test\\32\\test.c");
//	/*printf("%c\n", '\'');*/
//	printf("%s\n", "\"");
//	//\t - 水平制表符
//	return 0;
//}
//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c', '\0'};
//	printf("%d\n", strlen(arr1));//strlen - string length- 计算字符串长度的
//	printf("%d\n", strlen(arr2));//
//	return 0;
//}

//
//int main()
//{
//	//数据在计算机上存储的时候，存储的是2进制
//	//#av$
//	//a - 97
//	//A - 65
//	//...
//	//ASCII 编码
//	//ASCII 码值
//// 	char arr1[] = "abc";//数组
//// 	//"abc" -- 'a' 'b' 'c' '\0' --'\0'字符串的结束标志
//// 	char arr2[] = {'a', 'b', 'c', '\0'};
//// 	//'\0' - 0
//// 	//'a'  - 97
//// 	//'a' 'b' 'c'
//// 	printf("%s\n", arr1);
//// 	printf("%s\n", arr2);
//// 	
//	return 0;
//}





//int float
//char 
//字符串类型
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";//空字符串
//
//	return 0;
//}


//
//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//不安全的
//	//strcpy_s
//	//...
//
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
#include <stdio.h>



//4. 枚举常量
//枚举-一一列举
//
//性别：男，女，保密
//三原色：红、黄、蓝
//星期：1,2,3,4,5,6,7

//枚举关键 - enum
//
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	//BLUE = 6; //err
//
//	return 0;
//}
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
////MALE,FEMALE,SECRET - 枚举常量
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}


//3. #define 定义的标识符常量
//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}
//
//int main()
//{
//	//const - 常属性
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
//	//int arr[n] = {0};
//	n = 20;
//
//	//2. const修饰的常变量
//	/*const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//	//1. 字面常量
//	//3;
//	//100;
//	//3.14;//
//
//
//	return 0;
//}


