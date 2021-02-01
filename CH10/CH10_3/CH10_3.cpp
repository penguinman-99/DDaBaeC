#include <iostream>	
#include <vector>
#include <string>
#include "Lecture.h"
using namespace std;

int main() {
	Student std1("jack jack", 0);
	Student std2("Dash", 1);
	Student std3("Violet", 2);
	Teacher teacher1("Prof.hong");
	Teacher teacher2("prof.good");

	Lecture lec1("introduction to computer pro");
	lec1.assignTeacher(teacher1);
	lec1.registerStudent(std1);
	lec1.registerStudent(std2);
	lec1.registerStudent(std3);
	
	Lecture lec2("computational thinking");
	lec2.assignTeacher(teacher2);
	lec2.registerStudent(std1);
	cout << lec1 << endl;
	cout << lec2 << endl;
	lec2.study();
	cout << lec1 << endl;
	cout << lec2 << endl;



	return 0;

}