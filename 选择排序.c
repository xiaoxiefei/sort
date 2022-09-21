#include "sort.h"

void my_select_sort(int* nums);
//void swap(int*, int*);

void select_sort() {
	printf("*************************************************  —°‘Ò≈≈–Ú  *************************************************\n");

	printf("after sort  : ");


	my_select_sort(nums); // ≈≈–Ú


	for (int i = 0; i < NUMSIZE; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
	puts("-----------------------------------------------------------------------------------------------------------------\n");
}


void my_select_sort(int* nums) {
	for (int i = 0; i < NUMSIZE - 1; i++) {
		for (int j = i + 1; j < NUMSIZE; j++) {
			if (nums[i] > nums[j]) {
				swap(&nums[i], nums[j]);
			}
		}
	}
}