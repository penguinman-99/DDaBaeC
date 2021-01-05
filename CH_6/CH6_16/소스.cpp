#include <iostream>
using namespace std;
struct Person {

	int age;
	double weight;

};
int main() {
	Person person;
	person.age = 5;
	person.weight = 30;

	Person& ref = person;
	ref.age = 15;
	ref.weight = 30;

	Person* ptr = &person;
	ptr->age = 60;
	(*ptr).age = 20;
	Person& ref2 = *ptr;




	return 0;
}