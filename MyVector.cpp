#include "MyVector.h"
#include<iostream>
using namespace std;

//混帐修改

//构造函数
template<typename T>
MyVector<T>::MyVector(int size)
{
	m_space = new T[size];
	m_len = size;
}

//析构函数
template<typename T>
MyVector<T>::~MyVector()
{
	if (m_space != NULL)
	{
		delete[] m_space;
		m_space = NULL;
		m_len = 0;
	}
}


//拷贝构造函数
template<typename T>
MyVector<T>::MyVector(const MyVector &obj)
{
	//根据myV1的大小分配内存
	m_len = obj.m_len;
	m_space = new T[m_len];
	//cp数据
	for (int i = 0; i < m_len; i++)
	{
		m_space[i] = obj.m_space[i];
	}
}

//重载[]
template<typename T>
T& MyVector<T>::operator[] (int index)
{
	return m_space[index];
}

//重载= a3 = a2 = a1
template<typename T>
MyVector<T>& MyVector<T>::operator= (const MyVector<T> &obj)
{
	//先把a3的旧的内存释放掉
	if (m_space != NULL)
	{
		delete[] m_space;
		m_space = NULL;
		m_len = 0;
	}

	//根据a2分配内存
	m_len = obj.m_len;
	m_space = new T[m_len];


	return *this;
}

//重载<<
template<typename T>
ostream& operator<< (ostream &out, const MyVector<T> &obj)
{
	for (int i = 0; i < obj.m_len; i++)
	{
		out << obj.m_space[i];
	}
	out << endl;
	return out;
}

template<typename T>
int MyVector<T>::getLen()
{
	return m_len;
}
