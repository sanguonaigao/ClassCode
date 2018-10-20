#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// 
// int main()
// {
// 	//int ch = getchar();
// 	int ch = 0;
// 	while((ch=getchar()) != EOF)
// 	{
// 		if(ch>='A' && ch<='Z')
// 		{
// 			putchar(ch+32);
// 		}
// 		else if(ch>='a' && ch<='z')
// 		{
// 			putchar(ch-32);
// 		}
// 		else if(ch>='0' && ch<='9')
// 		{
// 			;
// 		}
// 		else
// 		{
// 			putchar(ch);
// 		}
// 	}
// 	return 0;
// }
// 
// void print_table(int line)
// {
// 	int i = 0;
// 	for(i=1; i<=line; i++)
// 	{
// 		int j = 0;
// 		for(j=1; j<=i; j++)
// 		{
// 			printf("%d*%d=%-3d ", i, j, i*j);
// 		}
// 		printf("\n");
// 	}
// }
// int main()
// {
// 	int line = 0;
// 	scanf("%d", &line);
// 	print_table(line);
// 	return 0;
// }

void Init(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		arr[i] = i;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Empty(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		arr[i] = 0;
	}
}

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
//void Reverse(int arr[], int left, int right)
//{
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
//	int arr[10] = {0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	Init(arr, sz);
//	//Print(arr, sz);
//	//Empty(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, 0, sz-1);
//	Print(arr, sz);
//
//	return 0;
//}
//n*Power(n, k-1);

// 
// int Power(int n, int k)
// {
// 	if(k == 0)
// 		return 1;
// 	else
// 		return n*Power(n, k-1);
// }
// 
// int main()
// {
// 	int n = 0;
// 	int k = 0;
// 	int ret = 0;
// 	scanf("%d%d", &n, &k);
// 	ret = Power(n, k);
// 	printf("%d\n", ret);
// 	return 0;
// }
// 
// int DigitSum(unsigned int num)
// {
// 	if(num<10)
// 		return num;
// 	return num%10+DigitSum(num/10);
// }
// 
// int main()
// {
// 	//1729
// 	//172 9
// 	//17 2 9
// 	unsigned int num = 0;
// 	int ret = 0;
// 	scanf("%d", &num);
// 	ret = DigitSum(num);
// 	printf("%d\n", ret);
// 	return 0;
// }

#include <string.h>
//
//void reverse(char arr[], int left, int right)
//{
//	while(left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//int sz = sizeof(arr)/sizeof(arr[0]);//4
//	int sz = strlen(arr);//3
//	reverse(arr, 0, sz-1);
//	printf("%s\n", arr);
//	return 0;
//}

//
//void reverse(char *left, char*right)
//{
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//int sz = sizeof(arr)/sizeof(arr[0]);//4
//	int sz = strlen(arr);//3
//	reverse(arr, arr+sz-1);
//	printf("%s\n", arr);
//	return 0;
//}

//
//void reverse(char arr[])
//{
//	int sz = strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[sz-1];
//	arr[sz-1] = '\0';
//	if(strlen(arr+1)>1)
//		reverse(arr+1);
//	arr[sz-1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//
// 
// #include <stdio.h>
// int main()
// {
// 	int i = 1;
// 	int ret = (++i) + (++i) + (++i);
// 	printf("%d\n", ret);
// 	return 0;
// }
//
//
//int main()
//{
//	int a = 10;//4
//	char ch = 'w';
//	int * p = &a;
//	char* pc = &ch;
//	
//	printf("%d\n", *p);
//	return 0;
//}
//
//
//int main()
//{
//// 	printf("%d\n", sizeof(char*));//4
//// 	printf("%d\n", sizeof(short*));//4
//// 	printf("%d\n", sizeof(int*));//4
//// 	printf("%d\n", sizeof(long*));//4
//// 	printf("%d\n", sizeof(float*));//4
//// 	printf("%d\n", sizeof(double*));//4
//// 
////	int a = 0x11223344;
//// 	int *pa = &a;
//// 	char *pc = &a;
//// 	printf("%p\n", pa);
//// 	printf("%p\n", pa+1);
//// 	printf("--------------------\n");
//// 	printf("%p\n", pc);
//// 	printf("%p\n", pc+1);
//
//	//int arr[10] = {0};
//	//char *pa = arr;
//	//int i = 0;
//	//for(i=0; i<10; i++)
//	//{
//	//	*(pa+i) = i;
//	//}
//
//// 	int *pa = &a;
//// 	*pa = 0;
//// 
//// 	char *pa = (char*)&a;
//// 	*pa = 0;
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);    //首元素的地址
//	printf("%p\n", arr+1);    //首元素的地址
//	printf("%d\n", sizeof(*arr));//4
//	printf("---------------\n");
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0]+1);//首元素的地址
//	printf("%d\n", sizeof(*&arr[0]));//4
//
//	printf("---------------\n");
//	printf("%p\n", &arr);   //数组的地址
//	printf("%p\n", &arr+1);   //数组的地址
//	printf("%d\n", sizeof(*&arr));//
//	return 0;
//}
//
//
// 
// int main()
// {
// 	//int arr[10] = {0};
// 	//int *p = arr;
// 	int arr[10] = {0};
// 	char arr2[5] = {0};
// 	printf("%d\n", &arr2[1]-&arr[3]);
// 
// 	//printf("%d\n", &arr[0]-&arr[9]);//10 9 40 36 
// }
// 

#include <stdio.h>

int my_strlen1(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int my_strlen2(char* str)
{
	if(*str == '\0')
		return 0;
	else
		return 1+my_strlen2(str+1);
}

int my_strlen(char* str)
{
	char *start = str;
	while(*str != '\0')
	{
		str++;
	}
	return str-start;
}

int main()
{
	char *p = "abcdef";
	int len = my_strlen(p);
	printf("%d\n", len);

	return 0;
}



