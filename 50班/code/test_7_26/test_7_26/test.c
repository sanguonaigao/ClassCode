#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//// 	int*    arr1[10];//40
//// 	char *  arr2[10];//40
//// 	char ** arr3[10];//40
//// 	int* (*p)[10] = &arr1;
//	int (*p[10])[5];
//	//p是一个数组，数组有10个元素，每个元素是一个数组指针
//	//该指针能够指向一个大小为5，每个元素为int的数组。
//
//	return 0;
//}
#include <stdio.h>

//声明
//extern char* p;
//extern char p[];
//
//int main()
//{
//	//printf("%s\n", (char*)*(int*)p);
//	printf("%s\n", *(char **)p);
//	return 0;
//}
//


//extern char arr[];

//extern char *arr;//4
//
//int main()
//{
//	printf("%s\n", (char *)&arr);
//	//
//	return 0;
//}
//
//
//
// 
// void test(char* str)
// {
// 	printf("%s\n", str);
// }
// 
// int main()
// {
// 	void (*p)(char* str) = test;
// 	p("bit");
// 	p("hehe");
// 	p("caida");
// 
// 
// 	//printf("%p\n", &test);
// 	//printf("%p\n", test);
// 
// 	//int arr[10];
// 	//int (*p)[10] = &arr;
// 	//test("hehe");
// 	//test("hello");
// 
// 	return 0;
// }
// 


// 
// int Add(int x, int y)
// {
// 	return x+y;
// }
// 
// int Sub(int x, int y)
// {
// 	return x-y;
// }
// 
// int Mul(int x, int y)
// {
// 	return x*y;
// }
// 
// int Div(int x, int y)
// {
// 	return x/y;
// }
// 
// void menu()
// {
// 	printf("****************************\n");
// 	printf("****    1. add    2. sub  **\n");
// 	printf("****    3. mul    4. div  **\n");
// 	printf("****    0.exit            **\n");
// 	printf("****************************\n");
// }
// 
// int main()
// {
// 	int input = 0;
// 	int x = 0;
// 	int y = 0;
// 	int ret = 0;
// 	//转移表
// 	int (*pfun[5])(int, int) = {0, Add, Sub, Mul, Div};
// 	do
// 	{
// 		menu();
// 		printf("请选择:>");
// 		scanf("%d", &input);
// 		if(input>=1 && input<=4)
// 		{
// 			printf("请输入两个操作数:>");
// 			scanf("%d%d", &x, &y);
// 			ret = pfun[input](x, y);
// 			printf("%d\n", ret);
// 		}
// 	}while(input);
// 		//do 
// 	//{
// 	//	menu();
// 	//	printf("请选择:>");
// 	//	scanf("%d", &input);
// 	//	printf("请输入两个操作数:>");
// 	//	scanf("%d%d", &x, &y);
// 	//	switch(input)
// 	//	{
// 	//	case 1:
// 	//		ret = Add(x, y);
// 	//		break;
// 	//	case 2:
// 	//		ret = Sub(x, y);
// 	//		break;
// 	//	case 3:
// 	//		ret = Mul(x, y);
// 	//		break;
// 	//	case 4:
// 	//		ret = Div(x, y);
// 	//		break;
// 	//	default:
// 	//		printf("选择错误\n");
// 	//		break;
// 	//	}
// 	//	printf("%d\n", ret);
// 	//} while (input);
// 	return 0;
// }
//
//int main()
//{
//	int (*p[4])(int, int) = {Add, Sub, Mul, Div};
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		printf("%d ", p[i](8,4));
//	}
//	int (*(*pp)[4])(int, int) = &p;
//	//12 4 32 2
//	return 0;
//}

//int (*p)(int, int);//函数指针
//int (*p[4])(int, int);//函数指针的数组
//int (*(*p)[4])(int, int);//指向函数指针的数组的指针















//(*(void(*)())0)();
//调用0地址处的函数，调用的函数的参数是无参，返回类型为void
//
//STL
//
// void (*signal(int, void(*)(int)))(int);
// signal是一个函数声明，函数的参数为int和一个函数指针
// 该函数指针指向的函数参数为int，返回类型为void
// signal函数的返回类型也为函数指针
// 该函数指针指向的函数参数为int，返回类型为void

// typedef void(*ptr_t)(int);
// ptr_t signal(int, ptr_t);
//
//
//
//void test()
//{
//	printf("hehe\n");
//}
//
//void fun(void (*p)())
//{
//	p();
//}
//int main()
//{
//	fun(test);
//	//test();
//	return 0;
//}
//

// 
// void qsort( void *base, size_t num, size_t width, 
// 		   int ( *cmp )(const void *e1, const void *e2 ) );
// 
#include <bit.h>

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_stu_by_age(const void *e1, const void*e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void *e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}


void _Swap(char *buf1, char*buf2, size_t width)
{
	unsigned int i = 0;
	assert(buf1 && buf2);
	for(i=0; i<width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int num, int width, 
				 int (*cmp)(const void*, const void*))
{
	int i = 0;
	int j = 0;
	assert(base && cmp);

	for(i=0; i<num-1; i++)
	{
		for(j=0; j<num-1-i; j++)
		{
			if(cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				//交换
				_Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
			}
		}
	}
}

int cmp_str(const void* e1, const void* e2)
{
	return strcmp(*(char**)e1, *(char **)e2);
}
int main()
{
	//int arr[] = {9,8,7,6,5,4,3,2,1,0};
	//int sz = SIZEOF(arr);
	//struct Stu arr[] = {{"zhangsan", 20}, {"lisi", 15}, {"wangwu", 8}};
	//int sz = SIZEOF(arr);
	char *arr[] = {"ancdef", "qqqqqq", "bbbbb"};
	int sz = SIZEOF(arr);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_str);
	//PrintArr(arr, sz);
	return 0;
}
















