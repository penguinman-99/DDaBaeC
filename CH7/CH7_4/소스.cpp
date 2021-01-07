#include <iostream>

using namespace std;
void foo(int *arr,int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;

	}
	arr[0] = 1.0;

}
int main() {
	int value = 5;
	int* ptr = &value;
	cout << value << " " << &value << endl;
	cout << &ptr << endl;

	foo(ptr);
	//foo(5); literal X 


	return 0;


}