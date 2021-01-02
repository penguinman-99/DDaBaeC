#include <iostream>
#include <typeinfo>

using namespace std;
struct something {

	int a, b, c, d;

};

int main() {
	int x = 5;
	double d = 1.1;
	//&: address-of operator
	//de-reference operator (*) 실제로 접근해서 값을 확인함
	cout << *(&x) << endl;
	int* ptr_x=&x;
	double* ptr_d = &d;

	cout << ptr_x << endl;
	cout << *ptr_x << endl;

	cout << typeid(ptr_x).name() << endl;
	//ptr_x, &x:x86 x64에 따라 다름 
	cout << sizeof(x) << " " << sizeof(ptr_x) << " " << sizeof(&x) << endl;
	cout << sizeof(d) << " " << sizeof(ptr_d) << " " << sizeof(&d) << endl;

	something ss;
	something* ptr_s;
	cout << sizeof(something) << endl;
	cout << sizeof(ptr_s) << endl;

	//포인터는 초기화를 하는 것이 좋다.
	return 0;




}