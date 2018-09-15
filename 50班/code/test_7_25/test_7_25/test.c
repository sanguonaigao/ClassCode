#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
// 
// int main()
// {
// 	int a = 10;
// 
// // 	int *pa = &a;
// // 	char *pc = &a;
// 	void *p = &a;//int*
// 	*p;
// 	p++;
// 
// 	return 0;
// }
#include <assert.h>

 //void* my_memcpy(void* dest, const void *src, size_t sz)
 //{
	//char *pdest = (char*)dest;
	//char *psrc = (char *)src;
	//unsigned int i = 0;
	//assert(pdest != NULL);
	//assert(psrc != NULL);

	//for(i=0; i<sz; i++)
	//{
	//	*pdest = *psrc;
	//	pdest++;
	//	psrc++;
	//}
	//return dest;
 //}

//void* my_memcpy(void* dest, const void *src, size_t sz)
//{
//	unsigned int i = 0;
//	void *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	for(i=0; i<sz; i++)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

// void* my_memcpy(void* dest, const void *src, size_t sz)
// {
// 	unsigned int i = 0;
// 	void *ret = dest;
// 	assert(dest != NULL);
// 	assert(src != NULL);
// 
// 	for(i=0; i<sz; i++)
// 	{
// 		*(char*)dest = *(char*)src;
// 		dest = (char*)dest+1;
// 		src = (char*)src+1;
// 	}
// 	return ret;
// }

//memmove()
//void* my_memmove(void *dest, const void*src, size_t sz)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if(dest < src)
//	{
//		//前--->后
//		while(sz--)
//		{
//			*(char *)dest = *(char*)src;
//			dest = (char *)dest+1;
//			src = (char*)src+1;
//		}
//	}
//	else
//	{
//		//后--->前
//		while(sz--)
//		{
//			*((char*)dest+sz) = *((char*)src+sz);
//		}
//	}
//	return ret;
//}
//
// int main()
// {
// 	//char arr1[20] = "abcdefghi";
// 	//char arr2[] = {0,0,0,0,0};
// 	//strcpy(arr1, arr2);//
// 	//int arr1[10] = {0};
// 	int arr2[] = {1,2,3,4,5,6,7,8,9};
//	//1 2 1 2 3 4 7 8 9
//
//	memcpy(arr2+2, arr2, 4*sizeof(arr2[0]));
// 	//my_memcpy(arr1, arr2, 3*sizeof(arr2[0]));
// 	//01 00 00 00 02 00 00 00 ...
// 	//strcpy(arr1, arr2);
// 	//memcpy(arr1, arr2, 5*sizeof(arr2[0]));
// 	return 0;
// }
//
//int main()
//{
//	//一维数组
//// 	int a[] = {1,2,3,4};
//// 	printf("%d\n",sizeof(a));//16
//// 	printf("%d\n",sizeof(a+0));//4
//// 	printf("%d\n",sizeof(*a)); //4   int*
//// 	printf("%d\n",sizeof(a+1));//4
//// 	printf("%d\n",sizeof(a[1]));//4
//// 	printf("%d\n",sizeof(&a));//4   int(*)[4]
//// 	printf("%d\n",sizeof(*&a));//16  
//// 	printf("%d\n",sizeof(&a+1));//4
//// 	printf("%d\n",sizeof(&a[0]));//4
//// 	printf("%d\n",sizeof(&a[0]+1));//4
//
//
//// 	////字符数组
//// 	char arr[] = {'a','b','c','d','e','f'};
//// 	printf("%d\n", strlen(arr));//x 
//// 	printf("%d\n", strlen(arr+0));//x
//// 	//printf("%d\n", strlen(*arr));//err
//// 	//printf("%d\n", strlen(arr[1]));//err
//// 	printf("%d\n", strlen(&arr));//x
//// 	printf("%d\n", strlen(&arr+1));//x-6
//// 	printf("%d\n", strlen(&arr[0]+1));//x-1
//
//// 	printf("%d\n", sizeof(arr));//6
//// 	printf("%d\n", sizeof(arr+0));//4
//// 	printf("%d\n", sizeof(*arr));//1
//// 	printf("%d\n", sizeof(arr[1]));//1
//// 	printf("%d\n", sizeof(&arr));//4
//// 	printf("%d\n", sizeof(&arr+1));//4
//// 	printf("%d\n", sizeof(&arr[0]+1));//4
//
//
//// 	char arr[] = "abcdef";
//// 	printf("%d\n", sizeof(arr));//7
//// 	printf("%d\n", sizeof(arr+0));//4
//// 	printf("%d\n", sizeof(*arr)); //1
//// 	printf("%d\n", sizeof(arr[1]));//1
//// 	printf("%d\n", sizeof(&arr));//4
//// 	printf("%d\n", sizeof(&arr+1));//4
//// 	printf("%d\n", sizeof(&arr[0]+1));//4
//// 
//// 	printf("%d\n", strlen(arr));//6
//// 	printf("%d\n", strlen(arr+0));//6
//// 	//printf("%d\n", strlen(*arr));//err
//// 	//printf("%d\n", strlen(arr[1]));//err
//// 	printf("%d\n", strlen(&arr));//6
//// 	printf("%d\n", strlen(&arr+1));//x
//// 	printf("%d\n", strlen(&arr[0]+1));//5
//
// 	//char *p = "abcdef";
// 	//printf("%d\n", sizeof(p));//4
// 	//printf("%d\n", sizeof(p+1));//4
// 	//printf("%d\n", sizeof(*p));//1
// 	//printf("%d\n", sizeof(p[0]));//1
// 	//printf("%d\n", sizeof(&p));//4
// 	//printf("%d\n", sizeof(&p+1));//4
// 	//printf("%d\n", sizeof(&p[0]+1));//4
// 
// 	//printf("%d\n", strlen(p));//6
// 	//printf("%d\n", strlen(p+1));//5
// 	////printf("%d\n", strlen(*p));//err/
// 	////printf("%d\n", strlen(p[0]));//err
// 	//printf("%d\n", strlen(&p));//x
// 	//printf("%d\n", strlen(&p+1));//x
// 	//printf("%d\n", strlen(&p[0]+1));//5
//
//	//二维数组
//	//int a[3][4] = {0};
//
//	//printf("%d\n",sizeof(a));//48
//	//printf("%d\n",sizeof(a[0][0]));//4
//	//printf("%d\n",sizeof(a[0]));//16
//	//printf("%d\n",sizeof(a[0]+1));//4
//	//printf("%d\n",sizeof(*(a[0]+1)));//4
//	//printf("%d\n",sizeof(a+1));//4
//	//printf("%d\n",sizeof(*(a+1)));//16
//	//printf("%d\n",sizeof(&a[0]+1));//4
//	//printf("%d\n",sizeof(*(&a[0]+1)));//16
//	//printf("%d\n",sizeof(*a));//16
//	//printf("%d\n",sizeof(a[3]));//16
//	//
//	//1. 数组名单独放在sizeof()内部，数组名表示整个数组，
//	//计算的是整个数组的大小
//	//2. &数组名，这里的数组名表示整个数组，取出的是数组的地址
//	//&数组名+1，加的时整个数组的大小
//	//sizeof(&数组名)----4/8
//	//3. 除此之外所有的数组名都表示数组首元素的地址
//	//4. 关于二维数组，数组名表示首元素的地址的时候：
//	//   首元素是第一行，首元素的地址是第一行的地址
//	//
//
//	return 0;
//}


