#include <iostream>

using namespace std;
int foo(int x, int y);
//int x, int y: ������ os�� ��ȯ

int foo(int x, int y) {
	//int x,int y;

	return x + y;

}//x and y are destroyed here

int main() {
	int x = 1, y = 2;

	foo(6, 7);//6,7: arguments

	foo(x, y + 1);

}