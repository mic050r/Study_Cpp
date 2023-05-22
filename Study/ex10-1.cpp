#include <iostream>
using namespace std;

struct StudentInfo
{
	char bloodType; // 혈액형
	int stdnumber; // 학번
	float grade; // 평점
};

int main() {
	StudentInfo si1;
	StudentInfo si2;

	si1.bloodType = 'O';
	si1.stdnumber = 20031128;
	si1.grade = 3.5f;

	si2.bloodType = 'A';
	si2.stdnumber = 19961219;
	si2.grade = 2.3f;

	cout << "학번 : " << si1.stdnumber << "\n";
	cout << "학점 : " << si1.grade << "\n";
	cout << "혈액행 : " << si1.bloodType << "\n\n";
	cout << "학번 : " << si2.stdnumber << "\n";
	cout << "학점 : " << si2.grade << "\n";
	cout << "혈액행 : " << si2.bloodType << "\n\n";
	return 0;
}