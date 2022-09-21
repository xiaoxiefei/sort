#include "sort.h"

void my_merge_sort(int*, int*, int, int, int);

void merge_sort() {
	printf("*************************************************  ¹é²¢ÅÅĞò  *************************************************\n");

	start_time = clock();
	int temp[NUMSIZE];
	for (int i = 0; i < NUMSIZE; i++) {
		temp[i] = 0;
	}

	my_merge_sort(nums, temp, 0, (NUMSIZE-1)/2, NUMSIZE-1);

	end_time = clock();

#if PRINTRESULT
	print();
#endif

#if PRINTRUNTIME
	printf("run time : %lf\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
#endif

	puts("---------------------------------------------------------------------------------------------------------------\n");
}

void my_merge_sort(int* nums, int *temp, int start, int mid, int end) {
	if (start >= end)return;
	int start1 = start, end1 = mid;
	int start2 = mid + 1, end2 = end;
	my_merge_sort(nums, temp, start1, (start1 + end1) / 2, end1);
	my_merge_sort(nums, temp, start2, (start2 + end2) / 2, end2);
	int k = start;
	while (start1 <= end1 && start2 <= end2) {
		temp[k++] = nums[start1] < nums[start2] ? nums[start1++] : nums[start2++];
	}
	while (start1 <= end1) {
		temp[k++] = nums[start1++];
	}
	while (start2 <= end2) {
		temp[k++] = nums[start2++];
	}
	for (k = start; k <= end; k++) {
		nums[k] = temp[k];
	}
}