#include <iostream>
using namespace std;

int main() {
	// 일반적인 변수 정의
	int a = 123;

	// 포인터 변수 정의
	int* p;

	// p가 a를 가리키게 만든다
	p = &a;

	// 관련 정보를 출력한다.
	cout << "&a = " << &a << endl;
	cout << "p = " << p << endl;
	cout << "&p = " << &p << endl;

	return 0;
}