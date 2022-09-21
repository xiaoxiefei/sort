#include "sort.h"

void my_insert_sort(int *);

void insert_sort() {
	printf("*************************************************  ≤Â»Î≈≈–Ú  *************************************************\n");

	printf("after sort  : ");

	
	my_insert_sort(nums); 


	for (int i = 0; i < NUMSIZE; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
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