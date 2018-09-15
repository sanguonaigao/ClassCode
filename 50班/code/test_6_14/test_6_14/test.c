#include <bit.h>

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////
////sizeof(数组名)--数组名表示整个数组
////sizeof(数组名)--计算的是数组的总大小，单位是字节
////&数组名----数组名表示整个数组
////&数组名---取出的是数组的地址
////
////除此之外，所有的数组名都表示首元素的地址
////
////
//int main()
//{
//	//int a[] = {1,2,3,4};//4
//	//printf("%d\n",sizeof(a));//16
//	//printf("%d\n",sizeof(a+0));//4
//	//printf("%d\n",sizeof(*a)); //4
//	//printf("%d\n",sizeof(a+1));//4
//	//printf("%d\n",sizeof(a[1]));//4
//	//printf("%d\n",sizeof(&a));//4
//	//printf("%d\n",sizeof(*&a));//16
//	//printf("%d\n",sizeof(&a+1));//4
//	//printf("%d\n",sizeof(&a[0]));//4
//	//printf("%d\n",sizeof(&a[0]+1));//4
//// 
//  	char arr[] = {'a','b','c','d','e','f'};
// 	printf("%d\n", strlen(arr));//随机值
// 	printf("%d\n", strlen(arr+0));//随机值
// 	//printf("%d\n", strlen(*arr)); //err
// 	//printf("%d\n", strlen(arr[1]));//err
// 	printf("%d\n", strlen(&arr));//随机值
// 	printf("%d\n", strlen(&arr+1));//随机值
// 	printf("%d\n", strlen(&arr[0]+1));//随机值
//
////  	printf("%d\n", sizeof(arr));//6
////  	printf("%d\n", sizeof(arr+0));//4
////  	printf("%d\n", sizeof(*arr));//1
////  	printf("%d\n", sizeof(arr[1]));//1
////  	printf("%d\n", sizeof(&arr));//4
////  	printf("%d\n", sizeof(&arr+1));//4
////  	printf("%d\n", sizeof(&arr[0]+1));//4
//
//// 	char arr[] = "abcdef";
//// 	printf("%d\n", sizeof(arr));
//// 	printf("%d\n", sizeof(arr+0));
//// 	printf("%d\n", sizeof(*arr));
//// 	printf("%d\n", sizeof(arr[1]));
//// 	printf("%d\n", sizeof(&arr));
//// 	printf("%d\n", sizeof(&arr+1));
//// 
//// 	printf("%d\n", sizeof(&arr[0]+1));
//// 	printf("%d\n", strlen(arr));
//// 	printf("%d\n", strlen(arr+0));
//// 	printf("%d\n", strlen(*arr));
//// 	printf("%d\n", strlen(arr[1]));
//// 	printf("%d\n", strlen(&arr));
//// 	printf("%d\n", strlen(&arr+1));
//// 	printf("%d\n", strlen(&arr[0]+1));
//// 	char *p = "abcdef";
//// 	printf("%d\n", sizeof(p));
//// 	printf("%d\n", sizeof(p+1));
//// 	printf("%d\n", sizeof(*p));
//// 	printf("%d\n", sizeof(p[0]));
//// 	printf("%d\n", sizeof(&p));
//// 	printf("%d\n", sizeof(&p+1));
//// 	printf("%d\n", sizeof(&p[0]+1));
//// 	printf("%d\n", strlen(p));
//// 	printf("%d\n", strlen(p+1));
//// 	printf("%d\n", strlen(*p));
//// 	printf("%d\n", strlen(p[0]));
//// 	printf("%d\n", strlen(&p));
//// 	printf("%d\n", strlen(&p+1));
//// 	printf("%d\n", strlen(&p[0]+1));
//// 
//// 	int a[3][4] = {0};
//// 	printf("%d\n",sizeof(a));
//// 	printf("%d\n",sizeof(a[0][0]));
//// 	printf("%d\n",sizeof(a[0]));
//// 	printf("%d\n",sizeof(a[0]+1));
//// 	printf("%d\n",sizeof(a+1));
//// 	printf("%d\n",sizeof(&a[0]+1));
//// 	printf("%d\n",sizeof(*a));
//// 	printf("%d\n",sizeof(a[3]));
//
//	return 0;
//}
//
////int main()
////{
////	int i = 0;
////	int j = 0;
////	int arr[3][4] = {0};
////	int *p = &arr[0][0];
////	for(i=0; i<3; i++)
////	{
////		for(j=0; j<4; j++)
////		{
////			//printf("&arr[%d][%d] = %p\n",i, j, &arr[i][j]);
////			arr[i][j] = 4*i+j+1;
////		}
////	}
////	for(i=0; i<12; i++)
////	{
////		printf("%d ", *(p+i));
////	}
////
////	return 0;
////}
//
//// int main()
//// {
//// 	int arr[3][4] = {{1, 2}, {3, 4, 5}};
//// 	int i = 0;
//// 	int j = 0;
//// 	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//// 	{
//// 		for(j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++)
//// 		{
//// 			printf("%d ", arr[i][j]);
//// 		}
//// 		printf("\n");
//// 	}
//// 	return 0;
//// }
//// 
//
////
////int main()
////{
////	int arr[10] = {0};
////	//0....9
////	int i = 0;
////	int *p = arr;//
////	int sz = sizeof(arr)/sizeof(arr[0]);
////	for(i=0; i<sz; i++)
////	{
////		//arr[i] = i;
////		*(p+i) = i;//
////	}
////	for(i=0; i<sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////
//// /*	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//// 	{
//// 		printf("&arr[%d] = %p  <====>  %p\n",
////			i, &arr[i], p+i);
//// 	}*/
////	return 0;
////}
//
////
////'0' 0 '\0'
//// 《剑指offer》--OJ
//// 牛客网-app
////
//
////
////int main()
////{
////	//char *p1 = "abcdef";
////	//char *p2 = "abcdef";
////	char p1[] = "abcdef";
////	char p2[] = "abcdef";
////
////	if(p1 == p2)
////	{
////		printf("p1 == p2\n");
////	}
////	else
////	{
////		printf("p1 != p2\n");
////	}
////
////	return 0;
////}
//
////
////int main()
////{
////	//int arr[10] = {0};
////	//char arr[10] = "abcdef";
////	char arr1[] = "abcdef";
////	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
////	char *p = "abcdef";//4
////	printf("%s\n", arr1);//abcdef
////	printf("%s\n", arr2);//abcdefxxxxx
////	printf("%s\n", p);   //abcdef
////
////	return 0;
////}
////
////struct S
////{
////	int n;
////	int arr[0];//柔性数组
////};
////
////
////int main()
////{
////	int a = 3;
////	int b = 4;
////
////	int arr[5];
////	char arr2[10];
////
////	return 0;
////}
////1. static 修饰局部变量
////改变了变量的生命周期
//
////2. static修饰全局变量
////改变的是链接属性导致作用域发生变化
//
////3. static修饰函数改变的是函数的链接属性
////由外部链接属性变成内部链接属性
//
////4. C++
////2
//
////extern 用来声明外部符号的
////extern int Add(int , int); 
////extern int g_val;
////
////int main()
////{
////	int num = 0;
////	int c = Add(1, 2);//
////	printf("%d\n", c);
////	printf("%d\n", g_val);//
////
////	return 0;
////}
//
////
////加载静态库的方式
////#pragma comment(lib, "Add.lib")
////
////int main()
////{
////	int a = 10;
////	int b = 20;
////	int c = Add(a, b);
////	printf("c = %d\n", c);
////	return 0;
////}
//
//
////
////void print_table(int n)
////{
////	int i = 0;
////	for(i=1; i<=n; i++)
////	{
////		int j = 0;
////		for(j=1; j<=i; j++)
////		{
////			printf("%d*%d=%2d ", i, j, i*j);
////		}
////		printf("\n");
////	}
////}
////
////void Init(int array[], int sz)
////{
////	int i = 0;
////	for(i=0; i<sz; i++)
////	{
////		array[i] = i+1;
////	}
////}
////
////void Print(int array[], int sz)
////{
////	int i = 0;
////	for(i=0; i<sz; i++)
////	{
////		printf("%d ", array[i]);
////	}
////	printf("\n");
////}
////
////void Reverse(int array[], int sz)
////{
////	int left = 0;
////	int right = sz-1;
////	while(left<right)
////	{
////		int tmp = array[left];
////		array[left] = array[right];
////		array[right] = tmp;
////		left++;
////		right--;
////	}
////}
////
////void Empty(int array[], int sz)
////{
////	int i = 0;
////	for(i=0; i<sz; i++)
////	{
////		array[i] = 0;
////	}
////}
////int main()
////{
////	int arr[10] = {0};
////	int sz = sizeof(arr)/sizeof(arr[0]);
////	Print(arr, sz);
////	Init(arr, sz);//1-10
////	Print(arr, sz);
////	Reverse(arr, sz);//10 - 1
////	Print(arr, sz);
////	Empty(arr, sz);
////	Print(arr, sz);
////
////	return 0;
////}
//
////int main()
////{
////	int line = 0;
////	scanf("%d", &line);
////	print_table(line);
////	return 0;
////}


