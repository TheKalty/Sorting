#include <iostream>
#include "Array.h"
#include "SelectionSortArray.h"

void printAll(Array<int> &x);

int main(){

	// Define known array
	Array<int> array(1000);
	for(int i = 0; i < 1000; i++){
		array.set(i, 1000-i); // defined in reversed order worst case
	}

	// Show Array before sorting
	// printAll(array);

	// Sort Array
	

	// Show Array after sorting
	printAll(array);

	return 0;
}

void printAll(Array<int> &x){
	int size = x.size();
	for(int i = 0; i < size; i++){
		std::cout << i << ": " << x.at(i) << std::endl;
	}
};
