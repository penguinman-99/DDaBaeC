#include <iostream>
#include <string>
using namespace std;


//class A
//{
//public:
//	int m_value;
//
//	A(const int& input)
//	:m_value(input){
//		cout << "constructor" << endl;
//	}
//	~A() {
//		cout << "destructor" << endl;
//	}
//	void print() {
//		cout << m_value << endl;
//	}
//};
class Cents {
private:
	int m_cents;
public:
	Cents(int cents) {
		m_cents = cents;
	}
	int getcents() const {
		return m_cents;
	}

};
Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getcents() + c2.getcents());
}

int main() {
	//익명 개체
	cout << add(Cents(6), Cents(8)).getcents()<<endl;
	cout << int(6) + int(8) << endl;
	return 0;
}