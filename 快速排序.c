//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void mysort(int* nums, int left, int right);
//void swap(int* a, int* b);
//#define NUMSIZE 10
//
//int main() {
//	srand((int)time(NULL));
//	int nums[NUMSIZE];
//	for (int i = 0; i < NUMSIZE; i++) {
//		nums[i] = rand() % 100 + 1;
//	}
//	//int nums[10] = { 52, 46, 82, 51, 83 ,21, 1, 100, 95, 89 };
//	mysort(nums, 0, NUMSIZE - 1);
//	for (int i = 0; i < NUMSIZE; i++) {
//		printf("%d ", nums[i]);
//	}
//}
//
//void swap(int* a, int* b) {
//	int c = *a;
//	*a = *b;
//	*b = c;
//}
//
//void mysort(int* nums, int left, int right) {
//	for (int i = 0; i < NUMSIZE; i++) {
//		printf("%d ", nums[i]);
//	}
//	printf("\n");
//	static int time = 0;
//	printf("%d left = %d  right = %d\n", time++, left, right);
//	if (left >= right)return;
//	int i, j;
//	for (i = left + 1, j = right; i <= j;) {
//		printf("i = %d \t j = %d\n", i, j);
//
//		if (nums[i] <= nums[left]) {
//			i++;
//			continue;
//		}
//		if (nums[i] > nums[left]) {
//			if (nums[j] < nums[left]) {
//				swap(&nums[i], &nums[j]);
//				i++;
//				j--;
//				continue;
//			}
//			if (nums[j] >= nums[left]) {
//				j--;
//			}
//		}
//	}
//	if (i >= j) {
//		i = i < j ? i : j;
//		if (nums[i] < nums[left]) {
//			swap(&nums[i], &nums[left]);
//		}
//
//		mysort(nums, left, i - 1);
//		mysort(nums, i + 1, right);
//	}
//}