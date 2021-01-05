#include <iostream>
using namespace std;

int main() {
	int value = 5;
	int value2 = 6;
	const int* ptr = &value;
	//포인터 주소값 바꿀 수 없음
	int* const ptr2 = &value;
	//주소값도, 실값도 바꿀 수 없음
	const int* const ptr3 = &value;




	return 0;

}