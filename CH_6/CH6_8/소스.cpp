#include <iostream>

using namespace std;
//int arr[]==int *arr
struct My {
	int arr[5] = { 9,7,5,3,1 };
};
void printarr(My ms){
	cout << sizeof(ms.arr) << endl;

}
int main() {
	////arr�� �ּ�
	//cout << arr << endl;
	//cout << &arr[0] << endl;
	//cout << *arr << endl;
	////char name[] = "jackjack";
	////cout << *name << endl;
	//int* ptr = arr;
	////not same
	//cout << sizeof(arr) << endl;
	//cout << sizeof(ptr) << endl;
	//printarr(arr);
	////������ ���� 
	//cout << *ptr << " " <<*(ptr + 1) << endl;
	My ms;
	cout << ms.arr[0] << endl;
	printarr(ms);



	return 0;




}