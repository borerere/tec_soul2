#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stdafx.h"

#define NOT_FOUND (-1)

int binary_serch(int SerchValue, int *array, int left, int right) {
	int mid;
	mid = (left + right) / 2;

	if (array[mid] == SerchValue) {
		return mid;
	}
	if (array[mid] < SerchValue) {
		left = mid + 1; //midより左側にSerchValueは存在しない
	}
	else {
		right = mid - 1;//midより右側にSerchValueは存在しない
	}
	return NOT_FOUND;
}