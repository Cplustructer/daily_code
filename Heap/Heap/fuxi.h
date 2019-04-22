#include<stdio.h>
#include<stdlib.h>

void swap(int array[], int i, int j){
	int tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

void print(int array[], int size){
	for (int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

//�������η�
int partition_1(int array[], int left, int right){
	int begin = left;
	int end = right;
	int pivot = array[right];
	while (begin < end){
		while (begin < end&&array[begin] <= pivot){
			begin++;
		}
		while (begin < end&&array[end] >= pivot){
			end--;
		}
		swap(array, begin, end);
	}
	swap(array, begin, right);
	return begin;
}

//˫�±귨
int partition_2(int array[], int left, int right){ 
	int d = left;						//d��ͣ�ڵ�һ������array[right]������
	for (int i = left; i < right; i++){   //����ұ�array[right]С�ľͺ�d����λ�õ���������
		if (array[i] < array[right]){     //ֱ��i����Ϊֹ
			swap(array, i, d);
			d++;
		}
	}
	swap(array,d,right);                 //����d��right��ֵ
	return d;
}

//�ڿ���ӷ�
int partition_3(int array[], int left, int right){
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

void Qsort(int array[], int left, int right){
	if (left == right){
		return;
	}
	if (left > right){
		return;
	}
	int d = partition_3(array, left, right);
	Qsort(array, left, d - 1);
	Qsort(array, d + 1, right);
}

void quicksort(int array[], int size){
	Qsort(array, 0, size - 1);
}

void merge(int array[], int low, int mid, int high, int extra[]){  //�ϲ������������䣬�����������ĺϲ�
	int i = low;
	int j = mid;
	int k = low;
	while (i < mid&&j < high){
		if (array[i] <= array[j]){   //��֤�ȶ���
			extra[k++] = array[i++];
		}
		else{
			extra[k++] = array[j++];
		}
	}
	while (i < mid){          //ǰ������仹ʣ����
		extra[k++] = array[i++];
	}
	while (j < high){		 //��������仹ʣ����
		extra[k++] = array[j++];
	}
	for (int x = low; x < high; x++){   //�Ѻϲ�����������������¸�ֵ��ԭ����
		array[x] = extra[x];
	}
}

void mergrinner(int array[],int low,int high,int extra[] ){   //����ҿ�
	if (low >= high){
		return;
	}
	if (low +1 == high){
		return;
	}
	int mid = low + (high - low) / 2;
	mergrinner(array, low, mid, extra);
	mergrinner(array, mid, high, extra);
	merge(array, low, mid, high, extra);
}

void mergesort(int array[],int size){
	int *extra = (int*)malloc(sizeof(int)*size);
	mergrinner(array, 0, size, extra);
	free(extra);
}

int bubblesort(int array[],int size){
	for (int i = 0; i < size; i++){
		int issorted = 1;
		for (int j = 0; j < size - i - 1; j++){
			if (array[j + 1] < array[j]){
				swap(array, j, j + 1);
				issorted = 0;
			}
		}
		if (issorted == 1){
			break;
		}
	}
}

void test()
{
	int array[] = { 2, 4, 3, 1, 5, 8, 6 };
	int size = sizeof(array) / sizeof(int);
	//InsertSort(array, size);
	//print(array,size);
	//SelectSort(array, size);
	//print(array,size);
	//InsertSort2(array, size);
	//print(array,size);
	//HeapSort(array, size);
	//print(array, size);
	//quicksort(array, size);
	//print(array, size);
	//mergesort(array, size);
	//print(array, size);
	bubblesort(array,size);
	print(array, size);
}
