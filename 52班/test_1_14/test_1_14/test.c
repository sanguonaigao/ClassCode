#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//#error "呵呵"
//	return 0;
//}
//
//#include <bit.h>
////UNIX环境编程
////
////#define MAX 0
////
//int main()
//{
//#ifndef MAX
//	printf("max = %d\n", 1);
//#endif
//
//#if !defined(MAX)
//	printf("max = %d\n", 2);
//#endif
//	system("pause");
//	return 0;
//}

//#define AGE 5
//
//int main()
//{
//#if AGE==1
//	printf("age = 1\n");
//#elif AGE==2
//	printf("age = 2\n");
//#elif AGE==3
//	printf("age = 3\n");
//#else
//	printf("hehe\n");
//#endif
//	system("pause");
//	return 0;
//}
// 
// 
// #if 0
// int  main()
// {
// #if 0
// 	printf("hehe\n");
// #endif
// 
// 	system("pause");
// 	return 0;
// }
// 
// #endif
// 
//#define
//#include
//#undef 
//#pragma 
//预处理指令



//#define MAX 1000
//
//int main()
//{
//	printf("max = %d\n", MAX);//
//#undef MAX
//	printf("max = %d\n", MAX);//
//	return 0;
//}

//
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int max = MAX(a++, b++);
//	int max = ((a++)>(b++)?(a++):(b++));
//	printf("max = %d\n", max);
//	printf("a = %d b = %d\n", a, b);
//	//11,22
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	int a = 10;
// 	int b = ++a;//1
// 	int b = a+1;//2
// 	return 0;
// }
//
//#define MALLOC(num, type) \
//	(type*)malloc(num*sizeof(type))
//int main()
//{
//	//malloc(10, int);
//	int *p = MALLOC(10, int);
//	//int *p = (int*)malloc(10 * sizeof(int));
//	if(p == NULL)
//	{
//		return 1;
//	}
//	//使用
//	
//	free(p);
//	p = NULL;
//	return 0;
//}
////
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int Max(int x, int y)
//{
//	return x>y?x:y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	//int max = ((a)>(b)?(a):(b));
//	max = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//
//#define CAT(X, Y) X##Y
//
//int main()
//{
//	int value52 = 100;
//	printf("%d\n", CAT(value, 52));
//
//	system("pause");
//	return 0;
//}
//
//#define Print(x, format) printf("the value of "#x" is "format"\n", x)
//
//int main()
//{
//	int a = 10;
//	float f = 3.14f;
//
//	Print(a, "%d");
//	Print(f, "%f");
//	//printf("hello world\n");
//	//printf("hello ""world\n");
//
//
//	//printf("the value of a is %d\n", a);
//	//printf("the value of f is %f\n", f);
//
//	system("pause");
//	return 0;
//}