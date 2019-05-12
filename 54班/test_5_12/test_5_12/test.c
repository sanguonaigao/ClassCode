#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//½¡×³ĞÔ
//Â³°ôĞÔ

//10
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//¶ÏÑÔ
//
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("ABC");
//	printf("len = %d\n", len);
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	const int num = 10;
//	int n = 20;
//	const int * p = &num;
//	*p = 20;//err
//	p = &n;
//
//	printf("num = %d\n", num);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	/*int* p = NULL;
//
//	if(p != NULL)
//	*p = 20;*/
//
//	//int* p;
//	//if(p != NULL)
//	//	*p = 20;
//
//	int a = 10;
//	int *p = &a;
//	if(p != NULL)
//	{
//		*p = 20;
//	}
//
//	system("pause");
//	return 0;
//}

//char *strcpy( char *strDestination,  char *strSource );

//
//void my_strcpy(char* pdest, const char* psrc)
//{
//	//
//	assert(pdest != NULL);
//	assert(psrc != NULL);
//
//	while(*psrc != '\0')
//	{
//		*pdest = *psrc;
//		pdest++;
//		psrc++;
//	}
//	*pdest = *psrc;
//}

//
//char* my_strcpy(char* pdest, const char* psrc)
//{
//	char *start = pdest;
//	assert(pdest != NULL);
//	assert(psrc != NULL);
//
//	while(*pdest = *psrc)
//	{
//		pdest++;
//		psrc++;
//	}
//	return start;
//}
//
//
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "hello";
//
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	system("pause");
//	return 0;
//}
//

//
//1. ±àÒë´íÎó
//2. Á´½Ó´íÎó
//3. ÔËĞĞÊ±´íÎó
//

//extern int g_val;//
//int main()
//{
//	//printf("%d\n", g_val);
//	ADD(2, 3);
//	system("pause");
//	return 0;
//}
//15--00001111
//
//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while(n)
//	{
//		if(n%2==1)
//			count++;
//		n=n/2;
//	}
//	return count;
//}

//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111
//
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		if(((n>>i)&1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_one_bit(int n)
//{
//	//n=n&(n-1)
//	//n=15
//	//00001111- n
//	//00001110- n-1
//	//00001110- n
//	//00001101- n-1
//	//00001100- n
//	//00001011- n-1
//	//00001000- n
//	//00000111- n-1
//	//00000000- n
//	int count = 0;
//	while(n)
//	{
//		n = n&(n-1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);//15
//	ret = count_one_bit(n);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}
//10
//00000000000000000000000000001010
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);//10
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n&(n-1);
//		count++;
//	}
//	return count;
//}
//
//int count_diff_bit(int x, int y)
//{
//	return count_one_bit(x^y);
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	scanf("%d%d", &m, &n);
//	ret = count_diff_bit(m, n);
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for(a=1; a<=5; a++)
//	{
//		for(b=1; b<=5; b++)
//		{
//			for(c=1; c<=5; c++)
//			{
//				for(d=1; d<=5; d++)
//				{
//					for(e=1; e<=5; e++)
//					{
//						if(   ((b==2)+(a==3)==1)
//							&&((b==2)+(e==4)==1)
//							&&((c==1)+(d==2)==1)
//							&&((c==5)+(d==3)==1)
//							&&((e==4)+(a==1)==1))
//						{
//							if(a*b*c*d*e==120)
//								printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int killer = 0;
//	for(killer='a'; killer<='d'; killer++)
//	{
//		if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	system("pause");
//	return 0;
//}
//

//
//ÑîÊÏ¾ØÕó
//

//
//Ñî»ÔÈı½Ç
//

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<10; j++)
//		{
//			if(j==0)
//				arr[i][j] = 1;
//			if(i==j)
//				arr[i][j] = 1;
//			if(i>1 && j>0)
//			{
//				arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
//			}
//		}
//	}
//
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<=i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//









