#include <iostream>	
#include <cstring>
using namespace std;
int main() {
	//C style:뒤에 \0이 들어있음.
	char mystring[255];

	//문자열의 종료를 의미
	cin.getline(mystring,255);

	//mystring[4] = '\0';
	int idx = 0;
	while(1) {
		if (mystring[idx] == '\0')
			break;

		cout << mystring[idx] << " " << (int)mystring[idx] << endl;
		++idx;
	}
	char source[]="copy that";
	strcpy_s(source,mystring);
	cout << source << endl;
	//strcmp: 같으면 0 안같으면 -1..
	return 0;
}