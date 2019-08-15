#define _CRT_SECURE_NO_WARNINGS 1
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//
#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//上
//	for(i=0; i<line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for(i=0; i<line-1; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<(line-1-i)*2-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=1000000; i++)
//	{
//		//判断i是否为水仙花数
//		//1. 求位数
//		//i=123
//		int sum = 0;
//		int count = 0;
//		int tmp = i;
//		while(tmp)
//		{
//			tmp/=10;
//			count++;
//		}
//		//2. 求次方和
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp /= 10;
//		}
//		//3. 判断
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	scanf("%d %d", &a, &n);
//	for(i=0; i<n; i++)
//	{
//		k = k*10+a;
//		sum += k;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)//end of file
//	{
//		if(ch>='A' && ch<='Z')
//		{
//			putchar(ch+32);
//		}
//		else if(ch>='a' && ch<='z')
//		{
//			putchar(ch-32);
//		}
//		else if(ch>='0' && ch<='9')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}

#include <ctype.h>
//isupper
//islower
//isdigit
//toupper
//tolower
int main()
{
	int ch = 0;
	while((ch=getchar()) != EOF)//end of file
	{
		if(isupper(ch))
		{
			putchar(tolower(ch));
		}
		else if(islower(ch))
		{
			putchar(toupper(ch));
		}
		else if(isdigit(ch))
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}
	return 0;
}