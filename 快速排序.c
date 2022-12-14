#include "sort.h"

void my_quick_sort(int* nums, int left, int right);


void quick_sort() {
	printf("*************************************************  ????????  *************************************************\n");

	start_time = clock();

	my_quick_sort(nums, 0, NUMSIZE - 1); 

	end_time = clock();


#if PRINTRESULT
	print();
#endif

#if PRINTRUNTIME
	printf("run time : %lf\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
#endif

	puts("---------------------------------------------------------------------------------------------------------------\n");
}



void my_quick_sort(int* nums, int left, int right) {

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

		my_quick_sort(nums, left, i - 1);
		my_quick_sort(nums, i + 1, right);
	}
}