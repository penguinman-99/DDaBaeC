#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	int m_id;
	string m_name;
public:
	/*Student(const string& name_in)
		:m_id(0),m_name(name_in){}
	not recommend	
	*/
	Student(const string& name_in)
		:Student(0,name_in){}

	Student(const int& id_in, const string& name_in)
	{
		init(id_in, name_in);
	}
	void print() {
		cout << m_id << " " << m_name << endl;
	}
	void init(const int& id_in, const string& name_in) {
		m_id = id_in;
		m_name = name_in;

	}
};
int main() {
	Student std(3, "ddd");
	Student std2("ash");

	std.print();
	/*Student st2("ash");
	st2.print();*/





	return 0;
}