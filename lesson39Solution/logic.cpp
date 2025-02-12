#include "logic.h"

/*сортировка для мощнейших*/

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
	//O(N^2), O(N) - best
}


void selected_sort(int* array, int length) {
	for (int j = 0; j < length; j++)
	{
		int index = j;
		for (int i = j+1; i < length; i++)
		{
			if (array[i] < array[index]) {
				index = i;
			}
		}

		int t = array[j];
		array[j] = array[index];
		array[index] = t;
	}
	//O(N^2)

}