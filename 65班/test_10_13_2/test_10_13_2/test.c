#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//void test1(int arr[])//void test1(int* arr)
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char arr[])//void test1(int* arr)
//{
//	printf("%d\n", sizeof(arr));//4
//}
//int main()
//{
//	int arr[10] = {0};
//	char arr2[10] = {0};
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr2));//10
//
//	test1(arr);//数组传参会发生讲解，数组名会变成首元素的地址
//	test2(arr2);
//
//	return 0;
//}
//
//int test(int n)
//{
//	return 0;
//}
//
//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", test(s=a+2));//2
//	printf("%d\n", a);//10
//	printf("%d\n", s);//5
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	
//	a |= (1<<(3-1));
//
//	a ^= ~(1<<(3-1));
//
//	//00000000000000000000000000001010
//	//1<<(3-1)
//	//00000000000000000000000000000100
//	//00000000000000000000000000001110
//	//11111111111111111111111111111011
//	//
//	//00000000000000000000000000001010
//
//	//-11 
//	//
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	printf("%d\n", ~a);
//	//-1
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//printf("%d\n", a++);//后置++，先使用，再++
//	//printf("%d\n", ++a);//前置++， 先++，后使用
//	//printf("%d\n", a--);
//	printf("%d\n", --a);
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int *p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if(arr1 == arr2)//err
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
////	int c = a && b;//逻辑与
//	int c = a || b;//逻辑或
//
//	printf("c = %d\n", c);
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	int i = 0,a=0,b=2,c =3,d=4;
//
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int max = (a>b ? a : b);
//
//	if(a > 5)
//		b = 3
//	else
//		b = 3;
//
//	b = (a>5 ? 3 : -3);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int *p = arr;
//	printf("%d\n", 4[arr]);
//	printf("%d\n", arr[4]);//*(arr+4)
//	printf("%d\n", *(p+4));//*(arr+4)
//	printf("%d\n", *(4+p));
//	printf("%d\n", *(arr+4));
//	printf("%d\n", *(4+arr));
//
//	//a+b;
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	ret = Add(a, b);//
//
//	return 0;
//}
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S s = {"zhangsan", 20};
//	struct S * ps = &s;
//
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 3;
//	int c = a+5+10;
//
//	return 0;
//}
//
//
//int main()
//{
//	char a = 3;
//	char b = 127;
//
//	char c = a+b;
//	//00000000000000000000000000000011
//	//00000011-a
//	//00000000000000000000000000000011
//
//	//00000000000000000000000001111111
//	//01111111-b
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011
//	//00000000000000000000000010000010
//	//10000010-c
//	//11111111111111111111111110000010
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//-126
//	//
//	printf("%d\n", c);//
//	
//	return 0;
//}

//
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if(a==0xb6)
//		printf("a");
//	if(b==0xb600)
//		printf("b");
//	if(c==0xb6000000)
//		printf("c");
//	return 0;
//}
//

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//
//	printf("%u\n", sizeof(!c));//
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);//12
//	printf("%d\n", i);//4
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//32-bit
//	//int a = 0x11223344;
//	//int*pa = &a;
//	//*pa = 0;
//	//char* pa = &a;
//	//*pa = 0;
//	int arr[10] = {-1, -1, -1, -1};
//	char*p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		*p = 0;
//		p++;
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	char*pc = &a;
//	int* pa = &a;
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	char ch[10] = {0};
//	//printf("%d\n", &arr[0]-&arr[9]);
//	printf("%d\n", &arr[0]-&ch[9]);//err
//	//32
//	//
//	return 0;
//}


//strlen
//"abcdef\0"
//
//int my_strlen(char* str)
//{
//	char *start = str;
//	while(*str)
//	{
//		str++;
//	}
//
//	return str-start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int *p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		//printf("%p <=======> %p\n", &arr[i], p+i);
//		printf("%d\n", *(p+i));
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int** ppa = &pa;
//	**ppa = 20;
//	printf("%d\n", a);
//	//int** * pppa = &ppa;
//
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	char c = 'w';
	char d = 'q';
	int arr[10];//整型数组
	char arr2[20];//字符数组
	//指针数组
	int* pa[5] = {&a, &b};
	char* pc[3] = {&c, &d};
	printf("%d\n", *pa[0]);
	return 0;
}