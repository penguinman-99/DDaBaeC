#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

enum students {
    //0,1,2
    kim,
    park,
    lee,
};
struct info {
    int length;
    int width;

};
void dosomething(int arr[]) {
    cout << &arr << endl;
    cout << &arr[0] << endl;
    //����: �����Լ� arr �ǹ̰� �ƴ϶� �ش� �迭�� ������ ������ ������ ���°�.
    //4byte
    cout << "size in func" << sizeof(arr) << endl;
}

int main()
{
    //�迭�� �ʱ�ȭ�ϴ� �����
    int arr[20] = { 1,2,3, };
    //���Ź��� Ȱ���� �ʱ�ȭ
    int arr_usingEnum[lee] = { 1,2 };
    /*
        cin���� �迭�� ũ�⸦ �Է¹ް� �������� �����Ҵ��� ���ų� ���ʿ� ū ���ڸ� �����Ѵ�.
        int *num=new int[cin_number];



    */
    cout << &arr << endl;

    dosomething(arr);
    //80byte
    cout << "size in main" << sizeof(arr) << endl;
    //����ü�� �̿��Ͽ� �迭�� �� ���� �ִ�.
    info Person_info[10];

    Person_info[0].length = 123;

    return 0;
}