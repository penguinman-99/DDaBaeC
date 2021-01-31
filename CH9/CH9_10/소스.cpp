#include	<iostream>
#include	<fstream>
#include	<cassert>
using namespace std;
class Fraction {
private:
	int m_num;
	int m_deno;


public:
	Fraction(char) = delete;
	explicit Fraction(int num = 0, int den = 1)
		:m_num(num), m_deno(den) {
		assert(den != 0);
	}
	Fraction(const Fraction& fraction)
		:m_num(fraction.m_num), m_deno(fraction.m_deno) {
		cout << "copy constructor called" << endl;

	}
	friend std::ostream& operator <<(std::ostream& out, Fraction& f) {
		out << f.m_num << "/" << f.m_deno;
		return out;
	}
};
void doSomething(Fraction frac) {
	cout << frac << endl;
}

int main() {
	//Fraction frac2('c');

	Fraction frac(7);
	doSomething(frac);
	//explicit 사용시 
	//doSomething(7); 사용불가

	return 0;
}