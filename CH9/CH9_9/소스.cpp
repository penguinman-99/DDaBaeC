#include	<iostream>
#include	<fstream>
#include	<cassert>
using namespace std;
class Fraction {
private:
	int m_num;
	int m_deno;


public:
	Fraction(int num = 0, int den = 1)
		:m_num(num), m_deno(den) {
		assert(den != 0);
	}
	Fraction(const Fraction& fraction)
	:m_num(fraction.m_num),m_deno(fraction.m_deno){
		cout << "copy constructor called" << endl;

	}
	friend std::ostream& operator <<(std::ostream& out, Fraction& f) {
		out << f.m_num << "/" << f.m_deno;
		return out;
	}
};
Fraction doSomething() {
	Fraction temp(1, 2);
	return temp;
}

int main() {

	return 0;
}