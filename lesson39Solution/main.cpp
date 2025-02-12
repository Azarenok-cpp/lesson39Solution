#include "logic.h"
#include "util.h"
#define SIZE 20
#define A 1
#define B 50
int main() {
	int vector[SIZE];

	init_random(vector, SIZE, A, B);

	cout << convert(vector, SIZE) << endl;
	return 0;
}