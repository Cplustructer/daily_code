#pragma once
typedef struct SeqList{
	int * arr;
	int size;
	int capacity;
}SeqList;

//��ʼ��
void SeqListInit(SeqList *ps, int capacity);

//����
void SeqListDestroy(SeqList *ps);

//��/ɾ/��/��
 //β��
void SeqListPushBack(SeqList *ps, int v);

//ͷ��
void SeqListPushFront(SeqList *ps, int v);

// ���� pos �±�������
void SeqListInsert(SeqList *ps, int pos, int v);

// βɾ
void SeqListPopBack(SeqList *ps);

// ͷɾ
void SeqListPopFront(SeqList *ps);

// ���� pos �±���ɾ��
void SeqListErase(SeqList *ps, int pos);

// ����
int SeqListFind(SeqList *ps, int v);

// ����
int SeqListModify(SeqList *ps, int pos, int v);

// ɾ����һ�������� v
void SeqListRemove(SeqList *ps, int v);

// ɾ������������ v
void SeqListRemoveAll(SeqList *ps, int v);

//����˳���
void SeqListprint(SeqList *ps);

