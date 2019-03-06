#pragma once
#include<iostream>
using namespace std;

template <typename T>
class MyVector
{

	//����<<
	friend ostream& operator<< <T>(ostream &out,const MyVector &obj);
public:
	//���캯��
	MyVector(int size = 0);

	//�������캯��
	MyVector(const MyVector &obj);

	//��������
	~MyVector();
	
public:
	//����[]
	T& operator[] (int index);

	//����=
	MyVector& operator= (const MyVector &obj);

	

	int getLen();
	
private:
	T *m_space;
	int m_len;

};

