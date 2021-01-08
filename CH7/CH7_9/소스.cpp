#include <iostream>
#include <array>
//함수 포인터

using namespace std;
bool isEven(const int& number) {

	if (number % 2 == 0) return true;
}
bool isOdd(const int& number) {
	if (number % 2 == 1)	return true;
}
//int func(int x) {
//
//	return x;
//}
//int goo(int x) {
//
//	return 10;
//
//}
void print(const array<int, 10>& my_array,bool (*check_func)(const int&)) {
	for (auto ele : my_array) {
		if (check_func(ele)==true)
			cout << ele << endl;
	}

}


int main() {
	/*int(*fcnptr)(int) = func;
	fcnptr = goo;
	cout << fcnptr(5) << endl;
	cout << func << endl;*/
	array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };
	//함수 포인터의 활용

	print(my_array, isEven);
	


	return 0;

}