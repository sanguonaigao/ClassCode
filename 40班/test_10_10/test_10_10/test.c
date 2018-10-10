#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//趟数
	for(i=0; i<sz-1; i++)
	{
		//每一趟的比较
		int j = 0;
		for(j=0; j<sz-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	print_arr(arr, sz);
	bubble_sort(arr, sz);
	print_arr(arr, sz);
	return 0;
}



//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//
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
// void reverse_string(char* arr)
// {
// 	char *left = arr;
// 	char *right = arr+strlen(arr)-1;
// 
// 	while(left<right)
// 	{
// 		char tmp = *left;
// 		*left = *right;
// 		*right = tmp;
// 
// 		left++;
// 		right--;
// 	}
// }
 
//
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr+len-1);
//	*(arr+len-1) = '\0';
//	if(strlen(arr+1)>=2)
//		reverse_string(arr+1);
//	*(arr+len-1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//
// int my_strlen(char* str)
// {
// 	int count = 0;
// 	while('\0' != *str)
// 	{
// 		count++;
// 		str++;
// 	}
// 	return count;
// }
//
//my_strlen("abcdef");
//1+my_strlrn("bcdef");
//1+1+my_strlen("cdef");
//1+1+1+1+1+1+0
//

//
//int my_strlen(char *str)
//{
//	if('\0' == *str)
//		return 0;
//	else
//		return 1+my_strlen(1+str);
//}
//
//
//int main()
//{
//	char*p = "abcdef";//ok
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	//char arr[] = "abcdef";
//
//	//printf("%s\n", p);
//
//	return 0;
//}

//
//int DigitSum(int n)//1729
//{
//	if(n>9)
//		return DigitSum(n/10)+n%10;
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}
// int Pow(int n, int k)
// {
// 	if(k==0)
// 		return 1;
// 	else if(k>=1)
// 	{
// 		return n*Pow(n, k-1);
// 	}
// }
// 
// int main()
// {
// 	int n = 0;
// 	int k = 0;
// 	int ret = 0;
// 
// 	scanf("%d%d", &n, &k);
// 	ret = Pow(n, k);
// 	printf("%d\n", ret);
// 	return 0;
// }