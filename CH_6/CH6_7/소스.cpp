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
	//de-reference operator (*) ������ �����ؼ� ���� Ȯ����
	cout << *(&x) << endl;
	int* ptr_x=&x;
	double* ptr_d = &d;

	cout << ptr_x << endl;
	cout << *ptr_x << endl;

	cout << typeid(ptr_x).name() << endl;
	//ptr_x, &x:x86 x64�� ���� �ٸ� 
	cout << sizeof(x) << " " << sizeof(ptr_x) << " " << sizeof(&x) << endl;
	cout << sizeof(d) << " " << sizeof(ptr_d) << " " << sizeof(&d) << endl;

	something ss;
	something* ptr_s;
	cout << sizeof(something) << endl;
	cout << sizeof(ptr_s) << endl;

	//�����ʹ� �ʱ�ȭ�� �ϴ� ���� ����.
	return 0;




}