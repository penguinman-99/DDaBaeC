#include <iostream>
#include <array>	
#include <algorithm>
using namespace std;
void printlength(const array<int,5>& my_arr) {

	cout << my_arr.size() << endl;

}
int main() {

	std::array<int, 5> my_arr = { 6,10,5,3,50 };
	cout << endl;
	sort(my_arr.begin(), my_arr.end());
	for (auto& a : my_arr)
		cout << a << " ";


	return 0;

}