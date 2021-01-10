#include <iostream>

using namespace std;
class Second {
public:
	Second() {
		cout << "second constructor is starting" << endl;
	}
};
class First {
	Second sec;
public:
	First() {
		cout << "first is starting" << endl;
	}
};

class Fraction {

private:
	int m_numerator;
	int m_denominator;
public:
	//Fraction(){} is hiding
	Fraction(const int& num_in=1,const int& deno_in=1) {
		m_numerator = num_in;
		m_denominator = deno_in;
	}
	void print() {
		cout << m_numerator << "/" << m_denominator << endl;
	}

};
int main() {
	Fraction frac = Fraction{ };
	//Fraction frac(1,3);
	frac.print();
	First fir;
	return 0;

}