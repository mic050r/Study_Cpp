#include <iostream>
using namespace std;

int main() {
	//개인정보 보관
	int class_number = 5;		//반
	int student_number = 45;  //번호

	//국어, 영어, 수학 점수 보관
	int kor_sco = 90;	  //국어점수
	int eng_sco = 100; //영어점수
	int math_sco = 80; //수학점수

	//총점과 평균 보관
	int total_sco = 270; //총점
	int avg = 90; //평균

	//성적표 출력
	cout << "반 번호 국어 영어 수학 총점 평균\n";
	cout << class_number << "  " << student_number << "  ";
	cout << kor_sco << "  " << eng_sco << "  ";
	cout << math_sco << "  " << total_sco << "  " << avg << "\n";
	return 0;
}