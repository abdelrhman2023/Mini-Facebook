#include "ArryList.h"
#include<iostream>
#include<assert.h>

template <class T>
void ArryList<T>::ArrList() {
	count = 0;
	size = 20;
	arr = new T[size];


}

template <class T>
void ArryList<T>::Append(T post) {
	if (count == size)
		Expand();
	arr[count] = post;
	count++;
}

template <class T>
void ArryList<T>::Display() {

	for (i = 0; i <= count; i++)
		cout << arr[i] << endl;
}
template <class T>
void ArryList<T>::Expand() {

	size *= 4;
	T* temp = new T[size];
	for (int i = 0; i < count; i++)
		temp[i] = arr[i];
	delete arr[i];
	arr = temp;


}





template <class T>
T ArryList<T>::At(int pos) {

	assert(pos > 0 && pos< count)
		return arr[pos];


}

template <class T>
void ArryList<T>::InsertAt(int pos ,T post){
	assert(pos > 0 && pos < count)
		if (count == size)
			Expand();
	for (int i = count; i > pos; i--)
		arr[i] = arr[i - 1];
	arr[pos] = post;
	count++;
}


template <class T>
void ArryList<T>::DeleteAt(int pos) { //delete value 
	assert(pos > 0 && pos < count)
	for (i = pos; i < count - 1; i++) {
		arr[i]=arr[i+1]
	}


}

