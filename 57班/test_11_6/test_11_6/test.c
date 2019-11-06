#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int main()
//{
//	//int arr1[10] = {0};
//	//char arr2[15];
//	/*int arr1[10] = {1,2,3};
//	int arr2[] = {1,2,3};
//	int arr3[3] = {1,2,3};
//	char arr4[5] = {'b', 'i', 't'};
//	char arr5[5] = "bit";*/
//
//	char arr1[] = {'b', 'i', 't'};
//	char arr2[] = "bit";
//	printf("%s\n", arr1);//
//	printf("%s\n", arr2);//
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[] = {1,3,5,7,9,2,4,6,8,0,11};
//	//arr[7];
//	//printf("%d\n", arr[7]);
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = &arr[0];
//
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		//printf("&arr[%d] = %p   <===>  %p\n", i, &arr[i], p+i);
//		//printf("%d ", arr[i]);
//		printf("%d ", *(p+i));
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//int arr[][4] = {{1,2},{3,4},{5}};
//
//	//char arr2[2][5] = {"abc", "def"};
//	//char arr2[2][5] = {{'a', 'b', 'c'},{'d', 'e', 'f'}};
//	int arr[3][4] = {{1, 2}, {3, 4}};
//	//printf("%d\n", arr[1][1]);
//	int i = 0;
//	int j = 0;
//	/*for(i=0; i<3; i++)
//	{
//	for(j=0; j<4; j++)
//	{
//	printf("%d ", arr[i][j]);
//	}
//	printf("\n");
//	}
//	*/
//	/*for(i=0; i<4; i++)
//	{
//	for(j=0; j<3; j++)
//	{
//	printf("%d ", arr[j][i]);
//	}
//	printf("\n");
//	}*/
//
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz-1; i++)//冒泡排序的趟数
//	{
//		int j = 0;
//		int flag = 1;//已经有序
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//		if(flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz);//冒泡排序
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//5/2.0;
//	//int a = 5%2;
//	int a = -1;
//	int b = a>>1;
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//	//
//	//00000000000000000000000000010100
//	//右移
//	//算术右移
//	//右边丢弃，左边补原符号位
//	//逻辑右移
//	//右边丢弃，左边补0
//
//	printf("%d\n", b);
//	return 0;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 5;
//	//int c = a & b;//按(2进制)位与
//	//int c = a | b;//按(2进制)位或
//	int c = a ^ b;//按(2进制)位异或
//	//00000000000000000000000000001010
//	//00000000000000000000000000000101
//	//00000000000000000000000000001111
//	//
//	//00000000000000000000000000001111
//	//00000000000000000000000000000000
//	//
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 11;
//	//
//	//000000000000000000000000000001011
//	//000000000000000000000000000000001
//	//000000000000000000000000000000001
//	//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 5;
//	//a = a|b;//
//	//a |= b;
//	a = a+1;
//	a += 1;
//
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int flag = 10;
//	if(flag)
//	{
//		//
//	}
//	if(!flag)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	char c = 'w';
//	int* pa = &a;
//	*pa = 20;//解引用操作符
//
//	//printf("%p\n", &a);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	a--;
//	//printf("%u\n", a);
//	if(a<sizeof(int))
//	{
//		printf("hehe\n");
//	}
//
//	/*int arr[10] = {0};
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));*/
//// 	int a = 10;
//// 	printf("%d\n", sizeof(a));
//// 	printf("%d\n", sizeof a);
//// 	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof int);//err
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//-1
//	printf("%d\n", ~a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//00000000000000000000000000001010
//	//00000000000000000000000000000100
//	//00000000000000000000000000001110
//	//11111111111111111111111111111011
//	//
//	//a |= (1<<2);
//	//a &= ~(1<<2);
//	//
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}
#include <stdio.h>
//
//int main()
//{
//	int i = 0,a=1,b=2,c =3,d=4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	//
//	//1 3 3 4-3
//	//0 3 4 5
//	//1 3 3 5-4
//	//1 2 3 5
//	//0 3 3 4
//	//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = (a>b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int arr[5] = {1,2,3};
//	int ret = 0;
//	arr[3];//下标引用操作符
//	//函数调用操作符
//	ret = Add(2, 6);
//
//	return 0;
//}

//结构体
//自定义的类型
//
//
//struct Stu
//{
//	//描述学生相关的属性
//	char name[20];
//	short age;
//	char id[12];
//};
//
//int main()
//{
//	struct Stu s = {"张三", 20, "20190101"};
//	struct Stu* ps = NULL;
//	printf("%s %d %s\n", s.name, s.age, s.id);
//	ps = &s;
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//	return 0;
//}
//
//int main()
//{
//	char a  = 3;
//	char b = 127;
//	char c = a+b;
//
//	//00000000000000000000000000000011
//	//
//	//00000000000000000000000001111111
//	//00000000000000000000000001111111-b
//	//00000000000000000000000000000011-a
//	//00000000000000000000000010000010
//	//11111111111111111111111110000010-c
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//-126
//	printf("%d\n", c);//?
//
//	return 0;
//}

//
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if(a==0xb6)
//		printf("a");
//	if(b==0xb600)
//		printf("b");
//	if(c==0xb6000000)
//		printf("c");
//	return 0;
//}
//
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}


