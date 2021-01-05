#include <iostream>	
#include <limits>
#include <vector>	
using namespace std;

int main() {
	vector<int> fibonacci = { 0,1,1,2,3,5,8,13,21,34,55,89 };
	for (int& number : fibonacci)
		number*= 10;
	int max_num = numeric_limits<int>::lowest();
	for (const auto& number : fibonacci) {
		max_num = max(max_num, number);

	}
	cout << max_num << endl;


	//output
	for (const int &number : fibonacci)
		cout << number << " ";
	cout << endl;


	return 0;
}