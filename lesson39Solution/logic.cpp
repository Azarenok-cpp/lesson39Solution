#include "logic.h"

void bubble_sort(int* array, int length) {
	for (int j = 0; j < length; j++)
	{
		bool flag = true;

		for (int i = 0; i < length - 1 - j; i++) {

			if (array[i] > array[i + 1]) {
				swap(array[i], array[i + 1]);
				flag = false;
			}


		}
		if (flag) {
			break;
		}
	}
}