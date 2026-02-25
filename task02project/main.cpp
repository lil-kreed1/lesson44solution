#include <iostream>
#include "logic.h"
#include <string>
using namespace std;


int main() {
	int array[SIZE];
	int size;
	int num;

	do {
		system("cls");
		cout << "input the size of array: ";
		cin >> size;
	} while (size <= 0);

	cout << "input your number: ";
	cin >> num;

	init_rnd(array, size, 0, 10);

	print("array:\n");
	print(convert(array, size));

	print("count of non zero elements is ");
	print(to_string(count_non_zero_elements(array, size)) + "\n");

	return 0;
}