#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stdafx.h"


#define NOT_FOUND	(-1)


int linear_search(int SerchValue, int *array ,int arrayLength) {
	int index = 0;

	/*”z—ñ‚Ì”ÍˆÍ“à‚Å–Ú“I‚Ì’l‚ð’T‚·*/
	while ( index < arrayLength && array[index] != SerchValue) {
		index++;
	}
	if (index < arrayLength) {
		return index;
	}
	return NOT_FOUND;
	
}