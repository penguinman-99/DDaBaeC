#include <iostream>	


using namespace std;
//아주 간단한 함수인데 속도를 빠르게 하고 싶을때...

inline int min(int x, int y) {
	return x > y ? y : x;

}
int main() {
	cout << min(5, 6) << endl;
	//함수가 아닌 아래 식과 유사하게 작동됨->더빠름

	cout << (5 > 6 ? 6 : 5) << endl;
	return 0;

}