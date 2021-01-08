#include <iostream>

using namespace std;
typedef int my_int;
void print(const char *x) {

}
void print(int x) {

}

int add(int x, int y) {
	return x + y;
}
double add(double x, double y) {
	return x + y;

}
//반환형식으로만 구분되면 오버로딩 불가능

int getRandomValue() {

}
double getRandomValue() {

}

void get(int& x) {

}
void get(double& x) {


}
int main() {
	//동일한 이름을 가진 함수를 여러개만드는 것을 함수 오버로딩이라 한다.

	add(1, 2);
	add(3.0, 4.0);


}