#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	//char arr[] = "abcdef";
//	//char *p = "abcdef";
//	//if("abcdef" == "bbcdefghi")
//	//{}
//	//printf("%d\n", 1||0);
//
//	return 0;
//}

#include <stdio.h>


// int main()
// {
// 	int i = 0,a=1,b=2,c =3,d=4;
// 
// 	//i = a++ && ++b && d++;
// 	i = a++||++b||d++;
// 	printf("a = %d\nb = %d\nc = %d\nd = %d\n",
// 		a, b, c, d);
// 	//2 2 3 4-3
// 	//
// 	return 0;
// }

//
//int  main()
//{
//	int a = 0;
//	int b = 0;
//	//int c = Add(a, b);
//	//a>5?b=3:b=-3;
//
//	//b = (a>5?3:-3);
//	return 0;
//}

//int
//float

#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//	//int a = 0;
//	struct Stu s = {"lisi", 20, "ÄÐ"};
//	struct Stu* ps = &s;
//	//printf("%s\n", (*ps).name);
//	strcpy(ps->name, "zhangsan");
//	printf("%s\n", ps->name);
//	//s.name = "zhangsan";//error
//	//strcpy(s.name, "zhangsan");
//	//s.age = 20;
//	//s.sex = "ÄÐ";//error
//	//strcpy(s.sex, "ÄÐ");
//	//printf("%s\n", s.name);
//	//printf("%d\n", s.age);
//	//printf("%s\n", s.sex);
//	return 0;
//}
//
//int main()
//{
//	char a = 1;
//	char b = 127;
//	char c = 0;
//	c = a + b;
//
//	printf("%d\n", c);
//	//00000000000000000000000000000001
//	//00000000000000000000000001111111
//	//00000000000000000000000000000001-a
//	//00000000000000000000000001111111-b
//	//00000000000000000000000010000000
//	//11111111111111111111111110000000-c
//	//11111111111111111111111101111111
//	//10000000000000000000000010000000
//	//
//	
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	b = 5 + a + 10;
//	return 0;
//}

// int fun()
// {
// 	static int count = 1;
// 	return ++count;
// }
// int main()
// {
// 	int answer;
// 	answer = fun() - fun() * fun();
// 	printf( "%d\n", answer);//Êä³ö¶àÉÙ£¿
// 	return 0;
// }
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
// 
// int main()
// {
// 	int a = 10;
// 	int* p = &a;
// 	*p = 20;
// 
// 	return 0;
// }
// 
// 
// 
// int main()
// {
// 	printf("%d\n", sizeof(char *));//4
// 	printf("%d\n", sizeof(int *));//4
// 	printf("%d\n", sizeof(short *));//4
// 	printf("%d\n", sizeof(float *));//4
// 	printf("%d\n", sizeof(double *));//4
// 	//ptr* p;
// 	return 0;
// }

//
//int main()
//{
//	int a = 0x11223344;
//	int *p = &a;
//	char *q= &a;
//
//	printf("%p\n", p);
//	printf("%p\n", p+2);
//	printf("------------------\n");
//	printf("%p\n", q);
//	printf("%p\n", q+2);
//	//*p = 0;
//	//char* p = (char*)&a;
//	//*p = 0;
//
//	return 0;
//}

//int  main()
//{
//	int arr[10] = {0};
//	char *p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	printf("%d\n", arr[0]);
//
////	return 0;
//}
// 
// int main()
// {
// // 	int arr[10] = {0};
// // 	printf("%d\n", &arr[9]-&arr[0]);
// 	//36 40 
// 	int arr[10] = {0};
// 	char ch[5] = {0};
// 	printf("%d\n", &arr[9]-&ch[3]);
// 	return 0;
// }
//
//
//my_strlen
//

#include <string.h>
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
//
//int my_strlen(char* str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
//int my_strlen(char *str)
//{
//	char *start = str;
//	while(*str != '\0')
//	{
//		str++;
//	}
//	return str-start;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	//        1+my_strlen("bcdef")
//	//        
//	printf("%d\n", len);
//	return 0;
//}
//


