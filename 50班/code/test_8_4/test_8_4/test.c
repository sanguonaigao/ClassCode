#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>


//int my_atoi(const char* str)
//{
//	int ret = 0;
//	assert(str != NULL);
//	while(*str != '\0')
//	{
//		ret = ret*10 + *str-'0';
//		str++;
//	}
//	return ret;
//}
//《剑指offer》
//
//注释转换
//
// union tagAAAA
// {
// 	struct
// 	{
// 		char ucFirst;
// 		short usSecond;
// 		char ucThird;
// 	}half;
// 	short kk;
// }number;
// 


enum State
{
	VALID,
	INVALID
};
enum State state = INVALID;//初始化状态值

int my_atoi(const char* str)
{
	long long ret = 0;
	int flag = 1;//标识正负数
	//空指针
	assert(str != NULL);
	//空字符串
	if(*str == '\0')
	{
		return 0;
	}
	//空白字符
	while(isspace(*str))
	{
		str++;
	}	
	//+-
	if(*str == '+')
	{
		str++;
	}
	else if(*str == '-')
	{
		str++;
		flag = -1;
	}
	while(*str != '\0')
	{
		if(isdigit(*str))
		{
			ret = ret * 10 + flag*(*str-'0');
			if(ret >INT_MAX || ret<INT_MIN)
			{
				return 0;
			}
		}
		else
		{
			state = VALID;
			return (int)ret;
		}
		str++;
	}

	state = VALID;
	return (int)ret;
}

int main()
{
	char *p = "";
	int ret = my_atoi(p);
	if(state == VALID)
		printf("%d\n", ret);//12345
	return 0;
}

//void RightLoopMove(char* str, int steps)
//{
//	int len = strlen(str);
//	int i = 0;
//	assert(str != NULL);
//	while(steps--)
//	{
//		char tmp = *(str+len-1);//保存最后一个字符
//		for(i=len-1; i>0; i--)
//		{
//			*(str+i) = *(str+i-1);
//		}
//		*str = tmp;
//	}
//}

// void reverse(char*left, char* right)
// {
// 	assert(left && right);
// 	while(left<right)
// 	{
// 		char tmp = *left;
// 		*left = *right;
// 		*right = tmp;
// 		left++;
// 		right--;
// 	}
// }
// 
// void RightLoopMove(char* str, int steps)
// {
// 	int len = strlen(str);
// 	assert(str != NULL);
// 	reverse(str, str+len-steps-1);
// 	reverse(str+len-steps, str+len-1);
// 	reverse(str, str+len-1);
// }
// 
// int main()
// {
// 	char arr[] = "abcdefghi";
// 	RightLoopMove(arr, 3);//ghiabcdef
// 	printf("%s\n", arr);
// 	return 0;
// }

//void bit_set(unsigned char* p_data, int pos, int flag)
//{
//	assert(p_data != NULL);
//	assert(pos>=1 && pos<=8);
//	if(flag == 1)
//	{
//		*p_data |= (1<<(pos-1));
//	}
//	else if(flag == 0)
//	{
//		*p_data &= ~(1<<(pos-1));
//	}
//}
//
//int main()
//{
//	unsigned char num = 15;
//	//1011
//	//0100
//	//
//	//
//	bit_set(&num, 3, 0);
//	printf("%d\n", num);//11
//	bit_set(&num, 3, 1);
//	printf("%d\n", num);//15
//
//	return 0;
//}
// void main()
// {
// 	char *str = (char *)malloc(57);
// 	strcpy(str,"bit");
// 	free(str);
// 	str = NULL;
// 
// 	if(str != NULL)
// 	{
// 		strcpy(str, "C++");
// 		printf(str);
// 	}
// }


// #define BUFFER_SIZE 256
// #define ID_LEN   32
// #include  <string.h>
// 
// void GetMemory(char **p)
// {
// 	*p = (char *)malloc(57);
// }
// void main()
// {
// 	char *str = NULL;
// 	GetMemory(&str);
// 	strcpy(str, "bit C++");
// 
// 	printf(str);
// 	free(str);
// 	str = NULL;
// }



// char* GetMemory(void)
// {
// 	char* p = "bit C++";
// 	return p;
// }
// void main()
// {
// 	char *str = NULL;
// 	str = GetMemory();
// 	printf(str);
// }

//
//void GetMemory(char **p)
//{
//	*p = (char*)malloc(57);
//}
//void main()
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "bit C++");
//	printf(str);
//	free(str);
//	str = NULL;
//}




//gui_push_clip();
//#ifdef AAA
//if (show_status == MMI_TRUE) 
//#endif
//#ifdef BBB
//gui_show_image(x , y , image_id);
//#endif
//
//gui_pop_clip();
//update_dt_display();
//


//
//struct STR_A
//{
//	char aucID[ID_LEN];
//	int iA;
//};
//struct STR_B
//{
//	char *paucID;
//	int iB;
//};
//void funcA(struct STR_A stA, struct STR_B *pstB)
//{
//	pstB->paucID = stA .aucID;
//}
//void main()
//{
//	struct STR_A stA = {0};
//	struct STR_B stB;
//
//	strcpy(stA .aucID,"12345");
//	funcA(stA, &stB);
//	printf("%s\n", stB.paucID);
//}

//
//int test()
//{
//	printf("hello\n");
//	return;
//}
//
//int main()
//{
//	printf("%d\n", test());
//	return 0;
//}
//
//void VarInit(unsigned char *pucArg)
//{
//	*pucArg = 1;
//	return;
//}
//
//void Test()
//{
//	unsigned long ulGlobal;//0xcccccc01
//	VarInit((unsigned char*)&ulGlobal);
//	printf("%lu",ulGlobal);
//	return;
//}


// void GetStr(char **p)
// {
// 	*p = "hello world";
// }
// 
// void main()
// {
// 	char *str = NULL;
// 	GetStr(&str);
// 	
// 	printf("\r\n str = %s",str);
// 	
// 	return;
// }

//
//char* GetStr(char *p)
//{
//	p = "hello world";
//	return p;
//}
//
//void main()
//{
//	char *str = NULL;
//	if(NULL != (str=GetStr(str)))
//	{
//		printf("\r\n str = %s",str);
//	}
//	return;
//}


// unsigned long FUNC_B(unsigned long ulCount)
// {
// 	unsigned long ulSum = 0;
// 	while(ulCount>=0)
// 	{
// 		ulSum += ulCount;
// 		ulCount--;
// 	}
// 	return ulSum;
// }
// 


//void GetMemory(char **ppszBuf)
//{
//	if(NULL == ppszBuf)
//	{
//		assert(0);
//		return;
//	}
//	ppszBuf = (char *)malloc(BUFFER_SIZE);
//	return;
//}
//void Test()
//{
//	char *pszBuf = NULL;
//	GetMemory(&pszBuf);
//	strcpy(pszBuf,"hello world\r\n");
//	printf("%s",pszBuf);
//	free(pszBuf);
//	return;
//}
//

