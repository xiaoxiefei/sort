#include "sort.h"

void my_shell_sort(int *nums);

void shell_sort() {
	printf("*************************************************  Ï£¶ûÅÅÐò  *************************************************\n");
	printf("after sort  : ");

	my_shell_sort(nums);

	for (int i = 0; i < NUMSIZE; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
	puts("---------------------------------------------------------------------------------------------------------------\n");
}

void my_shell_sort(int *nums) {
	int dis = NUMSIZE / 2;
	while (dis) {
		for (int i = 0; i < dis; i++) {
			for (int j = i; j < NUMSIZE-dis; j+=dis) {
				for (int k = j + dis; k < NUMSIZE; k += dis) {
					if (nums[j] > nums[k]) {
						swap(&nums[j], &nums[k]);
					}
				}
			}
		}
		dis /= 2;
	}
}