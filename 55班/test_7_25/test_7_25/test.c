#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	printf("&i = %p\n", &i);
//	printf("arr = %p\n", arr);
//	system("pause");
//	return 0;
//}
//1
//void my_strcpy(char* dest, char* src)
//{
//	while(*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//
//void my_strcpy(char* dest, char* src)
//{
//	//if(dest == NULL)
//	//	return;
//	//if(src == NULL)
//	//	return;
//
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//
//	while(*dest++ = *src++)
//	{
//		;
//	}
//}
//


//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//#include <string.h>
//
//int main()
//{
//	//strcpy();//字符串拷贝
//	char arr1[20] = "#########";
//	char arr2[] =   "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//
//int main()
//{
//// 	int a = 10;
//// 	int* pa = &a;
//// 	*pa = 20;
//
//	int* pa = NULL;//野指针
//
//	if(pa != NULL)
//		*pa = 20;
//
//	////int a;
//	//printf("a = %d\n", a);
//
//	return 0;
//}

//
//int main()
//{
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//
//	const int num = 10;
//	int n = 100;
//	int *const p = &num;
//	*p = 20;
//	p = &n;
//	//const 修饰指针变量
//	//1. const int*p;//const修饰*p,修饰的是指针所指向的内容，使*p不能被改变
//	//但是p本身是可以改变的
//	//2. int* const p;//const修饰p，修饰的是指针变量本身，使p不能再指向其他变量
//	//但是*p是可以改变的
//
//	printf("%d\n", num);
//
//	return 0;
//}

//
//strlen
//
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
//
//int ADD(int x, int y)
//{
//	return x+y;
//}
//
//
//int main()
//{
//	int ret = Add(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}
//C++

//
//123
//
//13
//1101
//13%2=1
//13/2=6
//110
//
//
//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while(n)
//	{
//		if(n%2==1)
//			count++;
//		n/=2;
//	}
//	return count;
//}

//
//int count_one_bit(int n)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		if(((n>>i)&1) == 1)
//			count++;
//	}
//	return count;
//}
//n=13
//1101-n
//1100
//1100-n
//1011
//1000-n
//0111
//0000-n
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
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = count_one_bit(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
////
//
//int main()
//{
//	int n = 155;
//	int i = 0;
//	//偶数位
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
//
//	return 0;
//}
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
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int tmp = m^n;
//	printf("%d\n", count_one_bit(tmp));
//	return 0;
//}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//	A选手说：B第二，我第三；
//	B选手说：我第二，E第四；
//	C选手说：我第一，D第二；
//	D选手说：C最后，我第三；
//	E选手说：我第四，A第一；
//	比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
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
//						if(((b==2)+(a==3)==1)&&
//						   ((b==2)+(e==4)==1)&&
//						   ((c==1)+(d==2)==1)&&
//						   ((c==5)+(d==3)==1)&&
//						   ((e==4)+(a==1)==1))
//						{
//							if(a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b,c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char killer = 0;
//	for(killer='a';  killer<='d'; killer++)
//	{
//		if((killer != 'a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}


//香
//2
//15分钟
//
