//void Heapify(int array[], int size, int index)
//{
//	while (1){
//		int leftindex = index * 2 + 1;
//		if (leftindex >= size){  //�ж������Ƿ���ڣ�û����һ��û�Һ���
//			return;
//		}
//		int rightindex = index * 2 + 2;
//		int minindex = leftindex;
//		if (rightindex < size&&array[rightindex] < array[minindex]){//����Һ��Ӵ���С���Һ��ӵ�ֵ
//			minindex = rightindex;
//		}
//		if (array[index] < array[minindex]){
//			break;
//		}
//		int tmp = array[minindex];
//		array[minindex] = array[index];
//		array[index] = tmp;
//
//		index = minindex;  //�Ѵ�ʱ������ĸ����±긳��index��Ȼ��whileѭ�����²���
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

void Heapify(int array[], int size, int index){   //���µ���
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


void	 CreateHeap(int array[],int size){      //�����,�����һ���ѵĻ���ô������һ�������Ƕ�
	for (int i = size/2 - 1; i >= 0; i--){   //������ϵ���
		Heapify(array,size,i);               //��Ϊ���µ��������������������һ����Ҷ�ӽ����±����Խ��е������ϵ���
	}
}

void HeapSort(int array[], int size){ //���򽨴��
	CreateHeap(array, size);         //��ѽ���
	for (int i = 0; i < size; i++){
		Swap(array,0,size-1-i);      //���Ѷ������Ԫ�أ��������������һ��Ԫ�ؽ���
		Heapify(array, size-1-i,0);  //Ȼ��Ѷ�һ�����Ҫ���µ����������������г���-1
	}
}



void InsertSort(int array[], int size){ //��������ǰ������������
	for (int i = 0; i < size; i++){
		int j;
		for (j = i - 1; j >= 0 && array[j] < array[i]; j--){}
		if (j + 1 != i){
			int v = array[i];             //�ȼ�¼��i����ֵ�������ƶ���ᱻ����
			for (int k = i ; k>j+1; k--){
				array[k] = array[k - 1];
			}
			array[j+1] = v;
		}
	}
}

void InsertSort2(int array[], int size){ //����̬�������򣬱߱ȱ��ƶ�
	for (int i = 0; i < size; i++){
		int v = array[i];
		int j;
		for (j = i - 1; j>=0&&array[j]>v; j--){
			array[j+1] = array[j];
		}
		array[j+1] = v;
	}
}

void SelectSort(int array[], int size){    //��������������
	for (int i = 0; i < size; i++){
		int max = 0;                       //ÿ�μٶ���һ�������
		//����[0,size-1-i]
		//����[size-i,size-1]
		for (int j = 0; j <= size - 1 - i; j++){ //�ٴ�����������������ĺ�Ԥ��������ȽϿ��Ƿ񽻻�
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