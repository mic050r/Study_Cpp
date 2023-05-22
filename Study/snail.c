#include <stdio.h>

/* 달팽이가 3m 깊이의 우물에 빠지게 되었습니다.
달팽이가 낮동안에 열심히 우물을 기어 올라가면 55cm를 올라가고 쉬는 밤중에는 13cm를 미끄러지게 됩니다.
며칠안에 빠져나갈수 있을까요?*/

int main(void) {
	
	int height = 0;
	int days = 0;

	height += 55;
	while(height < 300) { // 우물을 다 올라왔는가?
		height = height - 13; // 밤에 쉬면서 미끌어져 내려간다
		days++;			// 한 번 반복 할때마다 날짜를 센다
		height += 55;	//낮 동안 열심히 우물을 올라간다
	}

	printf("며칠 걸렸습니까?\n");
	printf("%d일 입니다.\n", days);

	return 0;
}