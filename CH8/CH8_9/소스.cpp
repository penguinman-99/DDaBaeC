#include <iostream>
#include <string>
using namespace std;
class Something {
public:
	string m_value = "default";
	const string& getValue() const { 
		cout << "const version" << endl;
		return m_value; }
	string& getValue() {
		cout << "no const version" << endl;
		return m_value;
	}


};


int main() {
	Something sth;
	const Something st2;
	sth.getValue()=10;
	st2.getValue();//1004 XXXX


	return 0;
}