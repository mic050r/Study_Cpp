#include <iostream>
using namespace std;

int main() {
	// �Ϲ����� ���� ����
	int a = 123;

	// ������ ���� ����
	int* p;

	// p�� a�� ����Ű�� �����
	p = &a;

	// ���� ������ ����Ѵ�.
	cout << "&a = " << &a << endl;
	cout << "p = " << p << endl;
	cout << "&p = " << &p << endl;

	return 0;
}