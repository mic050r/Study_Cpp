#include <iostream>
using namespace std;

int main() {
	// 배열 정의
	int array[10];

	// 포인터가 array[5]를 가리키게 만든다.
	int* p = &array[5];

	// p의 값과 array[5]의 주소를 출력한다.
	cout << "p = " << p << endl;
	cout << "&array[5] = " << &array[5] << endl;

	// 포인터가 array[6]을 가리키게 만든다.
	p++;

	// p의 값과 array[6]의 주소를 출력한다.
	cout << "p = " << p << endl;
	cout << "&array[6] = " << &array[6] << endl;

	return 0;
}