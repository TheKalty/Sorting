#ifndef SELECTION_SORT_ARRAY_H
#define SELECTION_SORT_ARRAY_H

#include "Array.h" // DS to sort

template <typename T>
void SelectionSortArray(T &array){

	int size = array.size();
	for(int i = 0; i < size-1; i++){
		int minIndex = i; // First Not sorted element in array, starts at 0

		// Find next smallest element from i to size-1
		for(int j = i+1; j < size; j++){
			if(array.at(j) < array.at(i)){
				minIndex = j;
			}
		}

		// Swap i and the minimum value
		array.swap(i, minIndex);
	}
};

#endif

