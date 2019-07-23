#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf( "%d\n", answer);//输出多少？
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//
//	//printf("%d\n", i);
//	return 0;
//}
//
//
//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
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
//			continue;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}
//
//void print_table(int line)
//{
//	int i = 0;
//	int j = 0;
//	for(i=1; i<=line; i++)
//	{
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	print_table(line);
//	return 0;
//}
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
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	Init(arr, sz);
//	//Print(arr, sz);
//	//Empty(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}
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
//
//	return 0;
//}
//
//int DigitSum(unsigned int n)//1729
//{
//	if(n>9)
//	{
//		return DigitSum(n/10)+n%10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	int ret = 0;
//	scanf("%d", &num);//1729
//	ret = DigitSum(num);
//	printf("%d\n", ret);
//	//TDD-测试驱动开发
//	return 0;
//}


//void reverse_string(char* str)

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
//int b = a+1
//int b = ++a;
//

// int my_strlen(char* str)
// {
// 	if(*str != '\0')
// 		return 1+my_strlen(str+1);
// 	else
// 		return 0;
// }

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
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
//void reverse_string(char arr[])
//{
//	int len = my_strlen(arr);
//	char tmp = arr[0];//1
//	arr[0] = arr[len-1];//2
//	arr[len-1] = '\0';
//	if(my_strlen(arr+1) >= 2)
//		reverse_string(1+arr);
//	arr[len-1]= tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//fedcba
//	printf("%s\n", arr);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", *pa);
//	return 0;
//}

//01000011
//0x43

//0000-0
//0001
//0010
//0011
//1111-15

//int* char* float*
//
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char*pc = &a;
//	printf("&a = %p\n", &a);
//
//	printf("pa = %p\n", pa);
//	printf("pa+1 = %p\n", pa+1);
//
//	printf("pc = %p\n", pc);
//	printf("pc+1 = %p\n", pc+1);
//
//
//	//int* pa = &a;
//	//*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	char* p = arr;
//	for(i=0; i<10; i++)
//	{
//		*p = 10;
//		p++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n", &arr[0]-&arr[9]);
//	 
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	char *cp = str;
//	while(*cp != '\0') 
//	{
//		cp++;
//	}
//	return cp-str;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	char arr1[10] = {0};
//	int arr2[5] = {0};
//	&arr1[9]-&arr[4];//err
//	return 0;
//}