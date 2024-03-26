#include <iostream>
using namespace std;

bool isMultiple(int x, int y) {    //매개변수는 하나씩 변수타입을 적어야함
    if (y % x == 0) return true;       //return만 적으면 {}필요 없나봄 ㅎㅎ
    else return false;
}

int main() {
    int a, b;                    //int a, int b;는 안됨! 
    cin >> a >> b;
    if (isMultiple(a, b)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;

}