#include	<iostream>
#include	<fstream>
using namespace std;
class Point {
private:
	double m_x, m_y, m_z;

public:
	Point(double x_in = 0.0, double y_in = 0.0, double z_in = 0.0)
		: m_x(x_in), m_y(y_in), m_z(z_in) 
	{
	}
	
	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }
	friend std::ostream& operator << (std::ostream &out, Point &point) {
		out << point.m_x << " " << point.m_y << " " << point.m_z;
		return out;
	}
	friend std::istream& operator >> (std::istream& in, Point& point) {
		in >> point.m_x >> point.m_y >> point.m_z;
		return in;
	}

};

int main() {
	/*ofstream of("out.txt");
	Point p1(0.0, 0.1, 0.2),p2(3.4,1.5,2.0);
	
	cout << p1 << " " << p2 << endl;
	of << p1 << " " << p2 << endl;
	of.close();
	*/
	Point p1, p2;
	cin >> p1 >> p2;
	cout << p1 << " " << p2 << endl;

	
	return 0;
}