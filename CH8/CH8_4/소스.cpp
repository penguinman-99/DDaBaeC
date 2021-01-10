#include <iostream>
#include <string>
#include <vector>	
using namespace std;
class B {
private:
	int m_b;
public:
	B(const int& m_b_in)
		:m_b(m_b_in){}

};
class Something {
private:
	int	m_i;
	double m_d;
	char m_c;
	int m_arr[5];
	B m_b;
public:
	Something()
		:m_i(6), m_d(3.14), m_c('a'), m_arr{ 1,2,3,4,5 },m_b(1) {

	}
	void print() {
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (auto& ele : m_arr)
			cout << ele << " ";
		cout << endl;

	}
};
int main() {
	Something str;
	str.print();

	return 0;

}