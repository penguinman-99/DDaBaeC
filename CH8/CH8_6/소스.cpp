#include <iostream>
#include <string>
using namespace std;
class Simple {
private:
	int m_id;

public:
	Simple(const int& id_in)
		:m_id(id_in) {
		cout << "constructor is begin" << m_id << endl;

	}
	//destructor
	~Simple() {
		cout << "destructor is begin" <<m_id<< endl;

	}
};
class Arr {
private:
	int* m_arr = nullptr;
	int m_length = 0;
public:
	Arr(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];
	}
	int size() {
		return m_length;
	}
	~Arr() {
		delete [] m_arr;
	}
};


int main() {
	while (1) {
		Arr my_int_arr(10000);
		
	}



	return 0;
}