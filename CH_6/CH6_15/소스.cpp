#include <iostream>
using namespace std;

void dosomething(const int& a) {

	cout << a << endl;
}
int main() {
	int x = 5;
	const int& ref_x = x;
	cout << ref_x << endl;

	//const�� ������ literal�� ������ �� ���մ� 
	//�Լ����� ������ �ȴ�.
	const int& ref_x = 10;
	dosomething(30);


	return 0;

}