#pragma once
#ifndef _SORT_H_
#define _SORT_H_

#define NUMSIZE 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void data();
void swap(int*, int*);
void quick_sort();		//	��������
void bubble_sort();		//	ð������
void select_sort();		//	ѡ������

int nums[NUMSIZE];

#endif // !_SORT_H_
