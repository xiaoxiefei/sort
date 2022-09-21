#pragma once
#ifndef _SORT_H_
#define _SORT_H_

#define NUMSIZE			100000
#define	PRINTDATA		0			//1:��ӡ����ǰ������
#define PRINGRESULT		0			//1:��ӡ�����Ľ��
#define PRINTRUNTIME	1			//1:��ӡ����ʱ��

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void data();			// ���������
void swap(int*, int*);
void quick_sort();		//	��������
void bubble_sort();		//	ð������
void select_sort();		//	ѡ������
void insert_sort();		//	��������
void shell_sort();		//	ϣ������
void merge_sort();		//	�鲢����

int nums[NUMSIZE];

clock_t start_time, end_time;

#endif // !_SORT_H_
