#include <iostream>

using namespace std;

int main(){
	//int var;
	//var=7; �� ����.
	int* ptr = new int;
	*ptr = 7;
	//���� �迭�� heap���� ��.
	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;
	ptr = nullptr;
	//memory leak
	while (1) {
		int* ptr = new int;

	}
	return 0;

}