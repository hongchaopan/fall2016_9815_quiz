#include <iostream>
#include "max_heap.cpp"

int main(){
	
	MaxHeap obj;
    	int A[] = {7,2,1,12,15,8,4,0,6,13,9,5};
 
    	for(int i=0; i<12;i++) {
        	obj.Add(A[i]);
    	}
    	int val;
    	obj.remove(val);
   
 
	return 0;

}
