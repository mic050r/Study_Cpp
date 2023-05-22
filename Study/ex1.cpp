#include <iostream>
using namespace std;

int main() {
	//3개의 변수를 정의
	int a;
	int b;
	int c;

	//각 변수에 100,200,300값을 넣는다
	a = 100;
	b = 200;
	c = 300;

	//ex4-1
	int d = 400;

	//화면 출력
	cout << a << ", " << b << ", " << c << "\n";
	cout << d << "\n";

	//ex4-6
	int k = 1000, e = 2000;
	cout << "d = " << d << ", e = " << e << "\n";
	d = e;
	cout << "d = " << d << ", e = " << e;
	return 0;
}