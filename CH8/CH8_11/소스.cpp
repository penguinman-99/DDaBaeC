#include <iostream>
#include <string>
using namespace std;
int generateID() {
	static int	s_id = 0;
	return ++s_id;
}
class Something {

public:
	class _init {
	public:
		_init() {
			s_value = 1024;
		}
	};

private:
	static int s_value;
	int m_value;
	static _init s_init;
public:
	//static 변수는 생성자 초기화 불가능.
	/*Something()
		:m_value(123),s_value(10)
	{}*/
	class _init {
	public:
		_init() {
			s_value = 1024;
		
		}
	};

	static int getValue() {
		return s_value;
		//static 변수는 this 포인터 사용불가능.
	
	}
	int temp() {
		return this->s_value;
	}
};

int Something::s_value = 10;
Something::_init Something::s_init;
int main() {
	
	cout << Something::getValue() << endl;
	Something s1,s2;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;
	int(Something:: * fptr1)() =&Something::temp;
	cout << (s2.*fptr1)() << endl;
	int(* fptr2)() = &Something::getValue;
	cout << fptr2() << endl;


	return 0;
}