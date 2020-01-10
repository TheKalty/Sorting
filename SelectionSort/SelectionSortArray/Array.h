// Array.h
// Future me remember, when implementing with templates the linker will have issues with them when defined in *.cpp files since compiling them will NOT make non-unique function symbols ie. NAME<unique>::FUNCTION will not make that
#ifndef ARRAY_H
#define ARRAY_H

#include <cstddef> // for NULL

// A constant size template for an Array
template <typename T>
class Array{

private:
    T* array; // Pointer to the array object
    int SIZE; // Not nessesary but makes getting size to be const time

public:
	Array(); // No param Constructor
    Array(int elements); // Number of Elements Constructor

	~Array(); // Deconstructor

	// insertion and removal
    void set(int i, T v); // Sets element at i to v
    T get(int i); // get element at i
    T at(int i); // Same as get
    int size();
	int memorySize();
	void swap(int a, int b); // Swaps values at position a and b
};

template <typename T>
Array<T>::Array(){
    array = new T[10]; // Makes a size 10 array of T
	this->SIZE = 10; // Assigns the value to SIZE
};

template <typename T>
Array<T>::Array(int elements){
    // Check if param meets criteria of a positive int
    if(elements > 0){
        array = new T[elements]; // Give array a heap allocation array, homogenious array
		this->SIZE = elements; // Assigns the value to SIZE
    }
    else{
        array = NULL; // Give known value to array
        this->~Array(); // Cleanly terminate the object
    }
};

template <typename T>
Array<T>::~Array(){
    delete[] array;
};

template <typename T>
void Array<T>::set(int i, T v){
    // Check to see if in bounds of array
    if(i >=0 && i < this->SIZE){
        array[i] = v;
    }
    // Case of not in bounds DO NOTHING
    else{}
};

template <typename T>
T Array<T>::get(int i){
	// If out of bounds let intermitent ERROR
    return array[i];
};

template <typename T>
T Array<T>::at(int i){
	// If out of bounds let intermitent ERROR
    return array[i];
};

template <typename T>
int Array<T>::size(){
    return this->SIZE;
};

template <typename T>
int Array<T>::memorySize(){
	return sizeof(T) * this->SIZE;
};

template <typename T>
void Array<T>::swap(int a, int b){
	T temp = this->array[a];
	this->array[a] = this->array[b];
	this->array[b] = temp;
}
#endif
