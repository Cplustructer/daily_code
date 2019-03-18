#pragma once

#include<stdlib.h>
#include<assert.h>
#include<stdio.h>

typedef struct Node
{
	int value;
	struct Node* next;
}Node;

//static Node * BuyNode(int v) {
//	Node *node = (Node *)malloc(sizeof(Node));
//	node->value = v;
//	node->next = NULL;
//
//	return node;
//}

//链表初始化
void SListInit(Node **ppFirst)
{
	*ppFirst = NULL;
}

//销毁链表
void SListDestroy(Node *first)
{
	Node* ptr;
	for (Node* cur = first; cur != NULL; cur = ptr)
	{
		ptr = cur->next;
		free(cur);
	}
}

//头插
void SListPushFront(Node **ppFirst, int v)
{
		Node* node = (Node*)malloc(sizeof(Node));
		node->next = *ppFirst;
		*ppFirst = node;
		node->value = v;
}

//头删
void SListPopFront(Node **ppFirst)
{
	assert(*ppFirst != NULL);
	Node* ptr = (*ppFirst)->next;
	free(*ppFirst);
	*ppFirst = ptr;
}

//尾插
void SListPushBack(Node **ppFirst, int v)
{
	if (*ppFirst == NULL)
	{
		Node* node = (Node*)malloc(sizeof(Node));
		node->next = *ppFirst;
		*ppFirst = node;
		node->value = v;
		return; 
	}
	//找到尾结点
	Node* cur = *ppFirst;
	while (cur->next != NULL){
		cur = cur->next;
	}

	Node* node = (Node*)malloc(sizeof(Node));
	node->next = NULL;
	cur->next = node;
	node->value = v;
}

//尾删
void SListPopBack(Node **ppFirst)
{
	assert(*ppFirst != NULL);
	if ((*ppFirst)->next == NULL)
	{
		free(*ppFirst);
		*ppFirst = NULL;
		return;
	}
	Node* ptr = *ppFirst;
	while (ptr->next->next!= NULL)
	{
		ptr = ptr->next;
	}
	free(ptr->next);
	ptr->next = NULL;
}

//查找数据为v的结点
Node * SListFind(Node* first, int v)
{
	for (Node* cur = first; cur != NULL; cur = cur->next)
	{
		if (cur->value == v)
			return cur;
	}
}

//在pos后插入一个结点
void SListInsertAfter(Node *pos, int v)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->value = v;
	node->next = pos->next;
	pos->next = node;
}

//删pos的后一个结点
void SListEraseAfter(Node *pos)
{
	Node* ptr = pos->next;
	pos->next = pos->next->next;
	free(ptr);
}

void SLprint(Node* first)
{
	if (first == NULL)
	{
		return;
	}
	for (Node* cur = first; cur != NULL; cur = cur->next)
	{
		printf("%d ",cur->value);
	}
}

void test()
{
	Node* first;
	SListInit(&first);
	SListPushFront(&first, 1);
	// 1 -> NULL
	SListPushFront(&first, 2);
	// 2 -> 1 -> NULL
	SListPushFront(&first, 3);
	// 3 -> 2 -> 1 -> NULL
	SListPushFront(&first, 4);
	// 4 -> 3 -> 2 -> 1 -> NULL
	printf("四次头插结果为：");
	SLprint(first);
	printf("\n");
	SListPushBack(&first, 10);
	SListPushBack(&first, 20);
	SListPushBack(&first, 30);
	printf("三次尾插结果为:");//4->3->2->1->10->20->30
	SLprint(first);
	printf("\n");
	SListPopBack(&first);
	SListPopBack(&first);
	printf("两次尾删结果为：");//4->3->2->1->10
	SLprint(first);
	printf("\n");
	SListPopFront(&first);
	SListPopFront(&first);
	printf("两次头删结果为：");//2->1->10
	SLprint(first);
	printf("\n");
}