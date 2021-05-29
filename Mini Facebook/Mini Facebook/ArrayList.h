#pragma once
template<class T>
class ArrayList
{
private:
	int elementcount, capacity;
	T* arr;
public:
	ArrayList();
	void append(T val);
	int lenght();
	void insertAt(int ind, T val);
	void deleteAt(int ind);
	void pop_back();
	T& At(int ind);
	T& operator[](const int ind);
	void expand();
	bool empty();
	void clear();
	~ArrayList();
};

