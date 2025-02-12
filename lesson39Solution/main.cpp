#include "logic.h"
#include "util.h"
#define SIZE 10
#define A -10
#define B 10
int main() {
	int vector[SIZE];
	//{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//{ 10,2,3,4,5,6,7,8,9,1 };
	//{1,2,3,10,5,6,7,8,9,4};


	init_random(vector, SIZE, A, B);
	cout << "Before: " << convert(vector, SIZE) << endl;

	//bubble_sort(vector, SIZE);
	cout << selected_sort(vector, SIZE) << endl;
	cout << "After: " << convert(vector, SIZE) << endl;


	return 0;
}