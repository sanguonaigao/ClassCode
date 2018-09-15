#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 
// int main()
// {
// 	int arr[10] = {0};//
// 	printf("%p\n", &arr);
// 	printf("%p\n", arr);
// 
// 	printf("%p\n", &arr+1);
// 	printf("%p\n", arr+1);
// 
// 	&arr;//地址--数组的地址
// 	arr; //地址--数组首元素的地址
// 	return 0;
// }
//
//int main()
//{
//	//int a = 1;
//
//	//printf("%d\n", (++a)+(++a)+(++a));
//	//int a = 20;
//	//int *p = &a;
//	char a = 'w';
//	char *p = &a;
//	printf("%p\n", p);
//	printf("%p\n", p++);
//	//printf("%p\n", ++p);
//
//	//
//	//6 9 
//	//12
//	//
//
//	//int b = --a;
//	//int b = a++;//后置++
//	//int b = ++a;//前置++
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	//int arr[10] = {0};//40
//	
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);
//
//
//	//sizeof(arr);//数组的大小--单位是字节--40
//	//int sz = sizeof(arr)/sizeof(arr[0]);
//	//sizeof(a);
//	//sizeof(int);
//
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	//int *p = &a;
//	//*p = 20;
//	int a = (int)3.14;
//	//int a = int(3.14);//err
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = 0;
//	//int c = a||b;//
//
//	return 0;
//}

//int main()
//{
//	int i = 0,a=0,b=2,c =3,d=4;
//	//i = a++&&++b&&d++;
//	//
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", 
//		a, b, c, d);
//	//1 2 3 4
//	//0 3 3 4
//	//1 3 3 4
//	//1 3 3 4
//	//1 3 3 4
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;
//	//int b = (a>5 ? 3 : -3);
//	//printf("%d\n", b);
//	int b = 0;
//// 	int max = 0;
//// 	if(a>b)
//// 		max = a;
//// 	else
//// 		max = b;
//	//int max = a>b?a:b;
//
//	return 0;
//}

// 
// int Add(int x, int y)
// {
// 	return x+y;
// }
// 
// int main()
// {
// 	Add(2, 3);
// 	//int arr[10] = {0};
// 
// 	//arr[4] = 5;
// 	//*(arr+4) = 5;
// 	//*(4+arr) = 5;//ok?
// 	//4[arr] = 5;
// 
// 	return 0;
// }


//3.14
//50

//结构体
#include <string.h>
#include <stdio.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//int main()
//{
//	//int a=0;//4
//	struct Stu s = {"zhangsan", 20, "男"};
//	struct Stu* p = &s;
//	printf("%s\n", p->name);
//	printf("%s\n", (*p).name);
//	//printf("name = %s age = %d sex = %s\n", s.name, s.age, s.sex);
//
//	//strcpy(s.name, "lisi");
//	//strcmp
//	//strcpy
//	//strcat
//	//strstr
//	//strchr
//	//
//	//s.age = 20;
//	//strcpy(s.sex, "nan");
//
//	return 0;
//}
//
// 
// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int c = a+b+10;
// 
// 	return 0;
// }
// 
//
//int main()
//{
//	//float f = 3+5.1f;
//	char a = 2;
//	char b = 127;
//	char c = a+b;//
//	//00000000000000000000000000000010
//	//00000000000000000000000001111111
//
//	//00000000000000000000000000000010
//	//00000000000000000000000001111111
//	//00000000000000000000000010000001
//	//10000001
//	//11111111111111111111111110000001
//	//11111111111111111111111110000000
//	//10000000000000000000000001111111
//	//-127
//
//	printf("%d\n", c);//
//
//	return 0;
//}

//
//int main()
//{
//	int a = 1;
//	int b = (++a)+(++a)+(++a);
//	printf("b = %d\n", b);
//	return 0;
//}
//




//
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf( "%d\n", answer);
//	return 0;
//}
//
//f(x, y) = x+y;

int main()
{
	
	return 0;
}