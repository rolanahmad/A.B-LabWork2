#include <iostream>
#include "Array.h"

using namespace std;

void main() {
	system("chcp 1251");
	system("cls");
	Array b;

	Array a(3);

	a[0] = 1.8;
	a[1] = 5.4;
	a[2] = 5;

	cout << "Array a" << endl;
	for (int i = 0; i < a.size(); i++)
		cout << a[i] <<" ";

	cout << endl;

	Array v2(a);

	cout << "Array v2" << endl;
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout << endl;

	b = a;

	cout << "Array b" << endl;
	for (int i = 0; i< b.size(); i++) {
		cout<<b[i]<<" ";
	}

	cout << endl;

	cout << (a == b) << endl;
	 
	system("pause");
}