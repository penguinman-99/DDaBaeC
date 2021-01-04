#include <iostream>
using namespace std;

int main() {
	/*
	int arr[] = { 1,2,3,4,5 };
	int* ptr_arr = &arr[0];
	for (int i = 0; i < 5; i++) {
		cout << *(ptr_arr+i) << " " << (uintptr_t)&arr[i] << endl;


	}*/
	char name[] = "kim kyun ho";
	const int n_name = sizeof(name) / sizeof(name[0]);
	for (int i = 0; i < n_name; i++) {
		cout << *(name + i);

	}

	return 0;



}