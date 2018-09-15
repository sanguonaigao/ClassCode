#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// int main()
//{
//	char *p = "abc2009abcdef";
//	char *q = "1234567890";
//	int len = strcspn(p, q);
//	printf("%d\n", len);
//	return 0;
//}
// 
// int main()
// {
// 	//char arr[] = "zpw@bitedu.tech";//strtok
// 	char arr[] = "192.168.0.1";
// 	char tmp[20] = {0};//"zpw@bitedu.tech"
// 	char *ret = NULL;
// 	char *sep = ".";
// 	strcpy(tmp, arr);
// 
// 	for(ret=strtok(tmp, sep); 
// 		ret != NULL; 
// 		ret=strtok(NULL, sep))
// 	{
// 		printf("%s\n", ret);
// 	}
// // 	printf("%s\n", strtok(tmp, "@."));
// // 	printf("%s\n", strtok(NULL, "@."));
// // 	printf("%s\n", strtok(NULL, "@."));
// 
// 	//"@."
// 
// 	//"192.168.0.1";
// 	return 0;
// }

#include <errno.h>
#include <stdlib.h>

// int main()
// {
// 	//errno;
// 	printf("%s\n", strerror(errno));
// 	return 0;
// }
// 
// int main()
// {
// 	FILE* pf = fopen("test.txt", "r");
// 	if(pf == NULL)
// 	{
// 		printf("%s\n", strerror(errno));
// 		return 0;
// 	}
// 	//....
// 	fclose(pf);
// // 	int *p = (int *)malloc(INT_MAX);
// // 	if(p == NULL)
// // 	{
// // 		printf("%s\n", strerror(errno));
// // 		return 0;
// // 	}
// // 	//....
// // 	free(p);
// 	return 0;
// }
#include <ctype.h>
// 
// int main()
// {
// 	//printf("%d\n", isspace('x'));
// 	printf("%c\n", toupper('a'));
// 	//97 65 
// 	return 0;
// }


struct Stu
{
	char name[20];
	int age;
	char sex[5];
};

// struct 
// {
// 	char name[20];
// 	int age;
// 	char sex[5];
// }* ps;

//typedef struct Node
//{
//	int data;//4
//	struct Node* next;//4
//}Node;
//
//int main()
//{
//	struct Node n;//?
//
//	return 0;
//}

// 
// int main()
// {
// 	struct Stu s;
// 	struct Stu* ps = &s;
// 
// 	strcpy(s.name, "zhangsan");
// 	s.age = 20;
// 	printf("%s\n", ps->name);
// 	printf("%d\n", ps->age);
// 
// 	//printf("%s\n", s.name);
// 	//printf("%d\n", s.age);
// 	return 0;
// }
//
//struct A;
//
//struct B
//{
//	int _b;
//	struct A* pa;
//};
//
//struct A
//{
//	int _a;
//	struct B* pb;
//};
//
//int main()
//{
//
//	return 0;
//}
//
#include <stddef.h>

// struct S
// {
// 	char a;
// 	char c;
// 	int b;
// };
// struct S3
// {
// 	double d;//0-7
// 	char c;//8
// 	//9-10-11
// 	int i;//12-15
// };
// 
// struct S4
// {
// 	char c1;//0
// 	//1-7
// 	struct S3 s3;//8-23
// 	double d;//24-31
// };
// 
// int main()
// {
// 	printf("%d\n", sizeof(struct S4));
// 	//printf("%d\n", sizeof(struct S));
// 	//struct S s = {'a', 20};//8
// 	//printf("%d\n", offsetof(struct S, a));
// 	//printf("%d\n", offsetof(struct S, c));
// 
// 	//printf("%d\n", sizeof(s));//6
// 	//printf("%d\n", sizeof(struct S));//6
// 
// 	return 0;
// }

//#pragma pack(1)

// struct S
// {
// 	char a;//0
// 	//1-3
// 	double b;//4-11
// 	char c;//12
// 	//13-15
// };
// 
// //#pragma pack()
// 
// 
// #define Offsetof(structname, memname)\
// 	(size_t)&(((structname*)0)->memname)
// 
// 
// 
// int main()
// {
// 	//offsetof
// 	printf("%d\n", Offsetof(struct S, a));//0
// 	printf("%d\n", Offsetof(struct S, b));//8
// 	printf("%d\n", Offsetof(struct S, c));//16
// 
// 	//printf("%d\n", sizeof(struct S));//24
// 	return 0;
// }
//
//struct S
//{
//	int num;
//	char arr[1000];
//};
//
//void print1(struct S tmp)
//{
//	printf("%d %s\n", tmp.num, tmp.arr);
//}
//
//void print2(const struct S* ps)
//{
//	printf("%d %s\n", ps->num, ps->arr);
//}
//
//#include <windows.h>
//
//int main()
//{
//	struct S s = {1000, "bit"};
//	int i = 0;
//	int time1 = 0;
//	int time2 = 0;
//	int start = 0;
//	int end = 0;
//	start = GetTickCount();
//	for(i=0; i<10000; i++)
//		print1(s);
//	end = GetTickCount();
//	time1 = end-start;
//	start = GetTickCount();
//	for(i=0; i<10000; i++)
//		print2(&s);
//	end = GetTickCount();
//	time2 = end-start;
//	printf("time1 = %d\n", time1);
//	printf("&time2 = %d\n", time2);
//
//	return 0;
//}


struct S
{
	int a:4;
	int b:7;
	int c:30;
	int d:2;
	int e:3;
};

int main()
{
	printf("%d\n", sizeof(struct S));//
	return 0;
}