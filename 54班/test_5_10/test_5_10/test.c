#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	short age;
//	char id[20];
//	float score;
//};
//
//int main()
//{
//	struct Stu s = {"wangwu", 20, "20190101", 55.5};
//	struct Stu* ps = &s;
//
//	printf("%s %d %s %f\n", ps->name, ps->age, ps->id, ps->score);
//	system("pause");
//	return 0;
//}

//int
//float 
//int main()
//{
//	struct Stu s = {"zhangsan", 20, "2019010101", 99.5};
//	//s.name = "lisi";
//	strcpy(s.name, "lisi");
//	s.age = 30;
//	printf("name: %s\n", s.name);
//	printf("age: %d\n", s.age);
//	system("pause");
//	//int a = 0;
//	return 0;
//}
//
//struct S
//{
//	char arr[1000];
//	int num;
//};
//
//void Print1(struct S tmp)
//{
//	printf("%s %d\n", tmp.arr, tmp.num);
//}
//
//void Print2(struct S* ps)
//{
//	printf("%s %d\n", ps->arr, ps->num);
//}
//
//int main()
//{
//	struct S s = {"hello bit", 20};
//	Print1(s);
//	Print2(&s);
//	system("pause");
//	return 0;
//}


//debug   -调试版本
//release -发布版本

//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
////F9 设置断点
////F5 启动调试
//
//	for(i=0; i<10; i++)
//	{
//		arr[i] = i;
//	}
//
//	system("pause");
//	return 0;
//}

//
//void test()
//{
//	printf("test\n");
//}
//
//int main()
//{
//	printf("hehe\n");
//	test();
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//1
//	//00000000000000000000000000000001
//	//00 00 00 01
//	//
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 0;
//	}
//
//	return 0;
//}

//
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);//
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum+ret;
//	}
//	
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	/*printf("%p\n", &i);
//	printf("%p\n", &arr[0]);*/
//	
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	system("pause");
//	return 0;
//}

#include <string.h>

int my_strlen(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);
	system("pause");
	return 0;
}