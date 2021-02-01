#include	<iostream>
#include <cassert>

using namespace std;
class Mystring {
public:
	char* m_data = nullptr;
	int m_length = 0;
public:
	Mystring(const char *source = "") {
		assert(source);
		//deep copy
		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];
		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];
		m_data[m_length - 1] = '\0';

	}
	Mystring(const Mystring& source) {
		cout << "copy constructor" << endl;
		m_length = source.m_length;
		if (source.m_data != nullptr) {
			m_data = new char[m_length];
			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else {
			m_data = nullptr;

		}
		
	}
	Mystring& operator =(const Mystring& source) {
		/*
			shallow copy
			this->m_data=source.m_data;
			this->m_length=source.m_length;
		
		*/
		
		cout << "assigment" << endl;
		//자가대입 방지

		if (this == &source)
			return *this;
		delete[] m_data;
		m_length = source.m_length;
		if (source.m_data != nullptr) {
			m_data = new char[m_length];
			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];

		}
		else {
			m_data = nullptr;
		}
		return *this;
	}

	~Mystring() {
		delete[] m_data;

	}
	char* getString() { return m_data; }
	int getLength() { return m_length; }
};


int main() {
	Mystring hello("hello");
	cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;
	{
		Mystring copy = hello;
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;

	}

	cout << hello.getString() << endl;


}