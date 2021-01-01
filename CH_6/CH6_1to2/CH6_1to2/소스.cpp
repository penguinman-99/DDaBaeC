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
    //주의: 메인함수 arr 의미가 아니라 해당 배열의 포인터 변수를 가지고 오는것.
    //4byte
    cout << "size in func" << sizeof(arr) << endl;
}

int main()
{
    //배열을 초기화하는 방법들
    int arr[20] = { 1,2,3, };
    //열거문을 활용한 초기화
    int arr_usingEnum[lee] = { 1,2 };
    /*
        cin으로 배열의 크기를 입력받고 싶을때는 동적할당을 쓰거나 애초에 큰 숫자를 선언한다.
        int *num=new int[cin_number];



    */
    cout << &arr << endl;

    dosomething(arr);
    //80byte
    cout << "size in main" << sizeof(arr) << endl;
    //구조체를 이용하여 배열을 쓸 수도 있다.
    info Person_info[10];

    Person_info[0].length = 123;

    return 0;
}