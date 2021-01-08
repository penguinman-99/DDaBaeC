#include <iostream>
#include <array>
#include <tuple>
using namespace std;
tuple<int, double> getTuple(){

	int a = 10;
	int d = 3.14;
	return std::make_tuple(a, d);

}


//
//int& getValue(int x) {
//	int value = x * 2;
//	return value;
//
//}
//int& get(array<int, 100>& my_array, int ix) {
//
//	return my_array[ix];
//}
//struct S {
//	int a, b, c, d;
//
//};
//S getstruct() {
//
//	S my_s{ 1,2,3,4 };
//
//}

int main() {
	//int value = getValue(5);
	//cout << value << endl;
	//array<int, 100> my_array;

	//get(my_array, 30) = 1234;
	//S my_s = getstruct();
	tuple<int, double> my_tp = getTuple();


	return 0;

}