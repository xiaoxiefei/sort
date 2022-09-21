#pragma once
#ifndef _SORT_H_
#define _SORT_H_

#define NUMSIZE 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void data();
void swap(int*, int*);
void quick_sort();		//	øÏÀŸ≈≈–Ú
void bubble_sort();		//	√∞≈›≈≈–Ú
void select_sort();		//	—°‘Ò≈≈–Ú

int nums[NUMSIZE];

#endif // !_SORT_H_
