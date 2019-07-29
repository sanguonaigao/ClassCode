#define _CRT_SECURE_NO_WARNINGS 1

//数组指针
//int arr[10];
//int (*p)[10] = &arr;
////指针数组
//char* arr2[5];
//float* arr3[6];
////函数指针
//int my_strlen(const char* str)
//{
//
//}
//int (*pf)(const char*) = my_strlen;//&my_strlen
//
////函数指针数组
//int (*pfArr[5])(const char*)
//
////指向【函数指针数组】的指针
//int (*(*ppfArr)[5])(const char*)


//回调函数

//A程序原写的
//int Add(int x, int y)
//{
//	return x+y;
//}
//
////B程序员
//void test(int(*pf)(int, int))
//{
//	if(1)
//	{
//		pf(2, 4);
//	}
//}
////A程序员写的
//int main()
//{
//	int ret = Add(2, 3);
//	test(Add);
//	return 0;
//}
//
#include <stdio.h>
//
//void menu()
//{
//	printf("             1. add      2. sub\n");
//	printf("             3. Mul      4. Div\n");
//	printf("             0.exit            \n");
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//void Calc(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	printf("请输入操作数:>");
//	scanf("%d%d", &x, &y);
//	z = p(x, y);
//	printf("%d\n", z);
//}
//int main()
//{
//	int input = 0;
//
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//

//
//冒泡排序
//
#include <stdlib.h>
#include <string.h>


void PrintArr(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

 //void BubbleSort(int arr[], int sz)
 //{
 //	趟数
 //	int i = 0;
 //	for(i=0; i<sz-1; i++)
 //	{
 //		一趟怎么比较
 //		int j = 0;
 //		for(j=0; j<sz-1-i; j++)
 //		{
 //			if(arr[j] > arr[j+1])
 //			{
 //				int tmp = arr[j];
 //				arr[j]= arr[j+1];
 //				arr[j+1] = tmp;
 //			}
 //		}
 //	}
 //}
 //void test1()
 //{
	// int arr[] = {9,8,7,6,5,4,3,2,1,0};
	// //排成升序
	// int sz = sizeof(arr)/sizeof(arr[0]);
	// BubbleSort(arr, sz);
	// PrintArr(arr, sz);
 //}

 //void qsort( void *base, 
	// size_t num, 
	// size_t width, 
	// int (*compare)(const void *e1, const void *e2 ) );

 //void Swap(char* buf1, char* buf2, int width)
 //{
	// int i = 0;
	// for(i=0; i<width; i++)
	// {
	//	 char tmp = *buf1;
	//	 *buf1 = *buf2;
	//	 *buf2 = tmp;
	//	 buf1++;
	//	 buf2++;
	// }
 //}

 //void BubbleSort(void* base,
	//			int sz,
	//			int width,
	//			int(*cmp)(const void*e1, const void*e2))
 //{
	// int i = 0;
	// for(i=0; i<sz-1; i++)
	// {
	//	 int j = 0;
	//	 for(j=0; j<sz-1-i; j++)
	//	 {
	//		 //传递给cmp的是要交换的两个元素的地址
	//		 //base[j] == *(base+j)
	//		 if(cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
	//		 {
	//			 //交换
	//			 Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
	//		 }
	//	 }
	// }
 //}
 //int cmp_int(const void *e1, const void *e2)
 //{
	// return *(int*)e1 - *(int*)e2;
 //}


 //void test2()
 //{
	// int arr[] = {9,8,7,6,5,4,3,2,1,0};
	// int sz = sizeof(arr)/sizeof(arr[0]);
	// BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
	// PrintArr(arr, sz);
 //}
 //struct Stu
 //{
	// char name[20];
	// int age;
 //};

 //int cmp_stu_by_name(const void* e1, const void*e2)
 //{
	// return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
 //}

 //void test3()
 //{
	// struct Stu arr[] = {{"zhangsan", 20}, {"lisi", 15}, {"wangwu", 30}};
	// int sz = sizeof(arr)/sizeof(arr[0]);
	// BubbleSort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);	 
 //}

 //int cmp_stu_by_age(const void* e1, const void*e2)
 //{
	// return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
 //}

 //void test4()
 //{
	// struct Stu arr[] = {{"zhangsan", 20}, {"lisi", 15}, {"wangwu", 30}};
	// int sz = sizeof(arr)/sizeof(arr[0]);
	// BubbleSort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);	 
 //}

 //int main()
 //{
	//test4();
 //	return 0;
 //}






//int main()
//{
//	//一维数组
//	int a[] = {1,2,3,4};
//	printf("%d\n",sizeof(a));//16
//	printf("%d\n",sizeof(a+0));//4
//	printf("%d\n",sizeof(*a));//4
//	printf("%d\n",sizeof(a+1));//4
//	printf("%d\n",sizeof(a[1]));//4
//	printf("%d\n",sizeof(&a));//4
//	printf("%d\n",sizeof(*&a));//16
//	printf("%d\n",sizeof(&a+1));//4
//	printf("%d\n",sizeof(&a[0]));//4
//	printf("%d\n",sizeof(&a[0]+1));//4
//	return 0;
//}
//
//int main()
//{
//	//字符数组
//	char arr[] = {'a','b','c','d','e','f'};
//	//a b c d e f 
//	printf("%d\n", strlen(arr));//x
//	printf("%d\n", strlen(arr+0));//x
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//x
//	printf("%d\n", strlen(&arr+1));//y
//	printf("%d\n", strlen(&arr[0]+1));//
//
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr+0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr+1));//4
//	//printf("%d\n", sizeof(&arr[0]+1));//4
//
//
//	return 0;
//}
//
//int main()
//{
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr+0));//6
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr+1));//x
//	//printf("%d\n", strlen(&arr[0]+1));//5
//
//// 	printf("%d\n", sizeof(arr));//7
//// 	printf("%d\n", sizeof(arr+0));//4
//// 	printf("%d\n", sizeof(*arr));//1
//// 	printf("%d\n", sizeof(arr[1]));//1
//// 	printf("%d\n", sizeof(&arr));//4
//// 	printf("%d\n", sizeof(&arr+1));//4
//// 	printf("%d\n", sizeof(&arr[0]+1));//4
//
//
//	//char* p = "abcdef";
//	//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p+1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//x
//	//printf("%d\n", strlen(&p+1));//y
//	//printf("%d\n", strlen(&p[0]+1));//5
//
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(p+1));//4
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p+1));//4
//	//printf("%d\n", sizeof(&p[0]+1));//4
//
//	//int a[3][4] = {0};
//	//printf("%d\n",sizeof(a));//48
//	//printf("%d\n",sizeof(a[0][0]));//4
//	//printf("%d\n",sizeof(a[0]));//16
//	//printf("%d\n",sizeof(a[0]+1));//4
//	///*printf("%p\n", &a[0][0]);
//	//printf("%p\n", a[0]+1);*/
//
//	//printf("%d\n",sizeof(*(a[0]+1)));//4
//	//printf("%d\n",sizeof(a+1));//4
//	//printf("%d\n",sizeof(*(a+1)));//16
//	//printf("%d\n",sizeof(&a[0]+1));//4
//	//printf("%d\n",sizeof(*(&a[0]+1)));//16
//	//printf("%d\n",sizeof(*a));//16
//	//printf("%d\n",sizeof(a[3]));//16
//
//	return 0;
//}

//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf( "%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//
//2 5
//2 x
//2 1-3
//2 x
//2 随机值
//


