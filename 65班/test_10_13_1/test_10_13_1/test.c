#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = i+1;
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
//void Empty(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
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
//	int arr[] = {1,2,4,6,8,3,5,7,9,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//º¯ÊýµÄÊ¹ÓÃ
//	Print(arr, sz);
//	Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);	
//	Empty(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//
//n*n^k-1
//
//
//double Pow(int n, int k)
//{
//	if(k==0)
//		return 1;
//	else if(k>0)
//		return n*Pow(n, k-1);
//	else
//		return 1.0/(Pow(n, -k));
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
//

//int a = -1;
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111
//unsigned int n = a;
//
//
//int DigitSum(unsigned int n)
//{
//	if(n<10)
//		return n;
//	else
//		return DigitSum(n/10)+n%10;
//}
//
//int main()
//{
//	//DigitSum(1729)
//	//DigitSum(172)+9
//	//DigitSum(17)+2+9
//	//DigitSum(1)+7+2+9
//	//1+7+2+9
//	int ret = DigitSum(1729);
//	printf("%d\n", ret);//19
//	return 0;
//}
//
//int my_strlen(char* str)//abcdef\0
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str+len-1);
//	*(str+len-1) = '\0';
//	if(my_strlen(str+1) > 1)
//		reverse_string(str+1);//++str
//	*(str+len-1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	reverse_string(arr);
//	printf("%s\n", arr);//olleh
//	return 0;
//}
//



// 
// int main()
// {
// 	3%2;
// 
// 	return 0;
// }
// 


//
//int main()
//{
//	int a = 10;
//	int b = a>>-2;//err
//
//	//int a = 5;
//	////00000000000000000000000000000101-Ô­Âë
//	////
//	////int b = a<<1;//10
//	////int b = a+1;
//	//int b = a>>1;
//
//	////ÓÒÒÆ²Ù×÷·û
//	////1. ËãÊõÓÒÒÆ
//	////   ÓÒ±ß¶ªÆú£¬×ó±ß²¹Ô­·ûºÅÎ»
//	////2. Âß¼­ÓÒÒÆ
//	////   ÓÒ±ß¶ªÈ¥£¬×ó±ß²¹0
//
//	//printf("%d\n", b);
//	//printf("%d\n", a);//
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	a = a^b;
//	b = a^b;//a^b^b
//	//int c = a&b;//°´¶þ½øÖÆÎ»Óë
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//00000000000000000000000000000011
//	//
//	//int c = a|b;//
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//11111111111111111111111111111011
//	//11111111111111111111111111111010
//	//10000000000000000000000000000101
//	int c = a^b;
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//11111111111111111111111111111000
//	//11111111111111111111111111110111
//	//10000000000000000000000000001000
//	//-8
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	//printf("%d\n", !a);
//	if(a)
//	{
//
//	}
//	if(!a)
//	{
//
//	}
//	/*int a = 13;
//	a += 15;
//	a >>= 1;
//*/
//	//1101
//	//0001
//	//0001
//
//	return 0;
//}

int main()
{
	//int a = 10;
	//&a;//
	//int arr[10] = {0};
	//&arr;//

	int a = 10;
	int arr[10] = {0};

	//printf("%d\n", sizeof(arr));

// 	printf("%d\n", sizeof(a));
// 	printf("%d\n", sizeof a);
// 
// 	printf("%d\n", sizeof(int));
// 	printf("%d\n", sizeof(int));


	return 0;
}