#include <iostream>
#include <string>
using namespace std;
class Simple {
private:
	int m_id;
public:
	Simple(int id) {
		//this-> is hiding
		this->setID(id);
		cout << this << endl;
	}
	void setID(int id) {
		m_id = id;	
	}
	int getID() {
		return m_id;
	}
};
class Calc {

private:
	int m_value;
public:
	Calc(const int& init_value) 
		:m_value(init_value){}
	Calc& add(int value) {
		m_value += value;
		return *this;
	}
	Calc& sub(int value) {
		m_value -= value;
		return *this;
	}
	Calc& mult(int value) {
		m_value *= value;
		return *this;
	}
	void print() {
		cout << m_value << endl;
	}

};


int main() {
	//Simple s1(1), s2(2);
	//s1.setID(2);
	//s2.setID(4);
	//cout << &s1 << " " << &s2 << endl;
	Calc c1(3);
	c1.add(5).sub(1).mult(3);
	Calc& temp1 = c1.add(10);

	temp1.print();
	c1.print();
	return 0;
}