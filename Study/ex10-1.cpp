#include <iostream>
using namespace std;

// StudentInfo��� �̸��� ����ü�� ����
struct StudentInfo
{
	char bloodType; // ������
	int stdnumber; // �й�
	float grade; // ����
};

int main() {
	// StudentInfo ����ü Ÿ���� ���� 2���� ����
	StudentInfo si1 = { 'O' ,20031128 ,3.5f }, si2 = { 'A' ,19961219 ,2.3f };

	// ����� ���� ���
	cout << "�й� : " << si1.stdnumber << "\n";
	cout << "���� : " << si1.grade << "\n";
	cout << "������ : " << si1.bloodType << "\n\n";
	cout << "�й� : " << si2.stdnumber << "\n";
	cout << "���� : " << si2.grade << "\n";
	cout << "������ : " << si2.bloodType << "\n\n";
	return 0;
}