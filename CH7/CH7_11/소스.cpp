#include <iostream>	
#include <vector>
using namespace std;
void printstk(const vector<int>& stk) {
	for (auto& e : stk)
		cout << e << " ";
	cout << endl;



}

int main() {
	//vector<int> v(10,3);
	////size,capacity:ũ��, �뷮
	////cout << v.capacity() << " " << v.size() << endl;
	////�̸� ������ �Ҵ��ϸ� �� ������.
	//v.reserve(100);
	//
	//for (auto& ele : v)
	//	cout << ele<<" ";
	//cout << endl;

	//cout<<v.size() <<" "<<v.capacity()<< endl;
	//int* ptr = v.data();
	//cout << ptr[2] << endl;
	vector<int> stk;
	stk.push_back(3);
	printstk(stk);
	stk.push_back(6);
	printstk(stk);

	stk.push_back(10);
	printstk(stk);
	stk.pop_back();
	printstk(stk);
	stk.pop_back();
	printstk(stk);
	stk.pop_back();




	return 0;

}