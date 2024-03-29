int main() {
	// 배열 정의
	int nArray[10];
	int* p = &nArray[0];

	// 배열을 탐색하면서 값을 넣는다
	for (int i = 0; i < 10; ++i)
		// (p+1)는 p가 가리키는 원소에서 i개 만큼 뒤에있는 원소를 가리킨다.
		// *(p+1)는 그 원소 자체를 말하며, 그곳에 0~9의 값을 넣게 된다.
		*(p + i) = i;
		// p[i] = i;
		// *(nArray + i) = i;
	return 0;
}