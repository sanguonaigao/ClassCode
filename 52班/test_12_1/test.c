#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// 
// int main()
// {
// 	int a = 10;
// 	//int b = a++;//后置++，先使用，再++
// 	//int b = ++a;//前置++，先++，后使用
// 	int b = --a;
// 
// 	printf("a = %d b = %d\n", a, b);
// 	return 0;
// }

// int main()
// {
// 	int a = 1;
// 	int b = (++a)+(++a)+(++a);
// 	printf("%d\n", b);
// 
// 	return 0;
// }

// int main()
// {
// 	int a = (int)3.14;
// 	int *p = (int*)0;//int
// 	return 0;
// }


// int main()
// {
// 	int age = 5;
// 	if(5 == age)
// 	{
// 
// 	}
// 	return 0;
// }

// int main()
// {
// 	int a = 0;
// 	int b = 0;
// 
// 	int c = a || b;
// 	return 0;
// }

// 
// int main()
// {
// 	int i = 0,a=1,b=2,c =3,d=4;
// 	//i = a++ && ++b && d++;
// 	i = a++||++b||d++;
// 	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
// 	//
// 	
// 	return 0;
// }

//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int d = 10;
//	int c = (a>b, a=b+10, a, b=a+1);
//	printf("c = %d\n", c);
//	//int a = 10;
//	//int b = 0;
//	
//	//int max = 0;
//	//max = a>b?a:b;
//
//	//a>5?b=3:b=-3;//1
//	//b = a>5?3:-3;//2
//	return 0;
//}


int Add(int x, int y)
{
	return x+y;
}

// int main()
// {
// 	//int arr[10] = {1,2,3};
// 	//arr[3] = 4;//下标引用操作符
// 	int a = 10;
// 	int b = 20;
// 	int c = Add(a, b);//函数调用操作符()
// 	return 0;
// }
#include <string.h>

//结构体类型
struct Stu
{
	char name[20];
	int age;
};

void print1(struct Stu tmp)
{
	printf("%s\n", tmp.name);
	printf("%d\n", tmp.age);
}
//
//void print2(struct Stu* ps)
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age);
//}
//
//int main()
//{
//	struct Stu s;//s结构体变量
//	//s.name = "zhangsan";
//	strcpy(s.name, "zhangsan");
//	s.age = 20;
//
//	print2(&s);
//
//	//struct Stu s;//s结构体变量
//	////s.name = "zhangsan";
//	//strcpy(s.name, "zhangsan");
//	//s.age = 20;
//
//	//printf("%s\n", s.name);
//	//printf("%d\n", s.age);
//
//	return 0;
//}

//
//signed char
//unsigned char
//
//
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a+b;
//
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//
//	//00000000000000000000000000000011-a
//	//00000000000000000000000001111111-b
//	//00000000000000000000000010000010
//	//c=a+b
//	//整型提升
//	//10000010-c
//	//11111111111111111111111110000010
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//-126
//	printf("%d\n", c);//
//
//	//130
//	//128
//	//
//
//// 	int a = 10;
//// 	int b = 1;
//// 	int c = a+b+10;
//
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;//11111111111111111111111110110110
//	short b = 0xb600;//11111111111111111011011000000000
//	int c = 0xb6000000;
//	if(a==0xb6)
//		printf("a");
//	if(b==0xb600)
//		printf("b");
//	if(c==0xb6000000)
//		printf("c");
//	return 0;
//}
//

//实例2
// int main()
// {
// 	char c = 1;
// 	printf("%u\n", sizeof(c));//1
// 	printf("%u\n", sizeof(+c));//4
// 	printf("%u\n", sizeof(!c));//4
// 	return 0;
// }

//
//int main()
//{
//	int a = 1;
//	int b = (++a)+(++a)+(++a);
//	//3 4 5
//	//4 4 4
//	//2 4 6
//	//
//	printf("%d\n", b);
//	return 0;
//}

// int main()
// {
// 	int a = 10;
// 	int* p = &a;
// 	
// 	char c = 'w';
// 	char*pc = &c;
// 
// 	return 0;
// }
// 
//
//int main()
//{
//// 	printf("%d\n", sizeof(char*));
//// 	printf("%d\n", sizeof(short*));
//// 	printf("%d\n", sizeof(int*));
//// 	printf("%d\n", sizeof(float*));
//// 	printf("%d\n", sizeof(long*));
//// 	printf("%d\n", sizeof(double*));
//
//	//ptr * p;
//	int a = 0x11223344;
//	int *pi = &a;
//	//*pi = 0;
//	char* pc = &a;
//	//*pc = 0;
//	printf("%p\n", pi);
//	printf("%p\n", pi+1);
//	printf("----------------\n");
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//
//
//	//0101000010101
//	//056
//	//0x56
//	return 0;
//}
//


int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	char *p = arr;
	//0x 00 00 00 01
	//01 00 00 00 02 00 00 00 03 00 00 00 
	for(i=0; i<10; i++)
	{
		//printf("%d ", arr[i]);
		printf("%d ", *(p+i));
	}
	return 0;
}



