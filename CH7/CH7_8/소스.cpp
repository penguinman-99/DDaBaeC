#include <iostream>
//�Ű������� �⺻��
using namespace std;
//�̸� ���ǽ� ���� �Լ����� �⺻���� ������ �ȵ�.
void func(int x = 10, int y = 20, int z = 30);

void func(int x, int y, int z) {

}





//default parameter
void print(int x=10) {

	cout << x << endl;


}


//impossible: ������� ���� ���� ���
//void print(int x, int y = 20, int z) {
//	
//};
int main() {
	print();


	return 0;

}