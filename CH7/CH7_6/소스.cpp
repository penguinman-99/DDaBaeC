#include <iostream>	


using namespace std;
//���� ������ �Լ��ε� �ӵ��� ������ �ϰ� ������...

inline int min(int x, int y) {
	return x > y ? y : x;

}
int main() {
	cout << min(5, 6) << endl;
	//�Լ��� �ƴ� �Ʒ� �İ� �����ϰ� �۵���->������

	cout << (5 > 6 ? 6 : 5) << endl;
	return 0;

}