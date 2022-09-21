#pragma once
#ifndef _SORT_H_
#define _SORT_H_

#define NUMSIZE 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void data();			// 生成随机数
void swap(int*, int*);
void quick_sort();		//	快速排序
void bubble_sort();		//	冒泡排序
void select_sort();		//	选择排序
void insert_sort();		//	插入排序

int nums[NUMSIZE];

#endif // !_SORT_H_
