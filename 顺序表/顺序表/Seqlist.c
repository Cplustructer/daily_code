#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "SeqList.h"

//��ӡ˳���
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

//˳�������
static void CheckCapacity(SeqList *ps)
{    //ʵ�ʳ���С���������
	if (ps->size < ps->capacity)
	{
		return;
	}
	//�����ڴ�ռ�
	int NewCapacity = (ps->capacity) * 2;
	int* Newarray = (int*)malloc(sizeof(int)*NewCapacity);
	assert(Newarray != NULL);
	//���������ְᵽ��˳�����
	for (int i = 0; i < ps->size; i++)
	{
		Newarray[i] = ps->arr[i];
	}
	//�ͷ�ԭ���ռ�
	free(ps->arr);
	ps->arr = Newarray;
	ps->capacity = NewCapacity;
}
 //��ʼ��
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

//����ѭ���
void SeqListDestroy(SeqList *ps)
{
	assert(ps != NULL);
	free(ps->arr);
}

//ͷ��
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

//β��
void SeqListPushBack(SeqList *ps, int v)
{
	CheckCapacity(ps);
	ps->arr[ps->size] = v;
	ps->size++;
}

//����pos�±����
void SeqListInsert(SeqList *ps, int pos, int v)
{
	CheckCapacity(ps);
	assert(pos >= 0 && pos <= ps->size); //pos=0����ͷ�壬pos=size����β��
	for (int i = ps->size - 1; i >= pos; i--)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->size++;
	ps->arr[pos] = v;
}

//βɾ
void SeqListPopBack(SeqList* ps) 
{
	assert(ps->size > 0);
	ps->size--;
}

//ͷɾ
void SeqListPopFront(SeqList *ps)
{
	assert(ps->size > 0);
	for (int i = 0; i <= ps->size - 2; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//��pos��ɾ��Ԫ��
void SeqListErase(SeqList *ps, int pos)
{
	assert(pos >= 0 && pos< ps->size);
	for (int i = pos; i <= ps->size - 2; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//static���κ�����Ӱ�캯�����������ԣ����ⲿ��������->�ڲ���������
//��������������
//ǰ�ü�鲻��Ҫ���ݵ����� size<capacity
//��������һ������ռ䣬������ԭ��������

//����ָ��ֵ��Ԫ��
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

//�޸�ָ��λ�õ�Ԫ��
int SeqListModify(SeqList *ps, int pos, int v)
{
	assert(pos >= 0 && pos < ps->size);
	ps->arr[pos] = v;
	return 1;
}

//ɾ����һ��ֵΪv��Ԫ�� 
void SeqListRemove(SeqList *ps, int v)
{
	int dis = SeqListFind(ps,v);
	if (dis == -1)
	{
		return;
	}
	SeqListErase(ps, dis);
}

//ɾ������ֵΪv��Ԫ��
//������ķ�����i�ߵ���Ϊָ��Ԫ�ص�λ�ã�j���ڴ�Ų�Ϊָ����Ԫ�� 
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