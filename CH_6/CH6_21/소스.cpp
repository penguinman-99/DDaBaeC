#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> arr = { 1,2,3,4,5 };
	vector<int> arr2(10, 3);
	arr2.resize(5);
	for (auto& ele : arr2)
		cout << ele << endl;
	cout << arr2.size() << endl;


	return 0;
}