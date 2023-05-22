#include <iostream>
using namespace std;

int main() {
	// p가 a를 가리키게 만든다.
	int a = 123;
	int* p = &a;

	// p가 가리키는 변수의 값을 얻는다.
	cout << "*p = " << a << endl;
	
	// p가 가리키는 변수의 값을 변경한다.
	*p = 789;

	// 관련 정보를 출력한다.
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	return 0;
}