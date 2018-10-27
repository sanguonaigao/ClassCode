#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//
//int main()
//{
//	const int num = 10;
//	int n = 100;
//	const int *const p = &num;
//	*p = 20;
//	p = &n;
//
//	printf("%d\n", num);
//	return 0;
//}
//

//strlen


//
//char* my_strcpy(char* dest,const char *src)
//{
//	char *ret = dest;
//	assert(dest != NULL);//¶ÏÑÔ
//	assert(src != NULL);//¶ÏÑÔ
//
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[10] = "qqqqqqq";
//	char *p = "abc";
//	
//	printf("%s\n", my_strcpy(arr, p));//
//	return 0;
//}

//<CÏÝÚåºÍÈ±ÏÝ>

//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n", &i);
//	printf("%p\n", &arr[0]);
//
//	//for(i=0; i<=12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");
//	//}
//	return 0;
//}

// 
// unsigned int my_strlen(const char* str)
// {
// 	int count = 0;
// 	assert(str != NULL);
// 
// 	while(*str != '\0')
// 	{
// 		str++;
// 		count++;
// 	}
// 
// 	return count;
// }
// int main()
// {
// 	char arr[] = "abcdef";
// 	int len = my_strlen(arr);
// 	printf("%d\n", len);
// 	return 0;
// }
// 

#include <stdio.h>
#include <string.h>

// int main()
//{
//	char*p = "abc";
//	char *q = "abcdef";
//	if(strlen(p)-strlen(q)>0)
//	{
//		printf("p>q");
//	}
//	else
//	{
//		printf("p<=q");
//	}
//	return 0;
//}
//
int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);

	return 0;
}