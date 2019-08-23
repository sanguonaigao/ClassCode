#define _CRT_SECURE_NO_WARNINGS 1

//1111
//15%2=
//
//1234

#include <stdio.h>
//
//int count_one_bits(unsigned int n)
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
//int count_one_bits(int n)
//{
//	int i = 0;
//	int count = 0;
//	for(i=0; i<32; i++)
//	{
//		if(((n>>i)&1)==1)
//			count++;
//	}
//	return count;
//}
//
//int count_one_bits(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = -1;
//	//n=n&(n-1)
//	//1111-n
//	//1110-n-1
//	//1110-n
//	//1101-n-1
//	//1100-n
//	int ret = count_one_bits(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	int m = 100;
//	int i = 0;
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (m>>i)&1);
//	}
//	printf("\n");
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (m>>i)&1);
//	}
//	printf("\n");
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
//						if(((b==2)+(a==3)==1)&&
//						   ((b==2)+(e==4)==1)&&
//						   ((c==1)+(d==2)==1)&&
//						   ((c==5)+(d==3)==1)&&
//						   ((e==4)+(a==1)==1))
//						{
//							if(a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//

//
//int main()
//{
//	int killer=0;
//	for(killer='a'; killer<='d'; killer++)
//	{
//		if((killer!='a')+(killer=='c')+
//			(killer=='d')+(killer!='d')==3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//
// 
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
//
//int main()
//{
//	int arr[9][9] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<9; i++)
//	{
//		for(j=0; j<9; j++)
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
//	for(i=0; i<9; i++)
//	{
//		for(j=0; j<=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//