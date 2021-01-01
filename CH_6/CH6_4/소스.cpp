#include <iostream>
using namespace std;
void printArr(const int arr[],const int length) {

	for (int i = 0; i < length; i++) {
		cout << arr[i];

	}
	cout << endl;
}
int main() {
	/*
	3 5 2 1 4
	1 5 2 3 4
	1 2 5 3 4
	1 2 3 5 4
	1 2 3 4 5
	*/
	const int length = 5;
	int arr[length] = { 3,5,2,1,4 };
	for (int i = 0; i < length-1; i++) {
		int init_idx = i;
		for (int j = i+1; j < length; j++) {
			if (arr[i] > arr[j]) {
				int tp1;
				tp1 = arr[j];
				arr[j] = arr[i];
				arr[i] = tp1;

			}

		}

		printArr(arr, length);

	}

	return 0;

}