int main() {
	// 배열의 크기를 const 변수에 보관한다.
	const unsigned int arraySize = 100;

	// 배열을 정의한다.
	char characters[arraySize] = { 0 };

	// 배열 1~arraySize의 값을 넣는다.
	for (int i = 0; i < arraySize; i++)
	{
		characters[i] = i + 1;
	}
	return 0;
}