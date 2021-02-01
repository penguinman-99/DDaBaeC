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
class Dollar {
private:
	int m_dollar;
public:
	Dollar(int dollar_in=0)
	{
		m_dollar = dollar_in;
	}
	Dollar operator +(const Dollar& d_in) {
		return Dollar(this->m_dollar + d_in.m_dollar);
	}
	friend std::ostream& operator <<(std::ostream& out,const Dollar& d) {
		out << d.m_dollar;
		return out;
	}
	int getdollar() {
		return m_dollar;
	}
};


int main() {
	Cents cents1(6);
	Cents cents2(8);
	Dollar d1(10);
	Dollar d2(30);
	cout << (d1 + d2).getdollar() << endl;
	cout << !cents1 << endl;


}