#include "MyVector.h"
#include<iostream>
using namespace std;




//���캯��
template<typename T>
MyVector<T>::MyVector(int size)
{
	m_space = new T[size];
	m_len = size;
}

//��������
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


//�������캯��
template<typename T>
MyVector<T>::MyVector(const MyVector &obj)
{
	//����myV1�Ĵ�С�����ڴ�
	m_len = obj.m_len;
	m_space = new T[m_len];
	//cp����
	for (int i = 0; i < m_len; i++)
	{
		m_space[i] = obj.m_space[i];
	}
}

//����[]
template<typename T>
T& MyVector<T>::operator[] (int index)
{
	return m_space[index];
}

//����= a3 = a2 = a1
template<typename T>
MyVector<T>& MyVector<T>::operator= (const MyVector<T> &obj)
{
	//�Ȱ�a3�ľɵ��ڴ��ͷŵ�
	if (m_space != NULL)
	{
		delete[] m_space;
		m_space = NULL;
		m_len = 0;
	}

	//����a2�����ڴ�
	m_len = obj.m_len;
	m_space = new T[m_len];


	return *this;
}

//����<<
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