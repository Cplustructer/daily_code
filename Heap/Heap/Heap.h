//void Heapify(int array[], int size, int index)
//{
//	while (1){
//		int leftindex = index * 2 + 1;
//		if (leftindex >= size){  //判断左孩子是否存在，没左孩子一定没右孩子
//			return;
//		}
//		int rightindex = index * 2 + 2;
//		int minindex = leftindex;
//		if (rightindex < size&&array[rightindex] < array[minindex]){//如果右孩子存在小于右孩子的值
//			minindex = rightindex;
//		}
//		if (array[index] < array[minindex]){
//			break;
//		}
//		int tmp = array[minindex];
//		array[minindex] = array[index];
//		array[index] = tmp;
//
//		index = minindex;  //把此时交换完的根的下标赋给index，然后while循环向下操作
//	}
//}
//
//void CreateHeap(int array[], int size){
//	for (int i = size / 2 - 1; i >= 0; i--){
//		Heapify(array, size, i);
//	}
//}
//
//void AdjustUp(int array[], int size, int index){
//	if (index == 0){
//		return;
//	}
//	array[index] >= array[parent];
//	while (index > 0){
//		int parentindex = (index - 1) / 2;
//		if (array[index] >= array[parent]){
//			break;
//		}
//
//	}
//}
//
//void HeapPush(Heap* heap, int v){
//	heap->array[heap->size] = v;
//	AdjustUp(heap->array, heap->size + 1, heap->size);
//	heap->size++;
//}
//void HeapPop(Heap* heap, int v){
//	
//}
//
#include<stdio.h>

void print(int array[], int size){
	for (int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

void Swap(int array[], int i, int j){
	int tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

void Heapify(int array[], int size, int index){   //向下调整
	int leftindex = index * 2 + 1;
	while ((2 * index + 1) < size){
		int rightindex = index * 2 + 2;
		int max = leftindex;
		if (rightindex<size&&array[rightindex]>array[max]){
			max = rightindex;
		}
		if (array[max] <= array[index]){
			return;
		}
		int tmp = array[max];
		array[max] = array[index];
		array[index] = tmp;
		index = max;
	}
}


void	 CreateHeap(int array[],int size){      //建大堆,如果是一个堆的话那么它下面一定满足是堆
	for (int i = size/2 - 1; i >= 0; i--){   //因此向上调整
		Heapify(array,size,i);               //因为向下调整函数参数传的是最后一个非叶子结点的下标所以进行的是向上调整
	}
}

void HeapSort(int array[], int size){ //升序建大堆
	CreateHeap(array, size);         //大堆建完
	for (int i = 0; i < size; i++){
		Swap(array,0,size-1-i);      //将堆顶（最大元素）和无序序列最后一个元素交换
		Heapify(array, size-1-i,0);  //然后堆顶一变就需要向下调整，并且无序序列长度-1
	}
}



void InsertSort(int array[], int size){ //降序排序，前面是有序序列
	for (int i = 0; i < size; i++){
		int j;
		for (j = i - 1; j >= 0 && array[j] < array[i]; j--){}
		if (j + 1 != i){
			int v = array[i];             //先记录下i处的值，否则移动后会被覆盖
			for (int k = i ; k>j+1; k--){
				array[k] = array[k - 1];
			}
			array[j+1] = v;
		}
	}
}

void InsertSort2(int array[], int size){ //升序动态插入排序，边比边移动
	for (int i = 0; i < size; i++){
		int v = array[i];
		int j;
		for (j = i - 1; j>=0&&array[j]>v; j--){
			array[j+1] = array[j];
		}
		array[j+1] = v;
	}
}

void SelectSort(int array[], int size){    //后面是有序序列
	for (int i = 0; i < size; i++){
		int max = 0;                       //每次假定第一个数最大
		//无序[0,size-1-i]
		//有序[size-i,size-1]
		for (int j = 0; j <= size - 1 - i; j++){ //再从无序的序列中找最大的和预定义的最大比较看是否交换
			if (array[j] >= array[max]){
				max = j;
			}
		}
		Swap(array,max,size-i-1);
	}
}




int partition(int array[],int left,int right)
{
	int begin = left;
	int end = right;
	int pivot = array[right];
	while (begin < end){
		while (begin < end&&array[begin] <= pivot){
			begin++;
		}
		array[end] = array[begin];
		while (begin < end&&array[end] >= pivot){
			end--;
		}
		array[begin] = array[end];
	}
	array[begin] = pivot;
	return begin;
}


void test()
{
	int array[] = {2,4,3,1,5,8,6};
	int size = sizeof(array) / sizeof(int);
	InsertSort(array, size);
	print(array,size);
	//SelectSort(array, size);
	//print(array,size);
	//InsertSort2(array, size);
	//print(array,size);
	//HeapSort(array, size);
	//print(array,size);
}