#define _CRT_SECURE_NO_WARNINGS 1
//
//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,0};
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	int tmp = 0;
//	int i = 0;
//
//	for(i=0; i<sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}
#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%10 == 9)
//			count++;
//		if(i/10==9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int line = 0;
//	int i= 0;
//	scanf("%d", &line);//7
//	//上
//	for(i=0; i<line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for(j=0; j<line-i-1; j++)
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
//		for(j=0; j<2*(line-1-i)-1; j++)
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
//		int count = 1;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//123
//		//1. 求出位数-n
//		int tmp = i;
//		while(tmp/10)
//		{
//			count++;
//			tmp/=10;
//		}
//		//2. 计算每一位的n次方的和
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp/=10;
//		}
//		//3. 判断
//		if(sum  == i)
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
//
//	scanf("%d%d", &a, &n);
//	for(i=0; i<n; i++)
//	{
//		k = k*10+a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//

#include <ctype.h>

//
//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		if(islower(ch))
//		{
//			putchar(toupper(ch));
//		}
//		else if(isupper(ch))
//		{
//			putchar(ch+32);
//		}
//		else if(isdigit(ch))
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
//int main()
//{
//	if(isdigit('w'))
//	{
//		printf("ok\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	//char c = 'w';
//
//	//if(islower(c))
//	/*if(isupper(c))
//	{
//	printf("大写\n");
//	}
//	else
//	{
//	printf("小写\n");
//	}*/
//
//	return 0;
//}

//
//int main()
//{
//	/*int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//	putchar(ch);
//	}*/
//	int ch = 0;
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	//getchar();
//	while((ch=getchar()) != '\n')
//	{
//		;
//	}
//	ch = getchar();
//	if(ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
//
//void PrintTable(int n)
//{
//	int i = 0;
//	//打印的行数
//	for(i=1; i<=n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//9
//	PrintTable(line);
//	return 0;
//}
//

//
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int *arr, int sz)
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
//	int arr[5] = {1,2,3,4,5};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//Print(arr, sz);
//	//Init(arr, sz);
//	//int arr[] = {0};
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}
//

//double Pow(int n, int k)
//{
//	if(k>0)
//		return n*Pow(n, k-1);
//	else if(k==0)
//		return 1;
//	else
//		return 1.0/Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0.0;
//	scanf("%d%d", &n, &k);
//	ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}
//

#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	//字符串
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}
//










