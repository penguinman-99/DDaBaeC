#include	<iostream>
#include	<fstream>
using namespace std;
class Cents {
private:
	int m_cents;
public:
	Cents(int cents = 0) {
		m_cents = cents;
	}
	int getcents() { return m_cents; }
	void setcents(int cents) { m_cents = cents; }
	operator int() {
		cout << "cast here plz" << endl;
		return m_cents;
	}
};
class Dollar {
private:
	int m_dollar;
public:
	Dollar(const int& input):m_dollar(input) {
	}
	operator Cents() {
		return Cents(m_dollar*100);
	}
};

void printInt(const int& value) {
	cout << value << endl;

}
int main() {
	Dollar dol(2);
	Cents cents = dol;
	printInt(cents);

	return 0;
}