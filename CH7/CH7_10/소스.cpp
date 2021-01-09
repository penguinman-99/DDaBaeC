#include <iostream>	

using namespace std;
int g_i = 0;
//전역변수->main함수->first->second순으로 스택 쌓이는 식으로 프로그램 처리
//단점: 빠르지만 메모리가 작아 큰 정적 배열 선언을 못함
//-Stack Overflow
//Heap:동적 메모리 잡힘(사이즈가 크다)


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