#include <iostream>	

using namespace std;
int g_i = 0;
//��������->main�Լ�->first->second������ ���� ���̴� ������ ���α׷� ó��
//����: �������� �޸𸮰� �۾� ū ���� �迭 ������ ����
//-Stack Overflow
//Heap:���� �޸� ����(����� ũ��)


int second(int x) {
	return 2 * x;

}
int first(int x)
{
	int y = 3;
	return second(x + y);
}
int main() {
	int a = 1, b;
	b = first(a);
	cout << b << endl;


	return 0;

}