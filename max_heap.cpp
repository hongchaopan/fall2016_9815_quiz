#include <iostream>


const int HEAP_SIZE=50;
#define PARENT(i)  (i-1)>>1
#define LEFT(x) 2*x+1 // since we start with index 0
#define RIGHT(x) 2*x+2
 
class MaxHeap
{
    int arr[HEAP_SIZE];
    int count;
 
 
public:
    MaxHeap() 
    {
        count=0;
    }
 
    bool Add(int element);
 
    bool remove(int& element);
 
};
 
bool MaxHeap::Add(int element)
{
    if(count > HEAP_SIZE)
        return false;
 
    int i = count;
 
    arr[i] = element;
    // the below loop never runs if the input
    // array is already in maxheap format!!
    while(i>0 && arr[PARENT(i)] < arr[i]) {
        int tmp=arr[PARENT(i)];
        arr[PARENT(i)] = arr[i];
        arr[i] = tmp;
        i = PARENT(i);
    }
    count++;
    return true;
}
 
bool MaxHeap::remove(int& element)
{
    if(count < 0)
        return false;
 
    element = arr[0];
    arr[0] = arr[count-1];
    arr[count-1] = INT_MIN;
    count = count - 1;
    max_heapify(arr, 0, count);
    return true;
}
 

