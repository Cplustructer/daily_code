#include "SeqList.h"
#include<stdio.h>

int main() {
#if 0
	SeqList *p = SeqListInit();
#endif

	SeqList seqlist;
	SeqListInit(&seqlist, 100);
	SeqListPushFront(&seqlist, 1);
	SeqListPushFront(&seqlist, 2);
	SeqListPushFront(&seqlist, 3);
	SeqListPushFront(&seqlist, 6);
	SeqListPushFront(&seqlist, 6);//6,6,3,2,1
	printf("����ͷ����Ϊ��");
	SeqListprint(&seqlist);
	printf("\n");
	SeqListPushBack(&seqlist, 2019);
	SeqListPushBack(&seqlist, 666);
	SeqListPushBack(&seqlist, 6);//6,6,3,2,1,2019,666,6
	printf("����β����Ϊ��");
	SeqListprint(&seqlist);
	printf("\n");
	printf("һ�ζ��������Ϊ��");
	SeqListInsert(&seqlist,3,77);//6,6,3,77,2,1,2019,666,6
	SeqListprint(&seqlist);
	printf("\n");
	printf("һ�β�ѯ���Ϊ��");
	printf("%d\n",SeqListFind(&seqlist,55));//-1
	printf("һ���޸Ľ��Ϊ��");
	SeqListModify(&seqlist,3,88);//6,6,3,88,2,1,2019,666,6
	SeqListprint(&seqlist);
	printf("\n");
	printf("ɾ��һ��6�Ľ����");//6,3,88,2,1,2019,666,6
	SeqListRemove(&seqlist,6);
	SeqListprint(&seqlist);
	printf("\n");
	printf("ɾ������6�Ľ����");
	SeqListRemoveAll(&seqlist,6);//3,88,2,1,2019,666
	SeqListprint(&seqlist);
	printf("\n");
	//SeqListDestroy(&seqlist);
}
