#include <iostream>	
#include <vector>
using namespace std;
int result = 0;
int func(int a) {
	if (a ==1)
		return 0;
	else if (a == 2)
		return 1;
	else
		return func(a - 1) + func(a-2);

}
int main() {

	cout<<func(6);


	return 0;

}