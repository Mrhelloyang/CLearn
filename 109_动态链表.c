#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct _Node
{
	//数据域
	int date[50];

	//指针域
	struct _Node* next;

}Node;

int main()
{
	Node* n1 = (Node*)malloc(sizeof(Node));
	Node* n2 = (Node*)malloc(sizeof(Node));
	Node* n3 = (Node*)malloc(sizeof(Node));
	Node* n4 = (Node*)malloc(sizeof(Node));
	strcpy(n1, "恭");
	strcpy(n2, "喜");
	strcpy(n3, "发");
	strcpy(n4, "财");

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	Node* tmp;
	tmp = n1;
	while (tmp != NULL)
	{
		printf("%s", tmp->date);
		tmp = tmp->next;
	}

	tmp = n1;
	Node* p;
	p = n1;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(p);
		p = tmp;
	}

	return 0;
}