// int main()
// {
// 	
// 	char* arr[4] = {"hehe", "hello", "world", "100"};
// 	int i = 0;
// 	for(i=0; i<4; i++)
// 	{
// 		printf("%s\n", arr[i]);
// 	}
// 
// 	return 0;
// }

// int main()
// {
// 	int arr1[4] = {1,2,3,4};
// 	int arr2[4] = {5,6,7,8};
// 	int arr3[4] = {0,0,0,0};
// 
// 	int *arr[3] = {arr1, arr2, arr3};
// 	printf("%d\n", arr[1][2]);
// 	return 0;
// }

//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	//int (*p)[10] = &arr;
//	int *p = arr;
//	printf("%d\n", p[4]);
//	return 0;
//}
//

//void print_arr(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
// 
// void print_arr(int (*arr)[5], int x, int y)
// {
// 	int i = 0;
// 	int j = 0;
// 	for(i=0; i<x; i++)
// 	{
// 		for(j=0; j<y; j++)
// 		{
// 			//printf("%d ", *(*(arr+i)+j));
// 			printf("%d ", arr[i][j]);
// 
// 		}
// 		printf("\n");
// 	}
// }
// int main()
// {
// 	int arr[3][5] = {1,2,3,4,5,5,4,3,2,1,6,7,8,9,0};
// 	print_arr(arr, 3, 5);
// 	return 0;
// }
//

//int main()
//{
//	//char* arr[4];
//	//char* (*p)[4] = &arr;
//	int (*parr3[10])[5];
//	return 0;
//}
//
