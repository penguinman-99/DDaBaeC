#pragma once
#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture {
private:
	std::string m_name;
	Teacher teacher;
	std::vector<Student> students;

public:
	Lecture(const std::string& name_in) 
	:m_name(name_in){

	}
	~Lecture() {

	}
	void assignTeacher(const Teacher& const teacher_input) {
		teacher = teacher_input;

	}

	void registerStudent(const Student& const student_input) {
		students.push_back(student_input);

	}
	void study() {
		std::cout << m_name << " study " << std::endl << std::endl;
		for (auto& e : students)
			e.setIntel(e.getIntel() + 1);

	}
	friend std::ostream& operator <<(std::ostream& out, const Lecture& lecture) {
		out << "lecture name:" << lecture.m_name << std::endl;
		out << lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << element << std::endl;
		return out;
	}

};