#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	char* p = arr;

	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("%d ", *(p+i));
	}

	//int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//int i = 0;
	//int* p = arr;
	//for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	//{
	//	//printf("%d ", *(p+i));
	//	//printf("%d ", arr[i]);
	//	//printf("%d ", i[arr]);
	//	//arr[i] <--> *(p+i) <--> *(arr+i) <--> *(i+arr) <---> i[arr]
	//	//
	//}
	return 0;
}

// int main()
// {	
// 	int a = 0x11223344;
// 	char*                pc = &a;
// 	int*                 pi = &a;
// 	printf("%p\n", pc);
// 	printf("%p\n", pc+1);
// 
// 	printf("%p\n", pi);
// 	printf("%p\n", pi+1);
// 
// 	//int* p = &a;
// 	//*p = 0;//4个字节
// 	//char* p = &a;
// 	//*p = 0;//1个字节
// 	//int *p1;//4
// 	//char *p2;//4
// 
// 	return 0;
// }
//int  main()
//{
//	int a = 10;
//	int *p = &a;
//	*p;
//	return 0;
//}

// int main()
// {
// 	int a = 1;
// 	int ret = 0;
// 	ret = (++a)+(++a)+(++a);
// 	printf("ret = %d\n", ret);
// 	return 0;
// }


// int main()
// {
// 	int a = 10;
// 	int b = 2;
// 	//int c = (a+b)*10;
// 	int c = a+b+10;
// 
// 	return 0;
// }
// 
// int main()
// {
// 	char c = 1;
// 	printf("%d\n", sizeof(c));//1
// 	printf("%d\n", sizeof(+c));//4
// 	printf("%d\n", sizeof(!c));//4
// 	return 0;
// }

// 
// int main()
// {
// 	char a = 0xb6;
// 	//111111111111111111111110110110
// 	//
// 	short b = 0xb600;
// 	//111111111111111011011000000000
// 	int c = 0xb6000000;
// 	//
// 	if(a==0xb6)
// 		printf("a");
// 	if(b==0xb600)
// 		printf("b");
// 	if(c==0xb6000000)
// 		printf("c");
// 	return 0;
// }
// 
// 
// int main()
// {
// 	char a = 5;//signed char unsigned char
// 	//00000000000000000000000000000101
// 	char b = 126;
// 	//00000000000000000000000001111110
// 	//
// 	//00000000000000000000000001111110-b
// 	//00000000000000000000000000000101-a
// 	//00000000000000000000000010000011
// 	//
// 	char c = a + b;
// 	//11111111111111111111111110000011-补码
// 	//11111111111111111111111110000010-反码
// 	//10000000000000000000000001111101
// 	//-125
// 
// 	printf("%d\n", c);
// 	return 0;
// }

//自定义类型
//结构体
//struct 
//类型
// struct Stu
// {
// 	char name[20];
// 	short age;
// 	char sex[5];
// };
// //int float
// #include <string.h>

// int main()
// {
// 	//int a;
// 	//char arr1[20] = {0};
// 	//char arr2[] = "hello bit";
// 	//strcpy(arr1, arr2);
// 
// 	struct Stu s;
// 	struct Stu* ps = &s;
// 	
// 	(*ps).age = 20;
// 	printf("%d\n", s.age);//20
// 
// 	ps->age = 30;
// 	printf("%d\n", s.age);//30
// 
// //	s.age = 20;
// // 	strcpy(s.name, "张三");
// // 	strcpy(s.sex, "男");
// // 	printf("%s %s %d\n", s.name, s.sex, s.age);
// 
// 	return 0;
// }

// 
// int Add(int x, int y)
// {
// 	return x+y;
// }
// 
// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int c = Add(a, b);//函数调用操作符
// 	//int arr[10] = {0};
// 	//arr[4] = 5;
// 	return 0;
// }
//
//int  main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	//
//	if(a > b)
//		max = a;
//	else
//		max = b;
//	//
//	max = a>b?a:b;
//
//	//a>5 ? b=3 : b=-3;
//	//b = a>5 ? 3:-3;
//
//	return 0;
//}

// 
// int main()
// {
// 	int i = 0,a=1,b=2,c =3,d=4;
// 	//i = a++ && ++b && d++;
// 	//2 3 3 5-3
// 	//
// 	//i = a++ || ++b || d++;
// 	//
// 	//
// 	//1 3 3 5-3
// 	//1 3 3 4-2
// 	//
// 	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
// 	//
// 	//
// 	//1 3 3 5-4
// 	//1 2 3 4-2
// 	//1 3 3 4-3
// 	//
// 	return 0;
// }
// 


// int main()
// {
// 	int a = 0;
// 	int b = 0;
// 	int c = a || b;
// 
// 	printf("%d\n", c);
// 	return 0;
// }

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;//解引用操作/间接访问操作符
//
//	return 0;
//}