#include <iostream>
using namespace std;

int main() {
	// ����ü ����
	// 2���������� ���� ���� ����
	struct Point 
	{
		int x;
		int y;
	};

	// ���� 2�� ����
	Point pt1 = { 30,50 };
	Point pt2;

	// pt1�� pt2�� ����
	pt2 = pt1;

	// ������� ���
	cout << "pt1 = (" << pt1.x << ", " << pt1.y << ")" << endl;
	cout << "pt2 = (" << pt2.x << ", " << pt2.y << ")" << endl;

	return 0;
}