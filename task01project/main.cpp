#include "util.h"

int main() {
	int array[SIZE];
	int size;

	do {
		system("cls");
		cout << "input the size of array: ";
		cin >> size;
	} while (size <= 0);

	init_rnd(array, size, 0, 100);

	print("array:\n");
	print(convert(array, size));

	return 0;
}