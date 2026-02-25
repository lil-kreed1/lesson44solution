#include "logic.h"

int count_elements_great_num(int array[SIZE], int length, int num) {
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (array[i]){
			count++;
		}
	}

	return count;
}