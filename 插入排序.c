#include "sort.h"

void my_insert_sort(int *);

void insert_sort() {
	printf("*************************************************  ��������  *************************************************\n");

	printf("after sort  : ");


	my_insert_sort(nums); // ����  


	for (int i = 0; i < NUMSIZE; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
	puts("-----------------------------------------------------------------------------------------------------------------\n");
}

void my_insert_sort(int* nums) {

}