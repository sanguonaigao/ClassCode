#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAX(X, Y) ((X)>(Y)?(X):(Y))

int Max(int x, int y)
{
	return x>y?x:y;
}

int main()
{
	int a = 10;
	int b = 20;
	//int max = MAX(a, b);
	int max = ((a)>(b)?(a):(b));//..
	printf("%d\n", max);
	max = Max(a, b);//
	printf("%d\n", max);

	return 0;
}

// 
// #define CAT(X, Y) X##Y
// 
// int main()
// {
// 	int value50 = 2019;
// 	//printf("%d\n", value50);
// 	//printf("%d\n", CAT(value, 50));
// 	
// 	return 0;
// }

// #define PRINT(num, format) \
// 	printf("the value of "#num" is "format"\n", num)
// 
// int main()
// {
// 	//printf("hello world\n");
// 	//printf("hello ""world\n");//
// 	int a = 10;
// 	float f = 3.14f;
// 
// 	//printf("the value of a is %d\n", a);
// 	//printf("the value of f is %f\n", f);
// 	PRINT(a, "%d");
// 	PRINT(f, "%f");
// 	return 0;
// }

//#define SQUARE(X) (X)*(X)
//#define DOUBLE(X) ((X)+(X))
//
//#define M 100
//int main()
//{
//	//int ret = SQUARE(1+2);//
//	//int ret = 1+2*1+2;
//	//int ret = 10*DOUBLE(100+5);
//	//int ret = 10*((100+5)+(100+5));
//	//int ret = 10*(3+5)+(3+5);
//
//	//printf("%d\n", ret);
//
//	return 0;
//}

//#define reg register

//#define CASE break;case
// #define MAX 1000;
// 
// int main()
// {
// 	printf("%d\n", MAX);
// 
// // 	int age = 0;
// // 	if(1)
// // 		age = 1000;
// // 	else
// // 		age = -1;
// // 
// 
// 	//reg int a = 0;
// // 	int age;
// // 	switch()
// // 	{
// // 	case 1:
// // 	CASE 2:
// // 	CASE 3:
// // 		break;
// // 	}
// 
// 	return 0;
// }
//int main()
//{
//	/*int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	for(i=0; i<10; i++)
//	{
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__,__DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;*/
//	//printf("%d\n", __STDC__);
//	//C99 bool
//	return 0;
//}
//

//
//int main()
//{
//	printf("%d\n", Add(1, 3));
//	return 0;
//}

//
//xshell
//
//ls  -- list-- 列出当前目录下的文件，文件夹
//cd---- change directory 切换目录
//cd /

//pwd  --- print work directory  打印工作目录
//
//rm -- remove   删除文件、文件夹
//rm -f *
//
//root
//vim-- 编辑器
//三种模式
//普通模式---i----->插入模式
//        <---ESC--
//
//命令行模式
//gcc 是linux环境的一个编译器
//gcc test.c 

