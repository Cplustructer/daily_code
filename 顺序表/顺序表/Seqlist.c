#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "SeqList.h"

//打印顺序表
void SeqListprint(SeqList *ps)
{
	if (ps->size == 0)
	{
		return;
	}
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ",ps->arr[i]);
	}
}

//顺序表扩容
static void CheckCapacity(SeqList *ps)
{    //实际长度小于最大容量
	if (ps->size < ps->capacity)
	{
		return;
	}
	//申请内存空间
	int NewCapacity = (ps->capacity) * 2;
	int* Newarray = (int*)malloc(sizeof(int)*NewCapacity);
	assert(Newarray != NULL);
	//把所有数字搬到新顺序表中
	for (int i = 0; i < ps->size; i++)
	{
		Newarray[i] = ps->arr[i];
	}
	//释放原来空间
	free(ps->arr);
	ps->arr = Newarray;
	ps->capacity = NewCapacity;
}
 //初始化
void SeqListInit(SeqList *ps, int capacity)
{
	assert(ps != NULL);
	if (ps != NULL)
	{
		ps->arr = (int*)malloc(sizeof(int)*capacity);
		assert(ps->arr != NULL);
		ps->size = 0;
		ps->capacity = capacity;
	}
}

//销毁循序表
void SeqListDestroy(SeqList *ps)
{
	assert(ps != NULL);
	free(ps->arr);
}

//头插
void SeqListPushFront(SeqList *ps, int v)
{
	CheckCapacity(ps);
	for (int i = ps->size - 1; i >= 0; i--)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[0] = v;
	ps->size++;
}

//尾插
void SeqListPushBack(SeqList *ps, int v)
{
	CheckCapacity(ps);
	ps->arr[ps->size] = v;
	ps->size++;
}

//根据pos下标插入
void SeqListInsert(SeqList *ps, int pos, int v)
{
	CheckCapacity(ps);
	assert(pos >= 0 && pos <= ps->size); //pos=0就是头插，pos=size就是尾插
	for (int i = ps->size - 1; i >= pos; i--)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->size++;
	ps->arr[pos] = v;
}

//尾删
void SeqListPopBack(SeqList* ps) 
{
	assert(ps->size > 0);
	ps->size--;
}

//头删
void SeqListPopFront(SeqList *ps)
{
	assert(ps->size > 0);
	for (int i = 0; i <= ps->size - 2; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//在pos处删除元素
void SeqListErase(SeqList *ps, int pos)
{
	assert(pos >= 0 && pos< ps->size);
	for (int i = pos; i <= ps->size - 2; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//static修饰函数会影响函数的链接属性，从外部链接属性->内部链接属性
//容量不够？扩容
//前置检查不需要扩容的条件 size<capacity
//重新申请一个数组空间，容量是原来的两倍

//查找指定值的元素
int SeqListFind(SeqList *ps, int v)
{
	assert(ps->size>0);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == v)
		{
			return i;
		}
	}
	return -1;
}

//修改指定位置的元素
int SeqListModify(SeqList *ps, int pos, int v)
{
	assert(pos >= 0 && pos < ps->size);
	ps->arr[pos] = v;
	return 1;
}

//删除第一个值为v的元素 
void SeqListRemove(SeqList *ps, int v)
{
	int dis = SeqListFind(ps,v);
	if (dis == -1)
	{
		return;
	}
	SeqListErase(ps, dis);
}

//删除所有值为v的元素
//很巧妙的方法，i走到不为指定元素的位置，j用于存放不为指定的元素 
void SeqListRemoveAll(SeqList *ps, int v)
{
	int i, j;
	for (i = 0, j = 0; i < ps->size; i++)
	{
		if (ps->arr[i] != v)
		{
			ps->arr[j] = ps->arr[i];
			j++;
		}
	}
	ps->size = j;
}