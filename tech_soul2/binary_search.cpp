#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stdafx.h"

#define NOT_FOUND (-1)

int binary_search(int SerchValue, int *array, int left, int right) {
	int mid;
	
	while (left < right) {
		mid = (left + right) / 2;
		if (array[mid] < SerchValue) {
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}

	if (array[left] == SerchValue) {
		return left;
	}
	return NOT_FOUND;
}
