#include "sort.h"

void my_shell_sort(int *nums);

void shell_sort() {
	printf("*************************************************  Ï£¶ûÅÅÐò  *************************************************\n");

	start_time = clock();

	my_shell_sort(nums);

	end_time = clock();

#if PRINTRESULT
	print();
#endif

#if PRINTRUNTIME
	printf("run time : %lf\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
#endif

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