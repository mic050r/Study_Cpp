#include <iostream>
using namespace std;

int main() {
	//�������� ����
	int class_number = 5;		//��
	int student_number = 45;  //��ȣ

	//����, ����, ���� ���� ����
	int kor_sco = 90;	  //��������
	int eng_sco = 100; //��������
	int math_sco = 80; //��������

	//������ ��� ����
	int total_sco = 270; //����
	int avg = 90; //���

	//����ǥ ���
	cout << "�� ��ȣ ���� ���� ���� ���� ���\n";
	cout << class_number << "  " << student_number << "  ";
	cout << kor_sco << "  " << eng_sco << "  ";
	cout << math_sco << "  " << total_sco << "  " << avg << "\n";
	return 0;
}