#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	char a = 3;
//	//00000011
//	char b = 127;
//	//01111111
//	char c = a+b;
//
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//11111111111111111111111110000010--
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	printf("%d\n", c);
//	return 0;
//}
//
//
//
//int main()
//{
//	char a = 0xb6;
//	//10110110
//	//
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if(a==0xb6)
//		printf("a");
//	if(b==0xb600)
//		printf("b");
//	if(c==0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(+c));//4
//	printf("%d\n", sizeof(!c));//4
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 0;
//	int c = 2;
//	c = b + a + 4;
//
//
//	return 0;
//}
// 
// #include <stdio.h>
// int main()
// {
// 	int i = 1;
// 	int ret = (++i) + (++i) + (++i);
// 	printf("%d\n", ret);
// 
// 	return 0;
// }
//
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	char c = 'w';
//	char * pc = &c;
//	*p = 20;
//	*pc = 'e';
//
//	return 0;
//}
//

//
//int main()
//{
//// 	printf("%d\n", sizeof(char *));//
//// 	printf("%d\n", sizeof(short *));//
//// 	printf("%d\n", sizeof(int *));//
//// 	printf("%d\n", sizeof(long *));//
//// 	printf("%d\n", sizeof(float *));//
//// 	printf("%d\n", sizeof(double *));//
//	//ptr_t p = ;
//	//int a = 0x11223344;
//	//int *p1 = &a;
//	//char *p2 = &a;
//	//printf("%p\n", p1);//
//	//printf("%p\n", p1+1);
//	//printf("-----------------\n");
//	//printf("%p\n", p2);//
//	//printf("%p\n", p2+1);
//
//	//*p = 0;
//	//*p = 0;
//
// 	int arr[10] = {0};
// 	char *p = arr;
// 	int i = 0;
// 	for(i=0; i<10; i++)
// 	{
// 		*(p+i) = 1;
// 	}
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);    //数组首元素的地址
//	printf("%p\n", arr+1);    //数组首元素的地址
//	printf("%d\n", sizeof(*arr));//4
//	printf("----------------\n");
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0]+1);//首元素的地址
//	printf("%d\n", sizeof(*&arr[0]));//4
//	printf("----------------\n");
//	printf("%p\n", &arr);   //数组的地址
//	printf("%p\n", &arr+1);   //数组的地址
//	printf("%d\n", sizeof(*&arr));//
//	return 0;
//}
//


// int main()
// {
// 	int arr[10] = {0};
// 	int*p = arr;
// 	int i = 0;
// 
// 	for(i=0; i<10; i++)
// 	{
// 		*(p+i) = i;
// 	}
// 
// 	return 0;
// }

#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

// int my_strlen(char *str)
// {
// 	if(*str == '\0')
// 		return 0;
// 	else
// 		return 1+my_strlen(str+1);
// }

int my_strlen(char* str)
{
	char *start = str;
	//assert();
	while(*str++ != '\0')
	{
		;
	}
	return str-start-1;
}

int main()
{
	char *p = "abcdef";
	int len = my_strlen(p);
	printf("%d\n", len);
	//int arr[] = {1,2,3,4,5,6,7,8,9,0};
	//char arr2[4] = {0};
	//
	//printf("%d\n", &arr[9]-&arr2[0]);
	//
	
	return 0;
}