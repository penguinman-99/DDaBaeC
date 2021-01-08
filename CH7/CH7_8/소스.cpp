#include <iostream>
//매개변수의 기본값
using namespace std;
//미리 정의시 선언 함수에는 기본값을 넣으면 안됨.
void func(int x = 10, int y = 20, int z = 30);

void func(int x, int y, int z) {

}





//default parameter
void print(int x=10) {

	cout << x << endl;


}


//impossible: 가운데에만 값이 들어가는 경우
//void print(int x, int y = 20, int z) {
//	
//};
int main() {
	print();


	return 0;

}