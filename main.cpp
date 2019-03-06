
#include<iostream>
using namespace std;
#include"MyVector.cpp"



void main()
{
	MyVector<int> myV1(10);
	for (int i = 0; i < myV1.getLen(); i++)
	{
		myV1[i] = i + 1;
		cout << myV1[i] << " ";
	}
	cout << endl;

	MyVector<int> myV2 = myV1;
	for (int i = 0; i < myV2.getLen(); i++)
	{
		cout << myV2[i] << " ";
	}
	cout << endl;

	cout << myV2 << endl;




	cout << "hello.." << endl;
	system("pause");
}
