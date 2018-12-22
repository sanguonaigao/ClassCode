#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//int main()
//{
//	////一维数组
//	//int a[] = {1,2,3,4};
//	//printf("%d\n",sizeof(a));
//	//printf("%d\n",sizeof(a+0));
//	//printf("%d\n",sizeof(*a));
//	//printf("%d\n",sizeof(a+1));
//	//printf("%d\n",sizeof(a[1]));
//	//printf("%d\n",sizeof(&a));
//	//printf("%d\n",sizeof(*&a));
//	//printf("%d\n",sizeof(&a+1));
//	//printf("%d\n",sizeof(&a[0]));
//	//printf("%d\n",sizeof(&a[0]+1));
//
//	////字符数组
//	//char arr[] = {'a','b','c','d','e','f'};
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr+0));
//	//printf("%d\n", sizeof(*arr));
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr+1));
//	//printf("%d\n", sizeof(&arr[0]+1));
//
//	//printf("%d\n", strlen(arr));
//	//printf("%d\n", strlen(arr+0));
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	//printf("%d\n", strlen(&arr));
//	//printf("%d\n", strlen(&arr+1));
//	//printf("%d\n", strlen(&arr[0]+1));
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr+0));//6
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr+1));//x-随机值
//	//printf("%d\n", strlen(&arr[0]+1));//5
//
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr+0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(*&arr));//7
//	//printf("%d\n", sizeof(&arr+1));//4
//	//printf("%d\n", sizeof(&arr[0]+1));//4
//
//	//char *p = "abcdef";
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(p+1));//4
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1   *(p+0)
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p+1));//4
//	//printf("%d\n", sizeof(&p[0]+1));//4
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p+1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//x-随机值
//	//printf("%d\n", strlen(&p+1));//y-随机值
//	//printf("%d\n", strlen(&p[0]+1));//5
//
//	//short s = 3;
//	//int a = 10;
//	//printf("%d\n" , sizeof(s=a+5));//2
//	//printf("%d\n", s);//3
//
//	//二维数组
//	//int a[3][4] = {0};
//	////int* p= a+1;//int (*pp)[4]
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", a+1);
//
//	//printf("%d\n",sizeof(a));//48
//	//printf("%d\n",sizeof(a[0][0]));//4
//	//printf("%d\n",sizeof(a[0]));//16-a[0]表示第一行的数组名，sizeof(a[0])
//	////计算的是第一行的大小，单位是字节
//
//	//printf("%d\n",sizeof(a[0]+1));//4-第一行第二个元素的地址
//	//printf("%d\n",sizeof(*(a[0]+1)));//4-第一行第二个元素
//	//printf("%d\n",sizeof(a+1));   //4-第二行的地址
//	//printf("%d\n",sizeof(*(a+1)));//16-第二行的大小
//	//printf("%d\n",sizeof(&a[0]+1));//4 -第二行的地址
//	//printf("%d\n",sizeof(*(&a[0]+1)));//16 -第二行的大小
//	//printf("%d\n",sizeof(*a));//*a = *(a+0) = a[0] ->16 - 第一行的大小
//	//printf("%d\n",sizeof(a[3]));//16
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf( "%d,%d", *(a + 1), *(ptr - 1));
//
//	system("pause");
//	return 0;
//}
//
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////结构体的大小是20字节
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	//0x100014 01 04
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf( "%x,%x", ptr1[-1], *ptr2);
//
//	//
//	//4 2000000
//	//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int arr[10] = {1,2,3,4,5,6};
//	//01 00 00 00 02 00 00 00 ....
//
//	int *p1 = arr;
//	char *p2 = (char*)p1;
//
//	return 0;
//}

//
//#include <stdio.h>
//int main(int argc, char * argv[])
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	// 1 3 5 0 0 0
//	//
//	int *p;
//	p = a[0];
//	printf( "%d", p[0]);
//	//0
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf( "%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//16 4
//	//x -4
//	//16 -4
//	//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10 5
//	system("pause");
//	return 0;
//}


#include <stdio.h>
//
//int main()
//{
//	char *a[] = {"work","at","alibaba"};
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//
//	system("pause");
//	return 0;
//}


int main()
{
	char *c[] = {"ENTER","NEW","POINT","FIRST"};
	char**cp[] = {c+3,c+2,c+1,c};
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);

	//POINT ER  ST EW  
	system("pause");
	return 0;
}














