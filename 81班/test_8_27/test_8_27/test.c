#define _CRT_SECURE_NO_WARNINGS 1


//strrchr
#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	//char arr[] = "192.168.0.1";//点分十进制
//	char arr[] = "zpw@bitedu.tech";//strtok
//	char tmp[20] = {0};
//	char*sep = "@.";
//	char *ret = NULL;
//	strcpy(tmp, arr);
//	//ret = strtok(tmp, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	for(ret=strtok(tmp, sep); ret != NULL; ret=strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//strerror
#include <errno.h>
//
//int main()
//{
//	printf("%s\n", strerror(errno));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//
//	return 0;
//}
//
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//#include <ctype.h>
//
//int main()
//{
//	//printf("%d\n", isspace('a'));
//	printf("%d\n", isdigit('a'));
//	return 0;
//}
//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while(count--)	
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest+1;
//		src = (char*)src+1;
//		//++(char*)dest;
//		//++(char*)src;
//	}
//	return ret;
//}
//
//void* my_memmove(void*dest, const void* src, size_t count)
//{
//	void *ret = dest;
//	assert(dest && src);
//	if(dest<src)
//	{
//		//前->后
//		while(count--)	
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest+1;
//			src = (char*)src+1;
//		}
//	}
//	else
//	{
//		//后->前
//		while(count--)
//		{
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy
//	//int arr1[10] = {0};
//	//int arr2[] = {1,2,3,4,5,6};
//	//my_memcpy(arr1, arr2, 20);
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	//my_memcpy(arr+2, arr, 16);
//	//memcpy(arr+2, arr, 16);
//	my_memmove(arr+2, arr, 16);
//	//01 00 00 00 02 00 00 00 03 00 00 00 .....
//	//strncpy(arr1, arr2, 20);
//
//	return 0;
//}
//
//周立功
//

//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcddddddd";
//	int ret = memcmp(arr1, arr2, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	short age;
//};

//struct
//{
//	char name[20];
//	short age;
//}s;
/*;
struct
{
	char name[20];
	short age;
}* ps;

int main()
{
	ps = &s;
	return 0;
}*/


//
//struct Node
//{
//	int data;//4
//	struct Node* next;//4
//};

//
//#pragma pack(1)
//struct A
//{
//	char c1;//1
//	//1
//	int a;//2
//	char c2;//1
//	//1
//};
//#pragma pack()
//
//struct B
//{
//	char c1;//0
//	char c2;//1
//	int a;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct B));
//	system("pause");
//	return 0;
//}
//struct S3
//{
//	double d;//0-7
//	char c;//8
//	//9-10-11
//	int i;//12-15
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//struct A sa = {'a', 20, 'b'};//
//
//	//printf("%d\n", sizeof(struct A));//12 
//	//printf("%d\n", sizeof(struct B));//8
//	//printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}


//offsetof()
#include <stddef.h>

struct S
{
	char c1;//0
	//1-3
	int a;//4-7
	char c2;//8
	//9-11
};

#define OffSetOf(s, m)  ((size_t)&(((s*)0)->m))

int main()
{
	printf("%d\n", OffSetOf(struct S, c1));
	printf("%d\n", OffSetOf(struct S, a));
	printf("%d\n", offsetof(struct S, c2));

	return 0;
}