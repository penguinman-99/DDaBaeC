#include <iostream>	
#include <cstring>
using namespace std;
int main() {
	//C style:�ڿ� \0�� �������.
	char mystring[255];

	//���ڿ��� ���Ḧ �ǹ�
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
	//strcmp: ������ 0 �Ȱ����� -1..
	return 0;
}