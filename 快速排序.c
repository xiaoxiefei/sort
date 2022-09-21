#include "sort.h"

void mysort(int* nums, int left, int right);
void swap(int* a, int* b);
#define NUMSIZE 10

void quick_sort() {
	srand((int)time(NULL));
	int nums[NUMSIZE];
	for (int i = 0; i < NUMSIZE; i++) {
		nums[i] = rand() % 100 + 1;
	}
	printf("before sort : ");
	for (int i = 0; i < NUMSIZE; i++) {
		printf("%d ", nums[i]);
	}
	printf("\nafter sort  : ");
	mysort(nums, 0, NUMSIZE - 1);
	for (int i = 0; i < NUMSIZE; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
}

void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void mysort(int* nums, int left, int right) {

	if (left >= right)return;
	int i, j;
	for (i = left + 1, j = right; i <= j;) {

		if (nums[i] <= nums[left]) {
			i++;
			continue;
		}
		if (nums[i] > nums[left]) {
			if (nums[j] < nums[left]) {
				swap(&nums[i], &nums[j]);
				i++;
				j--;
				continue;
			}
			if (nums[j] >= nums[left]) {
				j--;
			}
		}
	}
	if (i >= j) {
		i = i < j ? i : j;
		if (nums[i] < nums[left]) {
			swap(&nums[i], &nums[left]);
		}

		mysort(nums, left, i - 1);
		mysort(nums, i + 1, right);
	}
}