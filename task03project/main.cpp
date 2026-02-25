#include <iostream>
using namespace std;

bool search_binary(int array[10], int length, int value) {
	int first = 0;
	int last = length - 1;

	while (first <= last) {
		int middle = (first + last) / 2;

		if (array[middle] == value) {
			return true;
		}
		else if (array[middle] > value) {
			first = middle + 1;
		}
		else {
			last = middle + 1;
		}
	}

	return false;
}

int main() {
	int array[]{ 1,2,3,4,5,6,7,8,9,10 };
	int size = {10};

	int value = 7;

	cout << "does value exist? - ";
	cout << (search_binary(array, size, value) ? "ye" : "no ") << endl;

	return 0;
}