#include <iostream>
using namespace std;

int main() {
	//3���� ������ ����
	int a;
	int b;
	int c;

	//�� ������ 100,200,300���� �ִ´�
	a = 100;
	b = 200;
	c = 300;

	//ex4-1
	int d = 400;

	//ȭ�� ���
	cout << a << ", " << b << ", " << c << "\n";
	cout << d << "\n";

	//ex4-6
	int k = 1000, e = 2000;
	cout << "d = " << d << ", e = " << e << "\n";
	d = e;
	cout << "d = " << d << ", e = " << e;
	return 0;
}