#include <iostream>
using namespace std;

int main() {
	// p�� a�� ����Ű�� �����.
	int a = 123;
	int* p = &a;

	// p�� ����Ű�� ������ ���� ��´�.
	cout << "*p = " << a << endl;
	
	// p�� ����Ű�� ������ ���� �����Ѵ�.
	*p = 789;

	// ���� ������ ����Ѵ�.
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	return 0;
}