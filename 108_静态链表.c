#define _CRT_SECURE_NO_WARNINGS
#pragma execution_character_set("utf-8")

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
	Node n1 = { "恭" };
	Node n2 = { "喜" };
	Node n3 = { "发" };
	Node n4 = { "财" };

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = NULL;

	Node* tmp;
	tmp = &n1;
	while (tmp != NULL)
	{
		printf("%s", tmp->date);
		tmp = tmp->next;
	}

	return 0;
}