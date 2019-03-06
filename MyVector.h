#pragma once
#include<iostream>
using namespace std;

template <typename T>
class MyVector
{

	//重载<<
	friend ostream& operator<< <T>(ostream &out,const MyVector &obj);
public:
	//构造函数
	MyVector(int size = 0);

	//拷贝构造函数
	MyVector(const MyVector &obj);

	//析构函数
	~MyVector();
	
public:
	//重载[]
	T& operator[] (int index);

	//重载=
	MyVector& operator= (const MyVector &obj);

	

	int getLen();
	
private:
	T *m_space;
	int m_len;

};

