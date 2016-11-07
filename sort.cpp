#include <iostream>
#include <vector>
#include "quick_sort.cpp"


int main(){

	// Quick sort
        int a_quick[]={34,46,25,5,56,16,68,36};
        int size_a_quick=8;     // Size of initial array
        std::cout<<"Initial array: ";
        for(auto elem: a_quick){
                std::cout<<elem<<", ";
        }std::cout<<"\n";
        std::cout<<"***************\n";

        quick_sort(a_quick, 0, size_a_quick-1);
        std::cout<<"After quick sorting: ";
        for(auto elem: a_quick){
                std::cout<<elem<<", ";
        }std::cout<<"\n";
        std::cout<<"***************\n";
	
	return 0;
}

