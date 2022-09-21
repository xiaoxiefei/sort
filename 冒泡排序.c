#include "sort.h"

void my_bubble_sort(int *nums);
//void swap(int*, int*);

void bubble_sort() {
	printf("*************************************************  √∞≈›≈≈–Ú  *************************************************\n");

	start_time = clock();
	
	my_bubble_sort(nums);

	end_time = clock();


#if PRINTRESULT
	print();
#endif

#if PRINTRUNTIME
	printf("run time : %lf\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
#endif

	puts("-----------------------------------------------------------------------------------------------------------------\n");
}


void my_bubble_sort(int* nums) {
	for (int i = 0; i < NUMSIZE-1; i++) {
		for (int j = 0; j < NUMSIZE - i-1; j++) {
			if (nums[j] > nums[j+1]) {
				swap(&nums[j], &nums[j+1]);
			}
		}
	}
}