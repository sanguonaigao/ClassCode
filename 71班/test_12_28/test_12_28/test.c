#define _CRT_SECURE_NO_WARNINGS 1

#include <71.h>
//
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;//指针
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}

//
//int main()
//{
//	/*int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);*/
//	int a = 0x11223344;
//	char* pc = (char*)&a;//int*
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		*pc = 'X';
//		pc++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int* p;//局部
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int i = 0;
//	int* p = arr;
//	for(i=0; i<=5; i++)
//	{
//		*p = 0;
//		p++;
//	}
//
//	return 0;
//}
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//
//	int*ptr = NULL;
//	if(ptr != NULL)
//		*ptr = 10;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	char arr2[4];
//	printf("%d\n", &arr2[0]-&arr[9]);
//
//	return 0;
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while(*str != '\0') 
//	{
//		str++;
//	}
//	return str-start;
//}
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	while(*str++ != '\0') 
//		;
//	return str-start-1;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	//int len = my_strlen("bit");
//
//	printf("%d\n", len);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int *p = arr;
//	while(p<=&arr[9])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%d\n", **ppa);//*pa
//	//int*** pppa = &ppa;
//
//	//...
//	return 0;
//}
//
//int main()
//{
//// 	int arr1[5];//数组，int，整型数组
//// 	char arr2[6];//数组，char,字符数组
//// 	//指针数组-存放指针
//	//char* arr3[4] = {0};//指针数组
//	//printf("%d\n", sizeof(arr3));//4*4
//	/*char* arr3[4] = {"abcdef", "bit", "hehe", "xiaoqiang"};
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//	printf("%s\n", arr3[i]);
//	}*/
//	int a = 10;
//	int b = 20;
//	int* arr[4] = {&a, &b};
//	printf("%d\n", *(arr[0]));
//	printf("%d\n", *(arr[1]));
//
//	return 0;
//}
//
//结构体

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//}Stu;
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//	struct Point p;
//};
//
//void Print1(struct S s)
//{
//	printf("%s %d %lf %d %d\n", s.name, s.age, s.score, s.p.x, s.p.y);
//}
//
//void Print2(struct S* ps)
//{
//	printf("%s %d %lf %d %d\n", ps->name, ps->age, ps->score, ps->p.x, ps->p.y);
//}
//
//int main()
//{
//	struct S s = {"张三", 20, 65.5, {3, 5}};
//	//printf("%s %d %lf %d %d\n", s.name, s.age, s.score, s.p.x, s.p.y);
//	Print1(s);
//	Print2(&s);
//
//	return 0;
//}

int Add(int x,int y)
{
	return x+y;
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);

	return 0;
}