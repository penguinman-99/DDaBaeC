#include <iostream>
#include <string>
#include <vector>	
using namespace std;
class Date {
private:
	int m_month;
	int m_day;
	int m_year;
public:
	void setDate(const int& month, const int& day, const int& year) {
		m_month = month;
		m_day = day;
		m_year = year;
	}
	void printDate() {
		cout << m_month << " " << m_day << " " << m_year << endl;
	}
	int getDay() {
		return m_day;
	}
	void copy(const Date& origin) {
		m_month = origin.m_month;
		m_day = origin.m_day;
		m_year = origin.m_year;

	}
};
int main() {
	Date today;
	//impossible when private today.m_month = 30;
	today.setDate(3, 15, 20225);
	today.printDate();
	Date copy;
	
	return 0;

}