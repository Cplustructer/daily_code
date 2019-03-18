#pragma once
typedef struct SeqList{
	int * arr;
	int size;
	int capacity;
}SeqList;

//初始化
void SeqListInit(SeqList *ps, int capacity);

//销毁
void SeqListDestroy(SeqList *ps);

//增/删/改/查
 //尾插
void SeqListPushBack(SeqList *ps, int v);

//头插
void SeqListPushFront(SeqList *ps, int v);

// 根据 pos 下标做插入
void SeqListInsert(SeqList *ps, int pos, int v);

// 尾删
void SeqListPopBack(SeqList *ps);

// 头删
void SeqListPopFront(SeqList *ps);

// 根据 pos 下标做删除
void SeqListErase(SeqList *ps, int pos);

// 查找
int SeqListFind(SeqList *ps, int v);

// 更新
int SeqListModify(SeqList *ps, int pos, int v);

// 删除第一个遇到的 v
void SeqListRemove(SeqList *ps, int v);

// 删除所有遇到的 v
void SeqListRemoveAll(SeqList *ps, int v);

//遍历顺序表
void SeqListprint(SeqList *ps);

