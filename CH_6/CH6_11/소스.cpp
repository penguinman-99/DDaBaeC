#include <iostream>

using namespace std;

int main(){
	//int var;
	//var=7; 과 같음.
	int* ptr = new int;
	*ptr = 7;
	//동적 배열은 heap으로 들어감.
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