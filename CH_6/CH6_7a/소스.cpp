#include <iostream>
#include <cstddef>
using namespace std;
void dosomething(double* ptr) {
	if (ptr!= nullptr) {
		cout << *ptr << endl;
		//blah
	}
	else {
		//blah blah
		cout << "Null ptr, do nothing" << endl;

	}



}

int main() {
	double* ptr = NULL; //C-style
	int* ptr_n = nullptr;//modern c++
	dosomething(ptr);
	dosomething(nullptr);
	double d = 123.4;
	dosomething(&d);
	nullptr_t nptr;//널포인터만 가능한 변수
	cout << "address of pointer varaible in main()" << ptr << endl;
	dosomething(ptr);
	return 0;

}