#include	<iostream>
#include <vector>
#include <algorithm>
#include	<fstream>
using namespace std;
class Digit {
private:
	int m_digit;
public:
	Digit(int digit=0)
		:m_digit(digit){}
	//prefix
	Digit& operator ++() {
		++m_digit;
		return *this;
	}
	Digit& operator --() {
		--m_digit;
		return *this;

	}
	//postfix
	Digit operator ++(int) {
		Digit temp(m_digit);
		++(*this);

		return temp;
	}
	friend ostream& operator <<(std::ostream& out, const Digit d_in) {
		out << d_in.m_digit;
		return out;
	}
};

int main() {
	int a = 10;
	Digit d1(10);
	cout << ++d1 << endl;
	cout << d1++ << endl;



	return 0;
}