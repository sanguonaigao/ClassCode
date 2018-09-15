#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//暴力移位
//void left_move(char* str, int k)
//{
//	int len = 0;
//	int i = 0;
//	while(k--)
//	{
//		//1. 把第一个保存起来
//		char tmp = *str;
//		//2. 后面的向前移动
//		len = strlen(str);
//		for(i=0; i<len-1; i++)
//		{
//			*(str+i) = *(str+1+i);
//		}
//		//3. 把保存的数据放在最后
//		*(str+len-1) = tmp;
//	}
//}
//

#include <assert.h>

void reverse(char*left, char*right)
{
	assert(left &&right);
	while(left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
//abcdef
//
// void left_move(char *arr, int k)
// {
// 	int len = strlen(arr);
// 	reverse(arr, arr+k-1);//逆序前部分
// 	reverse(arr+k, arr+len-1);//逆序后部分	
// 	reverse(arr, arr+len-1);//逆序整个串
// }
// 
// int is_left_move(char *s1, char*s2)
// {
// 	int len = strlen(s1);
// 	while(len--)
// 	{
// 		left_move(s1, 1);
// 		if(strcmp(s1, s2) == 0)
// 		{
// 			return 1;
// 		}
// 	}
// 	return 0;
// }
// 
// int is_left_move(char *s1, char*s2)
// {
// 	int len1 = strlen(s1);
// 	int len2 = strlen(s2);
// 	if(len1 != len2)
// 		return 0;
// 	strncat(s1, s1, len1);
// 	if(strstr(s1, s2))
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return 0;
// 	}
// }
// 
// int main()
// {
// 	//abcdef
// 	//bcdefa
// 	//cdefab
// 	//char arr[] = "abcdef";
// 	//bafedc
// 	//cdefab
// 	//三步翻转
// 	//
// 	//left_move(arr, 2);
// 
// 	//printf("%s\n", arr);
// 	char s1[20] = "abcdef";
// 	//"abcdefabcdef"
// 	//
// 	char s2[] = "cdef";
// 	int ret = is_left_move(s1, s2);
// 	if(ret == 1)
// 	{
// 		printf("yes\n");
// 	}
// 	else
// 	{
// 		printf("no\n");
// 	}
// 
// 	return 0;
// }

//
//int Pow(int n, int k)
//{
//	if(k<1)
//		return 1;
//	else
//		return n*Pow(n, k-1);
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Pow(n, k);
//	printf("ret = %d\n", ret);
//	return 0;
//}


// size_t DigitSum(unsigned int n)
// {
// 	if(n>9)
// 		return n%10 + DigitSum(n/10);
// 	else
// 		return n;
// }
// 
// int main()
// {
// 	unsigned int num = 1729;
// 	size_t ret = DigitSum(num);
// 	printf("%d\n", ret);
// 	return 0;
// }
//
//int my_strlen(const char*str)
//{
//	int count = 0;
//	assert(str);
//	while(*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//void reverse_string(char *str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str+len-1);
//	*(str+len-1) = '\0';
//	if(my_strlen(str+1)>1)
//		reverse_string(str+1);
//	*(str+len-1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
#include <bit.h>

// void find_diff_num(int *arr, int sz, int*px, int*py)
// {
// 	//1. 所有的数字异或
// 	int num = 0;
// 	int i = 0;
// 	int pos = 0;
// 	for(i=0; i<sz; i++)
// 	{
// 		num ^= arr[i];
// 	}
// 
// 	//2. 找num的二进制位中的1的位置
// 	for(i=0; i<32; i++)
// 	{
// 		if(((num>>i)&1) == 1)
// 		{
// 			pos = i;
// 			break;
// 		}
// 	}
// 
// 	//3. 按照pos位为1或者0分组
// 	//int arr[] = {1,2,3,4,5,1,2,3,4,6};
// 	//
// 	for(i=0; i<sz; i++)
// 	{
// 		if(((arr[i]>>pos)&1) == 1)
// 		{
// 			*px ^= arr[i];
// 		}
// 		else
// 		{
// 			*py ^= arr[i];
// 		}
// 	}
// }
// 
// int main()
// {
// 	//1 1 3 3 5
// 	//2 2 4 4 6
// 
// 	int arr[] = {1,2,3,4,5,1,2,3,4,6,100,120,120,100, 5,6,15, 17};
// 	//
// 	//2 2 3 3 6 6 15
// 	//1 1 4 4 5 5 100 100 120 120 17
// 	//
// 	//01111
// 	//10001
// 	//11110
// 	//
// 	int sz = SIZEOF(arr);
// 	int n1 = 0;
// 	int n2 = 0;
// 	find_diff_num(arr, sz, &n1, &n2);
// 	printf("%d %d\n", n1, n2);
// 	return 0;
// }




// int main()
// {
// 	int money  = 0;
// 	int total = 0;
// 	int empty = 0;
// 	scanf("%d", &money);
// // 	total = money;
// // 	empty = money;
// // 
// // 	while(empty>=2)
// // 	{
// // 		total += empty/2;
// // 		empty = empty/2+empty%2;
// // 	}
// 	printf("total = %d\n", money*2-1);
// 
// 	return 0;
// }


// void bubble_sort(char* *arr, int sz)
// {
// 	int i = 0;
// 	int j = 0;
// 	for(i=0; i<sz-1; i++)
// 	{
// 		for(j=0; j<sz-1-i; j++)
// 		{
// 			if(strcmp(arr[j], arr[j+1])>0)
// 			{
// 				char* tmp = arr[j];
// 				arr[j] = arr[j+1];
// 				arr[j+1] = tmp;
// 			}
// 		}
// 	}
// }
// int main()
// {
// 	char* arr[] = {"ddd", "aaaaa", "ccccc", "bbbbbb"};
// 	int i=0;
// 	int sz = SIZEOF(arr);
// 	for(i=0; i<sz; i++)
// 	{
// 		printf("%s\n", arr[i]);
// 	}
// 	//排序
// 	bubble_sort(arr, sz);
// 	for(i=0; i<sz; i++)
// 	{
// 		printf("%s\n", arr[i]);
// 	}
// 	return 0;
// }
//
//struct S
//{
//	char c1:2;
//	char c2:5;
//	char c3:3;
//	char c4:7;
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	struct S s = {0};
//	s.c1 = 5;
//	s.c2 = 100;
//	s.c3 = 15;
//	s.c4 = 120;
//
//	return 0;
//}

//  enum Sex
//  {
//  	MALE,//0
//  	FEMALE,//1
//  	SECRET//2
//  };
// 
// 
// #define MALE 0
// #define FEMALE 1

// int main()
// {
// 	enum Sex sex = MALE;
// 	//printf("%d\n", MALE);
// 	//printf("%d\n", FEMALE);
// 	//printf("%d\n", SECRET);
// 
// 
// 	return 0;
// }
// 
// enum Option
// {
// 	ADD=1,
// 	SUB,
// 	MUL,
// 	DIV
// };
// 
// int main()
// {
// 	printf("%d\n", sizeof(enum Option));
// 	return 0;
// }
// 
// int main()
// {
// 	switch(input)
// 	{
// 	case ADD:
// 		break;
// 	case SUB:
// 		break;
// 	}
// 	return 0;
// }
//
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	//u.i = 0x11223344;
//	//u.c = 0x55;
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}
// 
// union U
// {
// 	char arr[7];//7 1
// 	short s;//2
// };
// 
// 
// int main()
// {
// 	printf("%d\n", sizeof(union U));
// 	return 0;
// }
//
//192.168.1.233--点分十进制表示
//
//65897653--unsigned int --4
//00000011 11101101 10000100 10110101
//3.237.132.181
//
//65897653
//

// union Ip
// {
// 	unsigned int num;//4
// 	struct
// 	{
// 		unsigned char c1;
// 		unsigned char c2;
// 		unsigned char c3;
// 		unsigned char c4;
// 	}ip;//4
// };
// 
// int main()
// {
// 	union Ip my_ip;
// 	my_ip.num = 65897653;
// 	printf("%d.%d.%d.%d\n", 
// 		my_ip.ip.c1, my_ip.ip.c2, my_ip.ip.c3, my_ip.ip.c4);
// 	return 0;
// }


// 
// struct S
// {
// 	int a;
// 	struct B
// 	{
// 		char c1;
// 		int i;
// 		char c2;
// 	};
// 	double d;
// };
// 
// int main()
// {
// 	//24 
// 	printf("%d\n", sizeof(struct S));
// 	return 0;
// }
// 




