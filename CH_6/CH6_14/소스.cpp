#include <iostream>	

using namespace std;
struct something {
	int v1;
	float v2;

};
struct other {
	something st;

};

void dosomething(const int &n) {
	cout << &n << endl;


	cout << "in fuc"<<n<<endl;

}
int main() {
	int value = 5;
	int* ptr = nullptr;
	ptr = &value;
	//reference variable value값을 의미
	//또한 반드시 초기화를 시켜줘야한다.
	//상수또한 못들어감.
	int& ref = value;
	cout << ref << endl;
	ref = 10; //*ptr=10;
	//&value==&ref
	cout << &value << endl;
	cout << &ref << endl;
	
	const int y = 8;
	const int &ret = y;
	//same address
	int n = 5;
	cout << n << endl;
	cout << &n << endl;
	dosomething(n);
	cout << n << endl;

	other ot;
	//활용
	int& addr = ot.st.v1;

	addr = 10;


	return 0;

}