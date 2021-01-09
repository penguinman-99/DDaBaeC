#include <iostream>

using namespace std;

int main() {
	
	//violated assumption
	//의도한 것과 전혀 다르게 씀
	string hello = "my name is jack jack";
	int ix;
	cin >> ix;
	if (ix >= 0 && ix <= hello.size() - 1) {
		cout << hello[ix] << endl;
	
	}
	else {
		cout << "error" << endl;

	}

	return 0;

}