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
//배열보단 주로 vector를 많이 활용함.
void printele(int(&arr)[4]) {


}
int main() {
	//값에 의한 전달. 함수 내부 주소와 메인 함수 주소가 다름.
	/*dosomething(5);
	int x = 6;
	cout << "in main " << x << " " << &x << endl;
	dosomething(x);
	dosomething(x + 1);
	*///call by reference 참조에 의한 전달 
	int x = 5;
	cout << x << " " << &x << endl;
	addOne(x);
	cout << x << " " << &x << endl;
	double sin(0.0);
	double cos(0.0);
	getSinCos(30, sin, cos);
	cout << sin << " " << cos << endl;
	//call by reference 단점: literal를 받으면 주소가 없어서 호출할 수 없음.

	int y = 5;
	int* ptr = &y;
	foo(ptr);



	return 0;
}