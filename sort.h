#pragma once
#ifndef _SORT_H_
#define _SORT_H_

#define NUMSIZE			100000
#define	PRINTDATA		0			//1:打印排序前的数据
#define PRINGRESULT		0			//1:打印排序后的结果
#define PRINTRUNTIME	1			//1:打印运行时间

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void data();			// 生成随机数
void swap(int*, int*);
void quick_sort();		//	快速排序
void bubble_sort();		//	冒泡排序
void select_sort();		//	选择排序
void insert_sort();		//	插入排序
void shell_sort();		//	希尔排序
void merge_sort();		//	归并排序

int nums[NUMSIZE];

clock_t start_time, end_time;

#endif // !_SORT_H_
