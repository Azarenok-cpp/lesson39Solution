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


int selected_sort(int* array, int length) {
	int count = 0;
	for (int j = 0; j < length; j++)
	{
		int index = j;
		for (int i = j+1; i < length; i++)
		{
			if (array[i] < array[index]) {
				index = i;
			}
			count++;
		}

		int t = array[j];
		array[j] = array[index];
		array[index] = t;
	}
	return count;
}