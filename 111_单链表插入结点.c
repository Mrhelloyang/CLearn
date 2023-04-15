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
void InsertNode(Node* head, int x, int y)
{
	Node* pre;
	Node* cur;
	Node* pnew;
	pnew = (Node*)malloc(sizeof(Node) * 1);
	pnew->id = y;
	pre = head;
	cur = head->next;
	while (cur != NULL)
	{
		if (cur->id == x)
		{
			break;
		}
		pre = cur;
		cur = cur->next;
	}
	pre->next = pnew;
	pnew->next = cur;
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
int main()
{
	Node* head = CreateListTail();
	InsertNode(head, 5, 8);
	printf("%p\n", head);
	PrintfNode(head);
	return 0;
}