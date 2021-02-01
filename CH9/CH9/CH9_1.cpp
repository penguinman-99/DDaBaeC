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
	//warning: ?, :: sizeof etc can't do this
	//연산자 우선순위는 바꿀 수 없음.
};



int main() {
	Cents cents1(6);
	Cents cents2(8);
	Cents sum;
	cout << (cents1 + cents2+Cents(6)+Cents(10)).getcents() << endl;

}