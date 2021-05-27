#pragma once
#include<string>
template<class T>
class ArryList

{
	T* arr;
	int size, count;
	void ArrList();
	void Append(T);
	void Display();
	void Expand();
	T At(int); //return value
	void InsertAt(int, T);
	void DeleteAt(int);
	
};



