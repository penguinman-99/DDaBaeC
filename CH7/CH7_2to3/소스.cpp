#include <iostream>	
#include <cmath>
using namespace std;
void dosomething(int y)
{
	cout << "in func " << y << " " << &y << endl;
}
//call by reference
void addOne(int& y) {
	cout << "in func " << y << " " << &y << endl;

	y = y + 1;

}
void foo(int*& x) {
	cout << x << endl;
}
void getSinCos(const double degrees, double& sinOut, double& cosOut) {
	static const double pi = 3.141592;
	double radians = degrees * pi / 180.0;
	sinOut = sin(radians);
	cosOut = cos(radians);


}
//�迭���� �ַ� vector�� ���� Ȱ����.
void printele(int(&arr)[4]) {


}
int main() {
	//���� ���� ����. �Լ� ���� �ּҿ� ���� �Լ� �ּҰ� �ٸ�.
	/*dosomething(5);
	int x = 6;
	cout << "in main " << x << " " << &x << endl;
	dosomething(x);
	dosomething(x + 1);
	*///call by reference ������ ���� ���� 
	int x = 5;
	cout << x << " " << &x << endl;
	addOne(x);
	cout << x << " " << &x << endl;
	double sin(0.0);
	double cos(0.0);
	getSinCos(30, sin, cos);
	cout << sin << " " << cos << endl;
	//call by reference ����: literal�� ������ �ּҰ� ��� ȣ���� �� ����.

	int y = 5;
	int* ptr = &y;
	foo(ptr);



	return 0;
}