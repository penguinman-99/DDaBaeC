#pragma once
#include <iostream>
class Calc {

private:
	int m_value;
public:
	Calc(const int& init_value)
		:m_value(init_value) {}
	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);
	void print() {
		std::cout << m_value << std::endl;
	}

};
