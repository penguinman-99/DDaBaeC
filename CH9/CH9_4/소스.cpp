#include	<iostream>
#include <vector>
#include <algorithm>
#include	<fstream>
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
	friend std::ostream& operator<<(std::ostream& out, Cents& c1) {
		out << c1.m_cents;
		return out;
	}
	//warning: ?, :: sizeof etc can't do this
	//연산자 우선순위는 바꿀 수 없음.
	friend bool operator == (const Cents& c1, const Cents& c2) {
		return c1.m_cents == c2.m_cents;
	}
	friend bool operator != (const Cents& c1, const Cents& c2) {
		return c1.m_cents != c2.m_cents;
	}
	friend bool operator <(const Cents& c1, const Cents& c2) {
		return c1.m_cents < c2.m_cents;
	}
	friend bool operator >(const Cents& c1, const Cents& c2) {
		return c1.m_cents > c2.m_cents;
	}

};


int main() {
	Cents cents1(6);
	Cents cents2(10);
	if (cents1 == cents2) {
		cout << "equal" << endl;
	}
	else if (cents1 != cents2) {
		cout << "not equal" << endl;

	}
	vector<Cents> arr(20);
	for (unsigned i = 0; i < 20; ++i) {
		arr[i].getcents() = i;

	}
	std::random_shuffle(begin(arr) , end(arr));
	for (auto& e : arr)
		cout << e << " ";
	cout << endl;
	std::sort(arr.begin(), arr.end());
	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	return 0;
}