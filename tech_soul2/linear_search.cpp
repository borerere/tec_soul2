#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stdafx.h"


#define NOT_FOUND	(-1)


int linear_search(int SerchValue, int *array ,int arraySize) {
	int index = 0;

	/*�z��͈͓̔��ŖړI�̒l��T��*/
	while ( index < arraySize && array[index] != SerchValue) {
		index++;
	}
	if (index < arraySize) {
		return index;
	}
	return NOT_FOUND;
	
}