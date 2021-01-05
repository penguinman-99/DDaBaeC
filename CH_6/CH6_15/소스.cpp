#include <iostream>
using namespace std;

void dosomething(const int& a) {

	cout << a << endl;
}
int main() {
	int x = 5;
	const int& ref_x = x;
	cout << ref_x << endl;

	//const를 찍으면 literal도 참조를 할 수잇다 
	//함수에도 적용이 된다.
	const int& ref_x = 10;
	dosomething(30);


	return 0;

}