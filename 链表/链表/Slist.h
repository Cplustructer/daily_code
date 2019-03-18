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

//�����ʼ��
void SListInit(Node **ppFirst)
{
	*ppFirst = NULL;
}

//��������
void SListDestroy(Node *first)
{
	Node* ptr;
	for (Node* cur = first; cur != NULL; cur = ptr)
	{
		ptr = cur->next;
		free(cur);
	}
}

//ͷ��
void SListPushFront(Node **ppFirst, int v)
{
		Node* node = (Node*)malloc(sizeof(Node));
		node->next = *ppFirst;
		*ppFirst = node;
		node->value = v;
}

//ͷɾ
void SListPopFront(Node **ppFirst)
{
	assert(*ppFirst != NULL);
	Node* ptr = (*ppFirst)->next;
	free(*ppFirst);
	*ppFirst = ptr;
}

//β��
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
	//�ҵ�β���
	Node* cur = *ppFirst;
	while (cur->next != NULL){
		cur = cur->next;
	}

	Node* node = (Node*)malloc(sizeof(Node));
	node->next = NULL;
	cur->next = node;
	node->value = v;
}

//βɾ
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

//��������Ϊv�Ľ��
Node * SListFind(Node* first, int v)
{
	for (Node* cur = first; cur != NULL; cur = cur->next)
	{
		if (cur->value == v)
			return cur;
	}
}

//��pos�����һ�����
void SListInsertAfter(Node *pos, int v)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->value = v;
	node->next = pos->next;
	pos->next = node;
}

//ɾpos�ĺ�һ�����
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
	printf("�Ĵ�ͷ����Ϊ��");
	SLprint(first);
	printf("\n");
	SListPushBack(&first, 10);
	SListPushBack(&first, 20);
	SListPushBack(&first, 30);
	printf("����β����Ϊ:");//4->3->2->1->10->20->30
	SLprint(first);
	printf("\n");
	SListPopBack(&first);
	SListPopBack(&first);
	printf("����βɾ���Ϊ��");//4->3->2->1->10
	SLprint(first);
	printf("\n");
	SListPopFront(&first);
	SListPopFront(&first);
	printf("����ͷɾ���Ϊ��");//2->1->10
	SLprint(first);
	printf("\n");
}