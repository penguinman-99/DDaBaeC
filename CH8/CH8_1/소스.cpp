#include <iostream>
#include <string>
#include <vector>	
using namespace std;
//Friend: name,address,age,height,weight
class Friend_profile {
	public://access specifier(public,private,protected)
		string m_name;
		string address;
		int age;
		double height;
		double weight;
	
	void print() {
		cout << m_name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
};

int main() {

	vector<Friend_profile> myfriend(10);
	//instanciation
	myfriend[0]={ "kim","town",15,34,33 };
	myfriend[0].print();
	

	return 0;

}