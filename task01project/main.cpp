#include "util.h"

int main() {
	int array[SIZE];
	int size;

	do {
		system("cls");
		cout << "input the size of array: ";
		cin >> size;
	} while (size <= 0);

	init_rnd(array, size, 0, 10);

	print("array:\n");
	print(convert(array, size));

	print("count of non elements is ");
	print(to_string(count_non_zero_elements(array, size)) + "\n");

	return 0;
}