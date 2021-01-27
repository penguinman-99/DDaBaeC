#include <iostream>
#include <string>
using namespace std;
int generateID() {
	static int	s_id = 0;
	return ++s_id;
}
class Something {
public:
	static int s_value=1;

};
int Something::s_value = 1; //define in cpp


int main() {
	cout << Something::s_value << " " <<&Something::s_value << endl;
	Something st1;
	Something st2;
	Something st3;
	st1.s_value = 2;
	cout << st1.s_value << " " << &st1.s_value << endl;
	cout << st2.s_value << " " << &st2.s_value << endl;
	cout << st3.s_value << " " << &st3.s_value << endl;
	Something::s_value = 1024;
	cout << Something::s_value << " " << &Something::s_value << endl;

	return 0;
}