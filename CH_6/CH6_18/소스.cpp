#include <iostream>	


using namespace std;

enum Type {
	INT,
	FLOAT,
	CHAR

};
int main() {
	//void pointer, generic pointer

	int		i = 5;
	float	f=3.0;
	char	c = 'a';
	void* ptr = nullptr;
	ptr = &i;
	ptr = &f;
	ptr = &c;
	int* ptr_i = &i;
	//������ ������ �Ҽ�����->void�Ƿ�, �ڷ��� ������ �� �� ���� ����
	//cout << ptr + 1 << endl;
	Type type = FLOAT;

	cout << *static_cast<float*>(ptr) << endl;

}