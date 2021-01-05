#include <iostream>

using namespace std;

int main() {
	//int length;
	//cin >> length;
	//int* arr = new int[length] {};
	//for (int i = 0; i < length; i++) {
	//	cout << (uintptr_t)&arr[i] << endl;
	//	cout << arr[i] << endl;
	//}

	//delete[] arr;
	int fixed[] = { 1,2,3,4,5 };
	int *arr = new int[] {1, 2, 3, 4, 5};

	//resizing 

	delete[] arr;


	return 0;

}