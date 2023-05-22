#include <iostream>
using namespace std;

int main() {
	// 변수 정의
	char c = 'B';
	int i = 19;
	float f = 4.5f;

	// 주소 출력
	cout << "c의 주소 = " << (int*)&c << endl;
	cout << "i의 주소 = " << &i << endl;
	cout << "f의 주소 - " << &f << endl;

	return 0;
}