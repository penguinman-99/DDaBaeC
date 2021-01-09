#include <iostream>
#include <cassert>	
#include <array>
#include <string>

using namespace std;


int main(int argc,char *argv[]) {
	for (int cnt = 0; cnt < argc; ++cnt) {
		string argv_single = argv[cnt];
		cout << argv_single << endl;


	}

	return 0;

}