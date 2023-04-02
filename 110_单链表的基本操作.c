#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct _Node
{
	int id;
	struct _Node* next;
}Node;
Node* CreateListTail()
{
	Node* head;
	Node* ptail;
	Node* pnew;
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	ptail = head;
	while (1)
	{

		int tmp;
		scanf("%d", &tmp);
		if (tmp < 0)
		{
			break;
		}
		pnew = (Node*)malloc(sizeof(Node));
		ptail->next = pnew;
		ptail = pnew;
		ptail->id = tmp;
		ptail->next = NULL;

	}
	return head;//开始这里没写返回值；
}
Node* CreateListHead()
{
	Node* head;
	Node* pnew;
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	int i = 0;
	while (1)
	{

		int tmp;
		scanf("%d", &tmp);
		if (tmp < 0)
		{
			break;
		}

		pnew = (Node*)malloc(sizeof(Node));
		i++;
		//if(i=1)；=是赋值；判断要用==；不要再错了；
		if (i == 1)

		{
			pnew->next = NULL;
		}
		else
		{
			pnew->next = head->next;
		}
		pnew->id = tmp;
		head->next = pnew;
	}
	return head;
}
void PrintfNode(Node* head)
{
	Node* tmp;
	tmp = head->next;
	while (tmp != NULL)
	{
		printf("->%d", tmp->id);
		tmp = tmp->next;
	}
}
int main01()
{
	Node* head = CreateListTail();
	printf("%p\n", head);
	PrintfNode(head);
	return 0;
}
int main()
{
	Node* head = CreateListHead();
	printf("%p\n", head);
	PrintfNode(head);
	return 0;
}