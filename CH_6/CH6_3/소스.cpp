#include <iostream>
using namespace std;

int main() {
	const int num_stu = 5;
	int score[num_stu] = { 100,50,92,76,54 };
	int max_score = 0;
	int result = 0;
	//��հ� �ְ����� ����ϴ� �ҽ�
	for (int i = 0; i < num_stu; i++) {
		result += score[i];
		max_score = (max_score < score[i] ? max_score = score[i] : max_score);
	}
	cout << result << " " << result / 5 << " " << max_score;





}