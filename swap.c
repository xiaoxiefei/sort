#include "sort.h"

void swap(int* a, int* b);

void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}