#include <iostream>	
using namespace std;

int main() {
	const int num_rows = 3;
	const int num_col = 5;

	for (int i = 0; i < num_rows; i++) {

		for (int j = 0; j < num_col; j++) {
			cout << '[' << i << ']' << '[' << j << ']' << '\t';

		}
		cout << endl;
	}
	cout << endl;
	//rows칸은 생략가능

	int arr[num_rows][num_col] = {
	};
	for (int i = 0; i < num_rows; i++) {
		for (int j = 0; j < num_col; j++) {
			//배열 한칸당 4byte

			cout << arr[i][j] << '\t';
		}
		cout << endl;

	}


}