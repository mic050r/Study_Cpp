#include <iostream>
using namespace std;

int main() {
	// �迭 ����
	int array[10];

	// �����Ͱ� array[5]�� ����Ű�� �����.
	int* p = &array[5];

	// p�� ���� array[5]�� �ּҸ� ����Ѵ�.
	cout << "p = " << p << endl;
	cout << "&array[5] = " << &array[5] << endl;

	// �����Ͱ� array[6]�� ����Ű�� �����.
	p++;

	// p�� ���� array[6]�� �ּҸ� ����Ѵ�.
	cout << "p = " << p << endl;
	cout << "&array[6] = " << &array[6] << endl;

	return 0;
}