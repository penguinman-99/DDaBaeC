#include	<iostream>
using namespace std;
class Cents {
private:
	int m_cents;
public:
	Cents(int cents = 0) {
		m_cents = cents;
	}
	int getcents() const {
		return m_cents;
	}
	int& getcents() {
		return m_cents;
	}
	Cents operator +(const Cents& c2)
	{
		return Cents(this->m_cents + c2.m_cents);

	}
	Cents operator -() const {
		return Cents(-m_cents);
	}
	bool operator !() const {
		//!Cents(...) 
		return (m_cents == 0) ? true : false;

	}
	friend std::ostream& operator <<(std::ostream& out,const Cents &c) {
		out << c.m_cents;
		return out;
	}
	//warning: ?, :: sizeof etc can't do this
	//연산자 우선순위는 바꿀 수 없음.
};



int main() {
	Cents cents1(6);
	Cents cents2(8);
	cout << !cents1 << endl;


}