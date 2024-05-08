#include <iostream>
#include <string>
using namespace std;

int main(){
    //substr() == 발췌
    
    string a = "I love CPP";
    string b = a.substr(2,4);   //a의 인덱스 2~4까지의 문자 리턴
    string c = a.substr(2);     //a의 인덱스 2~끝까지 문자 리턴

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}