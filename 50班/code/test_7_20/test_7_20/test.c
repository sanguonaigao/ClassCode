#define _CRT_SECURE_NO_WARNINGS 1
// 
// #include <stdio.h>
// int main()
// {
// 	char a = 128;
// 	//00000000 00000000 00000000 10000000
// 	//10000000
// 	//
// 	//10000000 00000000 00000000 10000000
// 	//11111111 11111111 11111111 01111111
// 	//11111111 11111111 11111111 10000000
// 	//11111111 11111111 11111111 10000000--
// 	//0x ff ff ff 80
// 	printf("%u\n", a);
// 	//128
// 	//
// 	return 0;
// }
// 
// int main()
// {
// 	int i= -20;
// 	unsigned  int  j = 10;
// 	printf("%d\n", i+j); 
// 	//-10
// 	//10000000000000000000000000010100
// 	//11111111111111111111111111101011
// 	//11111111111111111111111111101100  -20
// 	//00000000000000000000000000001010  10
// 	//11111111111111111111111111110110
// 	//11111111111111111111111111110101
// 	//10000000000000000000000000001010
// 	//-10
// 
// 	return 0;
// }
// 
//#include <windows.h>
//
//int main()
//{
//	unsigned int i;
//	//9 8 7 6 5 4 3 2 1 0 -1
//	for(i = 9; i >= 0; i--)
//	{
//		Sleep(100);
//		printf("%u\n",i);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//// 	char a[1000];
//// 	int i;
//// 	for(i=0; i<1000; i++)
//// 	{
//// 		a[i] = -1-i;//-1 -2 -3 ... -128 -129 ... -1000
//// 	}
//// 	//-1 -2 -3 ... -128 127 126 125 ... 3 2 1 0 -1 -2 ...
//// 	//
//// 	printf("%d",strlen(a));//255
//
//	short num = 32767;
//	short int a = num +1;
//	printf("%d\n",a);
//
//
//	return 0;
//}


// #include <stdio.h>
// 
// unsigned char i = 0;
// int main()
// {
// 	for(i = 0;i<=255;i++)
// 	{
// 		printf("hello world\n");
// 	}
// 	return 0;
// }
//
//int main()
//{
//	char a = -128;
//	unsigned char b = 128;
//
//	return 0;
//}
// int main()
// {
// 	int n = 9;
// 	//0 00000000 00000000000000000001001
// 	//(-1)^0 * 0.00000000000000000001001 * 2^-126
// 	//
// 	float *pFloat = (float *)&n;//
// 	printf("n = %d\n" ,n);//9
// 	printf("*pFloat  = %f\n", *pFloat);//0.000000
// 	*pFloat = 9.0;
// 	//1001.0
// 	//1.001*2^3
// 	//01000001000100000000000000000000
// 	//
// 	printf("n = %d\n",n);//9
// 	printf("*pFloat = %f\n",*pFloat);//9.000000
// 	return 0;
// }
//
//
//int main()
//{
//	float f = 5.5;
//
//	//101.1
//	//(-1)^0 * 1.011*2^2
//	//s=0 m=1.011 e=2
//	//0100 0000 1011 00000000000000000000
//	//40 b0 00 00
//	//
//	return 0;
//}


//int  main()
//{
//	char *p = "abcdef";
//	//*p = 'w';
//	int arr[10000][10000] = {0};
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	//
//	//volatile
//	//保持内存的可见性
//	//
//// 	volatile const int num = 10;
//// 	//num = 20;
//// 	int *p = (int *)&num;
//// 
//// 	printf("%d\n", num);//10
//// 	*p = 20;
//// 	printf("%d\n", num);//20
//	
//	//const int num = 10;
//	//const int * const p = &num;
//	//*p = 20;
//
//	int num = 10;
//	int *p = &num;
//	const int *  *  pp = &p;
//
//	//int*** ppp  = &pp;
//	return 0;
//}

//
//void print(int n)//1234
//{
//	if(n>9)
//	{
//		print(n/10);//123
//	}
//	//
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	print(1234);
//	//print(123) + 4
//	//print(12) 3 + 4
//	//print(1) 2 3 4
//	//
//	return 0;
//}


//
//void test(int n)
//{
//	if(n<10000)
//	{
//		test(n+1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

int main()
{
	main();
	return 0;
}
