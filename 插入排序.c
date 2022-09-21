#include "sort.h"

void my_insert_sort(int *);

void insert_sort() {
	printf("*************************************************  ≤Â»Î≈≈–Ú  *************************************************\n");

	start_time = clock();

	my_insert_sort(nums); 

	end_time = clock();

#if PRINTRESULT
	print();
#endif

#if PRINTRUNTIME
	printf("run time : %lf\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
#endif

	puts("-----------------------------------------------------------------------------------------------------------------\n");
}

void my_insert_sort(int* nums) {
	for (int i = 1; i < NUMSIZE; i++) {
		int temp = nums[i];
		int j;
		for (j = i-1; j >= 0; j--) {
			if (nums[j] > nums[i]) {
				nums[j + 1] = nums[j];
			}
		}
		nums[j] = temp;
	}
}