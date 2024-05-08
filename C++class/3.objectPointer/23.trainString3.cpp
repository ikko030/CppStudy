#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout << "여러 줄의 문자열을 입력하세용!(입력 끝 : &) >>" << endl;
    getline(cin,s,'&');
    cin.ignore();       //'&' 제거하는 코드입니다

    string f, r;
    cout << endl << "find: ";
    getline(cin,f,'\n');

    cout << "replace: ";
    getline(cin,r,'\n');

    int startIndex = 0;
    while(true){
        int fIndex = s.find(f,startIndex);     //f를 startIndex부터 찾으세요
        if(fIndex == -1)    break;
        s.replace(fIndex,f.length(),r);         //fIndex ~ f.length()까지 r로 대체
        startIndex = fIndex + r.length();       
    }

    cout << s << endl;
}