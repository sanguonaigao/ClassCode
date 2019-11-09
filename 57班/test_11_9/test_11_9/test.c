#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	a--;
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	if(a < sizeof(a))
//	{
//		printf("<\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10;
//	int b = 2;
//	//int c = (a+b)*10;
//	int c = a+b+10;
//
//	return 0;
//}

//代码4
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
//
//
//int main()
//{
//	int i = 1;
//	int a = (++i)+(++i)+(++i);
//	printf("a = %d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;//4个字节
//	//printf("%p\n", &a);
//	int * p = &a;//指针变量
//	*p = 20;//解引用操作
//
//	printf("%d\n", a);
//
//	//char c = 'w';
//	//char* pc = &c;
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	//*p = 0;
//	char* pc = &a;
//	//*pc = 0;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		//*(pc+i) = 0;
//		*pc++ = 0;
//	}
//	return 0;
//}
#include <string.h>
//
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
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

// int main()
// {
// 	int arr[10] = {0};
// 	char ch[10] = {0};
// 	printf("%d\n", &arr[0]-&ch[9]);//9 //err
// 	return 0;
// }
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	while(*str != '\0')
//		str++;
//	return str-start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//
//
//int main()
//{
//	//int *p;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	/*for(i=0; i<sz; i++)
//	{
//	printf("%p === %p\n", &arr[i], p+i);
//	}*/
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//数组名其实是数组首元素的地址
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int * p = &a;
//	int** pp = &p;
//	**pp  =20;
//	printf("%d\n", a);
//	//int*** ppp = &pp;
//
//	return 0;
//}
//
//int main()
//{
//	//指针数组
//	//整型数组
//	int arr[10] = {1,2,3};
//	//字符数组
//	char arr2[5] = {'b', 'i', 't'};
//	//指针数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr3[4] = {&a, &b, &c};
//
//	printf("%d\n", *(arr3[0]));
//	printf("%d\n", *(arr3[1]));
//	printf("%d\n", *(arr3[2]));
//
//	return 0;
//}

//自定义类型-构造类型
//
//struct A
//{
//	int num;
//	char ch;
//};
//
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char id[20];
//	struct A sa;
//}Stu;
//
//void Print1(struct Stu tmp)
//{
//	printf("%s %d %s--%d %c\n", tmp.name, tmp.age, tmp.id, tmp.sa.num, tmp.sa.ch);
//}
//
//void Print2(struct Stu* ps)
//{
//	printf("%s %d %s--%d %c\n", ps->name, ps->age, ps->id, ps->sa.num, ps->sa.ch);
//}
//
//int main()
//{
//	struct Stu s = {"张三", 20, "20190101", {100, 'w'}};
//	Print1(s);
//	Print2(&s);
//
//	//printf("%s %d %s--%d %c\n", s.name, s.age, s.id, s.sa.num, s.sa.ch);
//	//struct Stu* ps = &s;
//	//printf("%s %d %s--%d %c\n", ps->name, ps->age, ps->id, ps->sa.num, ps->sa.ch);
//
//	return 0;
//}
//
//
//void Add(int x, int y)
//{
//	
//}
//int main()
//{
//	int a = 1;
//	Add(a++, a++);
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//
//	printf("a=%d b=%d\n", b, a);
//
//	/*printf("a = %d b = %d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a = %d b = %d\n", a, b);*/
//
//	return 0;
//}


//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("a = %d b = %d\n", a, b);
//	//a = a+b;
//	//b = a-b;
//	//a = a-b;
//	//
//	//011-
//	//101-b
//	//110-a
//	//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=1; i<sz; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}

//void Swap(int x, int y)
//{
//	int z = x;
//	x = y;
//	y = z;
//}
//
//void Swap(int* px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	//比较得到结果
//	if(a<b)
//	{
//		Swap(&a, &b);
//	}
//	if(a<c)
//	{
//		Swap(&a, &c);
//	}
//	if(b<c)
//	{
//		Swap(&b, &c);
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

int main()
{
	int a = 18;
	int b = 24;
	int c = 0;

	while(c=a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
