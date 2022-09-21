#include "sort.h"

void my_bubble_sort(int *nums);
//void swap(int*, int*);

void bubble_sort() {
	printf("*************************************************  ц╟ещеепР  *************************************************\n");
	
	printf("after sort  : ");

	
	my_bubble_sort(nums);


	for (int i = 0; i < NUMSIZE; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
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