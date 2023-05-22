#include <iostream>
using namespace std;

// 사각형의 정보를 갖는 구조체
struct Rectangle
{
	int x, y;
	int width, height;
};
int main() {
	// 사각형 구조체 변수를 만든다
	Rectangle rc = { 100, 100,50,50 };

	// 포인터가 이 변수를 가리키게 만든다.
	Rectangle* p = &rc; // Rectangle 구조체를 가리킬 수 있는 포인터를 정의 하고 초기화한다.

	// 구조체의 멤버에 접근한다.
	(*p).x = 200;
	p->y = 250;

	// 구조체의 내용을 출력한다.
	cout << "rc = (" << rc.x << ", " << rc.y << ", ";
	cout << rc.width << ", " << rc.height << ")" << endl;

	return 0;
}