// 生成随机数 

#include "sort.h"

void data() {
	srand((int)time(NULL));
	for (int i = 0; i < NUMSIZE; i++) {
		nums[i] = rand() % 100 + 1;
	}
	printf("before sort : ");
	for (int i = 0; i < NUMSIZE; i++) {
		printf("%d ", nums[i]);
	}
	puts("\n");
}