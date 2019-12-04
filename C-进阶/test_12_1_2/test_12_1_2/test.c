#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str)//'\0'
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if(*str == '\0')
//		return 0;
//	else
//		return 1+my_strlen(str+1);
//}

//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//3
//
//int my_strlen(char* str)
//{
//	char *start = str;
//	while(*str)
//	{
//		str++;
//	}
//	return str-start;
//}
//
//int main()
//{
//	//strlen
//	int len = my_strlen("bit");//bit\0
//	printf("%d\n", len);
//	//int arr[10] = {0};
//	//char ch[6] = {0};
//	//printf("%d\n", &arr[0]-&arr[9]);//
//	//printf("%d\n", &arr[9]-&ch[5]);//err
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 10;
//	//int* p = &a;//指针变量
//	//*p = 20;
//	//printf("a = %d\n", a);
//
//// 	char ch = 'w';
//// 	char* pc = &ch;
//	//32   - 4
//	//char* pc;
//	//int* pi;
//	//ptr_t p;
//
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;
//	//1. 指针类型决定了，指针进行解引用操作的权限
//	//2. 指针类型决定了，指针向前,向后走的步长
//
//	/*int a = 10;
//	int * pi = &a;
//	char* pc = &a;
//	printf("%p\n", pi);
//	printf("%p\n", pc);
//
//	printf("%p\n", pi+1);
//	printf("%p\n", pc+1);*/
//	int a = 0x11223344;
//	char* p = &a;
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		*(p+i) = 0x66;
//	}
//	
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = {1,2,3,4,5};//40
//	int *p = arr;
//	int i = 0;
//	for(i=0; i<5; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//int* p = arr;//4/8
//// 	printf("%p\n", arr);
//// 	printf("%p\n", &arr[0]);
//// 	printf("%d\n", *arr);//arr[0]
//
//	//sizeof(arr)/sizeof(*arr);
//	return 0;
//}

// 
// int main()
// {
// 	int a = 10;
// 	int* pa = &a;
// 	int** ppa = &pa;
// 	int***pppa = &ppa;
// 	**ppa = 20;
// 	
// 	printf("%d\n", a);
// 	return 0;
// }

//字符数组
//int main()
//{
//	//char arr1[4];
//	//int arr2[10];
//	//指针数组-存放指针
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr3[3] = {&a, &b, &c};//[int* int* int*]
//	int** p = arr3;
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		printf("%d ", **(p+i));
//	}
//	
//
//	//int i = 0;
//	//for(i=0; i<3; i++)
//	//{
//	//	printf("%d ", *arr3[i]);
//	//}
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//} s1,s2;

struct Point 
{
	int x;
	int y;
};

typedef struct Stu
{
	char name[20];
	int age;
	struct Point p;
}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("%s %d %d %d\n", tmp.name, tmp.age, tmp.p.x, tmp.p.y);
//}
//void Print2(Stu* ps)
//{
//	printf("%s %d %d %d\n", ps->name, ps->age, ps->p.x, ps->p.y);
//}
//int main()
//{
//	Stu s = {"张三", 20, {2, 3}};//初始化
//	Stu* ps = &s;
//	Print1(s);
//	Print2(&s);
//	//printf("%s %d %d %d\n", s.name, s.age, s.p.x, s.p.y);
//	//printf("%s %d %d %d\n", ps->name, ps->age, ps->p.x, ps->p.y);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	return 0;
//}
//

//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n", &i);
//	printf("%p\n", &arr[9]);
//
//// 	for(i=0; i<=12; i++)
//// 	{
//// 		arr[i] = 0;
//// 		printf("hehe\n");
//// 	}
//
//	getchar();
//
//	return 0;
//}
//

