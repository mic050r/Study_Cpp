// void 포인터는 흔히 주소를 저장하는 용도로만 사용
int main() {
	// int 타입의 주소를 void 포인터에 보관
	int i = 400;
	void* pv = &i;

	// pv에 보관된 주소를 int*타입의 변수에 옮겨 담는다
	int* pi = (int*)pv;

	return 0;
}