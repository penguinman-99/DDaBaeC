#include	<iostream>
#include <cassert>
#include <vector>
#include <algorithm>
class B;

using namespace std;
class A {
private:
	int m_value = 1;
	friend class B;

};

class B {
private:
	int m_value = 2;
	void dosomething(A& a) {
		cout << a.m_value << endl;
	}
};

int main() {
	A a;
	dosomething(a);



	return 0;
}