#include <iostream>

using namespace std;

//child ȣ��� mother class�� �����ڵ� ���� ȣ����(�ֺ��)
class Mother
{
	//protected: �ڱ�� �ڽĿ��� ��� 
private:
	int m_i;
public:

	Mother(const int& i_in=0)
		:m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}
	void setValue(const int& i_in)
	{
		m_i = i_in;
	}
	int getValue() {
		return m_i;
	}
	

};
class Child :public Mother //derived class
{
private:
	double m_d;

public:
	Child(const int& i_in,const double& d_in)
		:Mother(i_in),m_d(d_in)
	{
	
	}

	void setValue(const int& i_in, const double& d_in) {
		Mother::setValue(i_in);
		m_d = d_in;
	}
	void setValue(const	double& d_in)
	{
		m_d = d_in;
	}
	double getValue() {
		return m_d;
	}

};

class Daughter :public Mother {
private:

public:

};
int main() {
	Mother mother(111);
	mother.setValue(1024);
	cout << mother.getValue() << endl;
	Child child(1024, 128);

	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;

}