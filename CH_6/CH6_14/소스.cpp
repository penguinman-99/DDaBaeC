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
	//reference variable value���� �ǹ�
	//���� �ݵ�� �ʱ�ȭ�� ��������Ѵ�.
	//������� ����.
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
	//Ȱ��
	int& addr = ot.st.v1;

	addr = 10;


	return 0;

}