#include <iostream>
using namespace std;

int main() {
	int value = 5;
	int value2 = 6;
	const int* ptr = &value;
	//������ �ּҰ� �ٲ� �� ����
	int* const ptr2 = &value;
	//�ּҰ���, �ǰ��� �ٲ� �� ����
	const int* const ptr3 = &value;




	return 0;

}