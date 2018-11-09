#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (1), (3), (5) };
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);
//}
////0-3
////

//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];//
//
//	p = (int(*)[4])a;//int(*)[5];
//	//printf( "a_ptr=%#p,p_ptr=%#p\n" , &a[4][2], &p[4][2]);
//
//	printf( "%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//   -4
//	//10000000000000000000000000000100
//	//11111111111111111111111111111011
//	//11111111111111111111111111111100-补码
//	//FFFFFFFC
//	//
//	return 0;
//}

//
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	char *a[] = {"work","at","alibaba"};
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//at
//at
//work at
//at

//
//int main()
//{
//	char *c[] = {"ENTER","NEW","POINT","FIRST"};
//	char**cp[] = {c+3,c+2,c+1,c};
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//
//	return 0;
//}


#include <string.h>
#include <assert.h>

char* my_strcat(char*dest, const char*src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//1. 找目标空间的第一个'\0'
	while(*dest != '\0')
	{
		dest++;
	}
	//2. 拷贝
	while(*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr[20] = "hello\0hhhhhhh";
	my_strcat(arr, " bit");

	printf("%s\n", arr);
	return 0;
}
// char* my_strcpy(char*dest, const char*src)
// {
// 	char*ret = dest;
// 	assert(dest != NULL);
// 	assert(src != NULL);
// 
// 	while(*dest++ = *src++)
// 	{
// 		;
// 	}
// 	return ret;
// }	



// 
// int main()
// {
// 	char arr[20] = {0};
// 	my_strcpy(arr, "hello");
// 
// 	printf("%s\n", arr);
// 	//helloghi
// 	//hello
// 	return 0;
// }

//size_t //unsigned int
// 
 //int my_strlen(const char *p)
 //{
 //	int count = 0;
 //	assert(p != NULL);
 //	while(*p != '\0')
 //	{
 //		count++;
 //		p++;
 //	}
 //	return count;
 //}
 
// int main()
// {
// 	char *p = "abcdef";
// 
// 	int len = my_strlen(p);
// 	printf("len = %d\n", len);//
// 	return 0;
// }
// 

//
//int main()
//{
//	char *p = "abc";
//	char *q = "abcdef";
//	if(my_strlen(p)-my_strlen(q) > 0)
//	{
//		printf("p>q\n");
//	}
//	else
//	{
//		printf("p<=q\n");
//	}
//
//	return 0;
//}





















