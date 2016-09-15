#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stdafx.h"


#define NOT_FOUND	(-1)

int organization_search(int SerchValue, int *array, int arraySize) {
	int index = 0;
	int array_temp;

	while (index<arraySize && array[index] != SerchValue) {
		index++;
	}
	if (index < arraySize) {
		if (index > 0) {
			array_temp = array[index - 1];
			array[index - 1] = array[index];
			array[index] = array_temp;
			return index - 1;
		}
		return index;
	}
	return NOT_FOUND;
}
