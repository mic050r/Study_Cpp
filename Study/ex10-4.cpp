#include <iostream>
using namespace std;

int main() {
	// 구조체 정의
	// 2차원에서의 점에 대한 정보
	struct Point 
	{
		int x;
		int y;
	} pt1 = { 30,50 }, pt2; // 구조체 Point의 정의와 변수 p1과 p2의 정의를 한 번에 하고 있다.

	// pt1에 pt2에 대입
	pt2 = pt1;

	// 멤버값을 출력
	cout << "pt1 = (" << pt1.x << ", " << pt1.y << ")" << endl;
	cout << "pt2 = (" << pt2.x << ", " << pt2.y << ")" << endl;

	return 0;
}