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
	printf("三次头插结果为：");
	SeqListprint(&seqlist);
	printf("\n");
	SeqListPushBack(&seqlist, 2019);
	SeqListPushBack(&seqlist, 666);
	SeqListPushBack(&seqlist, 6);//6,6,3,2,1,2019,666,6
	printf("三次尾插结果为：");
	SeqListprint(&seqlist);
	printf("\n");
	printf("一次定点插入结果为：");
	SeqListInsert(&seqlist,3,77);//6,6,3,77,2,1,2019,666,6
	SeqListprint(&seqlist);
	printf("\n");
	printf("一次查询结果为：");
	printf("%d\n",SeqListFind(&seqlist,55));//-1
	printf("一次修改结果为：");
	SeqListModify(&seqlist,3,88);//6,6,3,88,2,1,2019,666,6
	SeqListprint(&seqlist);
	printf("\n");
	printf("删除一次6的结果：");//6,3,88,2,1,2019,666,6
	SeqListRemove(&seqlist,6);
	SeqListprint(&seqlist);
	printf("\n");
	printf("删除所有6的结果：");
	SeqListRemoveAll(&seqlist,6);//3,88,2,1,2019,666
	SeqListprint(&seqlist);
	printf("\n");
	//SeqListDestroy(&seqlist);
}
