#include <iostream>
#include <string>
#include "Calc.h"
using namespace std;

int main() {
	Calc cal(10);
	cal.add(10).sub(3).mult(3).print();
	return 0;
}