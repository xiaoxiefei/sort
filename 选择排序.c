#include "sort.h"

void my_select_sort(int* nums);
//void swap(int*, int*);

void select_sort() {
	printf("*************************************************  —°‘Ò≈≈–Ú  *************************************************\n");

	start_time = clock();

	my_select_sort(nums); 

	end_time = clock();

#if PRINTRESULT
	print();
#endif

#if PRINTRUNTIME
	printf("run time : %lf\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
#endif

	puts("-----------------------------------------------------------------------------------------------------------------\n");
}


void my_select_sort(int* nums) {
	for (int i = 0; i < NUMSIZE - 1; i++) {
		for (int j = i + 1; j < NUMSIZE; j++) {
			if (nums[i] > nums[j]) {
				swap(&nums[i], &nums[j]);
			}
		}
	}
}