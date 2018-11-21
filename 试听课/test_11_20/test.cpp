#include <iostream>
using namespace std;
typedef struct ListNode
{
	int val;
	struct ListNode * next;
}ListNode,*pListNode;
void init(pListNode plist)
{
	plist->next=NULL;
}
ListNode * GetNode(int val)
{
	ListNode * pGet=(ListNode *)malloc(sizeof(ListNode));
	pGet->next=NULL;
	pGet->val=val;
	return pGet;
}
void HeadInsert(pListNode plist,int val)
{
	ListNode* pGet=GetNode(val);
	pGet->next=plist->next;
	plist->next=pGet;
}
void TailInsert(pListNode plist,int val)
{
	ListNode * pGet=GetNode(val);
	ListNode * pCur=plist;
	while(pCur->next!=NULL)
	{
		pCur=pCur->next;
	}
	pGet->next=pCur->next;
	pCur->next=pGet;
}
ListNode * SearchPre(pListNode plist,ListNode * p)
{
	ListNode * pCur=plist;
	for(;pCur!=NULL;pCur=pCur->next)
	{
		if(pCur->next==p)
		{
			return pCur;
		}
	}
	return NULL;
}
void rotateRight(pListNode plist,int k)
{
	ListNode * pCur=plist;
	ListNode * pEnd=plist;
	int count=0;
	while(pCur->next!=NULL)
	{
		count++;
		pEnd=pEnd->next;
		pCur=pCur->next;
	}
	if(k>count)
	{
		k-=count;
	}
	pCur=plist;
	for(int i=0;i<count-k;i++)
	{
		pCur=pCur->next;
	}
	pEnd->next=plist->next;
	pCur=plist->next;
	for(int i=0;i<count-k-1;i++)
	{
		pCur=pCur->next;
	}
	plist=pCur->next;
	pCur->next=NULL;
	for(pCur=plist;pCur!=NULL;pCur=pCur->next)
	{
		cout<<pCur->val<<" ";
	}
	cout<<"\n";
}
void show(pListNode plist)
{
	ListNode * pCur=plist->next;
	for(;pCur!=NULL;pCur=pCur->next)
	{
		cout<<pCur->val<<" ";
	}
	cout<<"\n";
}
int main()
{
	ListNode s;
	init(&s);
	HeadInsert(&s, 1);
	HeadInsert(&s, 2);
	HeadInsert(&s, 3);
	HeadInsert(&s, 4);
	HeadInsert(&s, 5);
	HeadInsert(&s, 6);
	show(&s);
	rotateRight(&s, 8);
}

struct ListNode* rotaeRight(struct ListNode* head, int k){
	if (head == NULL){
		return NULL;
	}
	struct ListNode* node = head;
	int count = 0;
	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	k %= count;
	count -= k;
	node = head;
	while (k--)
	{
		node = node->next;
	}
	struct ListNode* res = node;
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = head;
	while (head->next != res)
	{
		head = head->next;
	}
	head->next = NULL;
	return res;
}
