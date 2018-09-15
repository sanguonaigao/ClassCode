#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <bit.h>



// int cmp_int(const void*e1, const void*e2)
// {
// 	return *(int*)e1 - *(int*)e2;
// }
// 
// void _Swap(char*buf1, char*buf2, int width)
// {
// 	int i = 0;
// 	assert(buf1 && buf2);
// 	for(i=0; i<width; i++)
// 	{
// 		char tmp = *buf1;
// 		*buf1 = *buf2;
// 		*buf2 = tmp;
// 		buf1++;
// 		buf2++;
// 	}
// }
// //
// //1 2 3 4 5 6 7 8 9
// //
// void bubble_sort(void *base, int num, int width, 
// 				  int (*cmp)(const void*e1, const void*e2))
// {
// 	int i = 0;
// 	int j = 0;
// 	int flag = 0;
// 	assert(base &&cmp);
// 	for(i=0; i<num-1; i++)
// 	{
// 		flag = 0;
// 		for(j=0; j<num-1-i; j++)
// 		{
// 			if(cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
// 			{
// 				_Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
// 				flag = 1;
// 			}
// 		}
// 		if(flag == 0)
// 			break;
// 	}
// }
// int main()
// {
// 	int arr[] = {9,8,7,6,5,4,3,2,1,0};
// 	int sz = SIZEOF(arr);
// 	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
// 	PrintArr(arr, sz);
// 	return 0;
// }

// int main()
// {
// 	int a[5] = { 1, 2, 3, 4, 5 };
// 	int *ptr = (int *)(&a + 1);
// 	printf( "%d,%d", *(a + 1), *(ptr - 1));
// 	//2,5
// 	//2,5
// 	//2,5
// 
// 	return 0;
// }

//20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
//int main()
//{
//	char* arr[10];//40
//	char *pc;
//	pc+1;//1*sizeof(char)
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004 
//
//	return 0;
//}



// int main()
// {
// 	int a[4] = { 1, 2, 3, 4 };
// 	int *ptr1 = (int *)(&a + 1);
// 	int *ptr2 = (int *)((int)a + 1);
// 	printf("%x,%x\n", ptr1[-1], *ptr2);
// 	return 0;
// }

//#include <stdio.h>
//int main(int argc, char * argv[])
//{
//	int a[3][2] = { 1, 3, 5 };
//	int *p;
//	p = a[0];
//	printf( "%d", p[0]);
//	return 0;
//}
//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	return 0;
//}
//

// int main()
// {
// 	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
// 	int *ptr1 = (int *)(&aa + 1);
// 	int *ptr2 = (int *)(*(aa + 1));
// 	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
// 	return 0;
// }
//10 1
//5 1
//1 5
//10 2
//10 5
//

// #include <stdio.h>
// 
// int main()
// {
// 	char *a[] = {"work","at","alibaba"};
// 	char**pa = a;
// 	pa++;
// 	printf("%s\n", *pa);
// 	return 0;
// }
// 

//int main()
//{
//	char *c[] = {"ENTER","NEW","POINT","FIRST"};
//	char**cp[] = {c+3,c+2,c+1,c};
//	char***cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//
//	return 0;
//}
// 
// int main()
// {
// 	if(strlen("abcdef")>strlen("abcdefghi"))
// 	{
// 		printf("hehe\n");
// 	}
// 	else
// 	{
// 		printf("haha\n");
// 	}
// 
// 	return 0;
// }
// 

//int main()
//{
//	//char*p = "abcdef";
//	//char arr[20] = {0};
//	//char arr2[] = {'b', 'i', 't'};
//	//char*q = "bit";
//	//strcpy(arr, arr2);
//	char arr[20] = "abcdef";
//	strcat(arr, arr);
//	printf("%s\n", arr);
//	return 0;
//}
//
//char *strncpy( char *strDest, const char *strSource, size_t count );

// int main()
// {
// 	char arr[] = "hello world";
// 	char*p = "bit";
// 	strncpy(arr, p, 5);
// 	printf("%s\n", arr);
// 	return 0;
// }
//
//int main()
//{
//	char arr[20] = "hello\0aaaaaaa";
//	char *p = "bit";
//	strncat(arr, p, 2);
//	printf("%s\n", arr);
//	return 0;
//}

int main()
{
	char *p = "hello world";
	char *q = "aeiou";
	char *ret = strpbrk(p, q);
	printf("%s\n", ret);
// 	char *ret = strrchr(p, 'l');
// 	if(ret != NULL)
// 	{
// 		printf("%s\n", ret);
// 	}
// 	else
// 	{
// 		printf("找不到\n");
// 	}
	return 0;
}




















