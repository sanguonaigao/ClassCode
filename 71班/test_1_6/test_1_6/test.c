#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>

//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	//实现字符串逆置
//	char *left = str;
//	char *right = str+len-1;
//
//	while(left<right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str+len-1);
//	*(str+len-1) = '\0';
//	if(strlen(str+1) >= 2)
//		reverse_string(str+1);
//	*(str+len-1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}


//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,0};
//	int i = 0;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0; i<sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}

//创建一个整形数组，完成对数组的操作
//
//	实现函数 init() 初始化数组为全0
//	实现 print()  打印数组的每个元素
//	实现 reverse()   函数完成数组元素的逆置。
//	要求：自己设计以上函数的参数，返回值。

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Print(arr, sz);//打印
//	Reverse(arr, sz);
//	Print(arr, sz);//打印
//	Init(arr, sz);//初始化数组0
//	Print(arr, sz);//打印
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//
//
//int  main()
//{
//	int a = 13;
//	int i = 0;
//	//奇数位
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (a>>i)&1);
//	}
//	printf("\n");
//	//偶数位
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (a>>i)&1);
//	}
//	printf("\n");
//	//00000000000000000000000000001101
//	//0000000000000011
//	//0000000000000010
//	//
//	return 0;
//}
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n&(n-1);//
//		count++;
//	}
//	return count;
//}
//
//int count_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	return count_one_bit(tmp);
//}
//
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int count = count_diff_bit(m, n);
//	
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0; 
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	//在这里完成代码
//	int *p = arr;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	short *p = (short*)arr;
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		*(p+i) = 0;
//	}
//	for(i=0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上部分
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
//	//打印下部分
//	for(i=0; i<line-1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	//1
//
//	for(i=0; i<=100000; i++)
//	{
//		//判断i是否为水仙花数
//		//1. i是几位数
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while(tmp/10)
//		{
//			n++;
//			tmp/=10;
//		}
//		//2. i的每一位的位数次方和
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, n);
//			tmp/=10;
//		}
//		//3. 判断
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	scanf("%d%d", &a, &n);
//	for(i=0; i<n; i++)
//	{
//		k = k*10+a;
//		sum += k;//2 22 222
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//1. 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//	if(money>0)
//		total = money*2-1;
//
//	//total = money;//20
//	//empty = money;//20
//	////置换
//	//while(empty>=2)
//	//{
//	//	total += empty/2;
//	//	empty = empty/2+empty%2;
//	//}
//	printf("total = %d\n", total);
//
//	return 0;
//}
//

//1. 调整数组使奇数全部都位于偶数前面。

void SwapArr(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	while(left<right)
	{
		while((left<right) && (arr[left]%2==1))
		{
			left++;
		}
		//
		while((left<right) && (arr[right]%2==0))
		{
			right--;
		}
		//
		if(left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void PrintArr(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,0};//
	int sz = sizeof(arr)/sizeof(arr[0]);
	SwapArr(arr, sz);
	PrintArr(arr, sz);
	return 0;
}

