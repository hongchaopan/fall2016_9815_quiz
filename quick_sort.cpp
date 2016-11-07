#include <iostream>
#include <array>

template <typename T>
void quick_sort(T *arr, int left, int right){
	int i=left, j=right;
	T temp;
	T pivot=arr[(left+right)/2];

	// Partition
	while(i<=j){
		while(arr[i]<pivot){i++;}
		while(arr[j]>pivot){j--;}
		if(i<=j){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
	}
	
	// Recursion
	if(left<j){
		quick_sort(arr,left,j);
	}
	if(i<right){
		quick_sort(arr,i, right);
	}

	
}
