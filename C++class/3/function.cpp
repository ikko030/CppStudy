#include <iostream>
using namespace std;

bool isMultiple(int x, int y) {    //�Ű������� �ϳ��� ����Ÿ���� �������
    if (y % x == 0) return true;       //return�� ������ {}�ʿ� ������ ����
    else return false;
}

int main() {
    int a, b;                    //int a, int b;�� �ȵ�! 
    cin >> a >> b;
    if (isMultiple(a, b)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;

}