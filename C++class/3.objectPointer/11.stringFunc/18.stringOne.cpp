#include <iostream>
#include <string>
using namespace std;
int main(){
    string f("I love CPP");

    //표현1
    char ch1 = f.at(7);
    cout << ch1 << endl;

    //표현2
    char ch2 = f[7];
    cout << ch2 << endl;
    
    //문자 바꾸기
    f[7] = 'D';
    cout << f << endl;

    //마지막 문자 가지고 오기
    char ch3 = f.at(f.length()-1);
    cout << ch3 << endl;

}