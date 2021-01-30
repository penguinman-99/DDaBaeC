#include <iostream>
#include <string>
using namespace std;
class A;
class B {
private:
	int m_value = 2;
public:
	void does(A& a);
};

class A
{
private:
	int m_value = 1;
	friend void B::does(A& a);
};
void B::does(A& a)
{
	cout << a.m_value << endl;
}

int main() {
	A a;
	B b;

	b.does(a);
	return 0;
}