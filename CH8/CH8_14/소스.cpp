#include <iostream>
#include <string>
using namespace std;

class Fruit {
public:
	enum FruitType {
		APPLE,
		BANANA,
		CHERRY,
	};
	class InnerClass {

	};
	struct InnerStruct {

	};
private:
	FruitType m_type;
public:
	Fruit(FruitType type)
		:m_type(type) {

	}
	FruitType getType() {
		return m_type;
	}
};
int main() {
	Fruit apple(Fruit::APPLE);
	if (apple.getType() == Fruit::APPLE) {
		cout << "this is APPLE" << endl;
	}
	return 0;
}