#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//
//int main()
//{
//	char ch = 0;
//
//	while((ch = getchar()) != EOF)
//	{
//		if(ch>='a' && ch<='z')
//		{
//			putchar(ch-32);
//		}
//		else if(ch>='A' && ch<='Z')
//		{
//			putchar(ch+32);
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
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//
// 
// void print_table(int n)
// {
// 	int i = 0;
// 	for(i=1; i<=n; i++)//n
// 	{
// 		//打印一行
// 		int j = 0;
// 		for(j=1; j<=i; j++)
// 		{
// 			//打印一项
// 			printf("%d*%d=%d ", i, j, i*j);
// 		}
// 		printf("\n");
// 	}
// }
// 
// int main()
// {
// 	int line = 0;
// 	scanf("%d", &line);
// 	print_table(line);//9
// 	system("pause");
// 	return 0;
// }
//
//void Init(int arr[], int n)
//{
//	int i = 0;
//	for(i=0; i<n; i++)
//	{
//		arr[i] = i+1;
//	}
//}
//
//void Print(int arr[], int n)
//{
//	int i = 0;
//	for(i=0; i<n; i++)
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
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Print(arr, sz);
//	Init(arr, sz);//1 2 3 4 5 6 7 8 9 10
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	Empty(arr, sz);
//	Print(arr, sz);
//	system("pause");
//	return 0;
//}

//
//double Pow(int n, int k)//2 -3
//{
//	if(k == 0)
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
//	double ret = 0.0;
//	scanf("%d%d", &n, &k);//3 5
//	ret = Pow(n, k);
//	printf("%lf\n", ret);
//	system("pause");
//	return 0;
//}
//
//int DigitSum(int n)
//{
//	if(n<10)
//		return n;
//	else
//		return DigitSum(n/10)+n%10;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	//1729
//	//DigitSum(1729)==DigitSum(172)+9
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//studet a am i
//i am a student
//

#include <string.h>


//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("")
//1+1+1+0
//3
//

//
//
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

int my_strlen(char* str)
{
	if(*str == '\0')	
		return 0;
	else
		return 1+my_strlen(str+1);
}

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
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
//void reverse_string(char* str)
//{
//	char tmp = str[0];
//	int len = my_strlen(str);
//	str[0] = str[len-1];
//	str[len-1] = '\0';
//	if(my_strlen(str+1)>=2)
//		reverse_string(str+1);
//	str[len-1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	//int arr2[] = {1,2,3,4,5,6,7,8,9};
//	return 0;
//}

//
//int main()
//{
//	3/2;
//	3.0/2;
//	3%2;
//	//3.0%2;//err
//
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	////左移（二进制）位操作符
//	//左边丢弃，右边补0
//	//
//	//右移
//	//算术右移
//	//右边丢弃，左边补原符号位
//	//逻辑右移
//	//右边丢弃，左边补0
//	int b = a>>1;
//
//	/*int b = a<<1;
//	*/
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	system("pause");
//	//
//	//00000000000000000000000000001111-原码
//	//
//	//-1
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//	//
//	return 0;
//}
//1 2 3 4 5 6 7 1 2 3 4
//1 2 1
//
// 
// int main()
// {
// 	int a = 3;
// 	int b = 5;
// 	//int c = a&b;//按（二进制）位与
// 	//int c = a|b;//按位或
// 	int c = a^b;  //按位异或
// 
// 	//011
// 	//101
// 	//110
// 	printf("%d\n", c);
// 	system("pause");
// 	return 0;
// }

//a&1;
//
//int main()
//{
//	int a = 3;
//	//011
//	//001
//	//001
//	a&1;
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 22;
//	//01010
//	//10110
//	//
//	//int c = (a&b)+(a^b)/2;
//	int c = (a&b)+((a^b)>>1);
//
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10;
//	a = a+10;//1
//	a += 10; //2 复合赋值符
//	//+= -= /= *= &= |= ^= >>= <<=
//	//00000000000000000000000000001010
//	//
//	return 0;
//}
//int main()
//{
//	int flag = 1;
//	if(flag)
//	{
//		//
//	}
//	if(!flag)
//	{
//		//
//	}
//	return 0;
//}
//int main()
//{
//	int flag = 1;
//	flag = -flag;//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;//指针变量
//	*p = 20;//解引用操作符-间接访问操作符
//	printf("a = %d\n", a);
//	//printf("%p\n", &a);//取地址操作符
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int arr[10] = {0};
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));
//	system("pause");
//	return 0;
//}
//

int main()
{
	short s = 5;
	int a = 3;
	printf("%d\n", sizeof(s=a+7));//2
	printf("%d\n", a);//3
	printf("%d\n", s);//5
	system("pause");
	return 0;
}