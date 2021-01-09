#include <iostream>
#include <cassert>	
#include <array>

using namespace std;
void printvalue(const array<int, 5>& my_arr,const int& ix) {
	assert(ix >= 0 && ix <= my_arr.size()-1);
	cout << my_arr[ix] << endl;
}
int main() {
	array<int, 5> my_arr{ 1,2,3,4,5 };

	printvalue(my_arr, 100);
	//static: 변수가 변할 수 있는 경우 사용할 수 없음, 뒤에 문장 추가가능
	const int x = 5;
	static_assert(x == 5,"x should be 5!");



	return 0;

}