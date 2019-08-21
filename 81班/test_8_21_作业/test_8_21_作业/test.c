#define _CRT_SECURE_NO_WARNINGS 1


// #include <stdio.h>
// 
// void print_table(int n)
// {
// 	int i = 0;
// 	for(i=1; i<=n; i++)
// 	{
// 		int j = 0;
// 		for(j=1; j<=i; j++)
// 		{
// 			printf("%d*%d=%3d ", i, j, i*j);
// 		}
// 		printf("\n");
// 	}
// }
// 
// int main()
// {
// 	int n = 0;
// 	scanf("%d", &n);
// 	print_table(n);
// 	return 0;
// }

#include <stdio.h>
#include <string.h>
//
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = i;
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
//void Empty(int arr[], int sz)
//{
//	memset(arr, 0, sz*sizeof(arr[0]));
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	Empty(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}
//
//
//double Pow(int n, int k)
//{
//	if(k==0)
//	{
//		return 1.0;
//	}
//	else if(k>0)
//	{
//		return 1.0*n*Pow(n, k-1);
//	}
//	else
//	{
//		return 1.0/Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 2;
//	int k = -3;
//	double ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}
//
//int DigitSum(unsigned int n)
//{
//	if(n<=9)
//		return n;
//	else
//		return DigitSum(n/10)+n%10;
//}
//
//int main()
//{
//	unsigned int num = 1729;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
#include <assert.h>

int my_strlen(const char*str)
{
	int count = 0;
	assert(str);
	while(*str++)
	{
		count++;
	}
	return count;
}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char*left = str;
//	char*right = str+len-1;
//	assert(str != NULL);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}


void reverse_string(char* str)
{
	int len = my_strlen(str);
	char tmp = *str;
	*str = *(str+len-1);

	//逆序除过两端字符的中间的字符串
	*(str+len-1) = '\0';
	if(my_strlen(str+1)>=2)
		reverse_string(str+1);

	*(str+len-1) = tmp;
}


int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	//fedcba

	return 0;
}