#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a+b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//
//	//00000000000000000000000000000011-a
//	//00000000000000000000000001111111-b
//	//00000000000000000000000010000010
//	//11111111111111111111111110000010-c
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//-126
//
//	printf("%d\n", c);
//	//-125
//	return 0;
//}
//
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	//10110110
//	if(a==0xb6)
//		printf("a");
//	if(b==0xb600)
//		printf("b");
//	if(c==0xb6000000)
//		printf("c");
//	return 0;
//}
//
//
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//4
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 20;
//	
//	int c = a+b+10;
//
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}
//

//int main()
//{
//	int a = 10;//4
//	int* pa = &a;//指针变量
//	return 0;
//}
//
//int main()
//{
//	//printf("%d\n", sizeof(char*));//4
//	//printf("%d\n", sizeof(int*));//4
//	//printf("%d\n", sizeof(float*));//4
//	//printf("%d\n", sizeof(double*));//4
//	//ptr_t p;
//
//	int a = 0x11223344;
//	//int*pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = {0};
//	int *pc = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		*pc = 0x11223344;//0x 00 00 00 01
//		pc++;
//	}
//	return 0;
//}
////
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int*p = NULL;
//	for(i=0; i<10; i++)
//	{
//		arr[i] = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i;
//	}
//	for(p=arr; p<&arr[10]; )
//	{
//		*p++ = i;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	//char ch[20] = {0};
//	printf("%d\n", &arr[0]-&arr[9]);
//
//
//	return 0;
//}
#include <string.h>

int my_strlen(char* str)
{
	char* end = str;
	while(*end != '\0')
	{
		end++;
	}
	return end-str;
}

//int main()
//{
//	//"abcdef";
//	strlen("abc");
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		*(p+i)= i;
//	}
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;
//	ppa+1;//
//	**ppa = 20;
//	printf("%d\n", a);
//
//	//int*** pppa = &ppa;
//
//	return 0;
//}
//
//int main()
//{
//	//指针数组
//	//字符数组
//	//整型数组
//	//char c1 = 'w';
//	//char c2 = 'e';
//	//char c3 = 'h';
//	//char c4 = '4';
//	//char c5 = '6';
//	//char* arr[5] = {&c1, &c2, &c3, &c4, &c5};
//
//	//[char* char* char* char* char*]
//
//	//char*p = "abcdef";
//	//printf("%p\n", p);
//	//printf("%c\n", *p);//
//	char *arr[] = {"hello", "world", "bit", "hehe"};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* arr[] = {arr1, arr2, arr3};
//	int i = 0;
//	//*(arr+i) == arr[i]
//
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<5; j++)
//			printf("%d ", arr[i][j]);
//			//printf("%d ", *(arr[i]+j));
//		printf("\n");
//	}
//	return 0;
//}

