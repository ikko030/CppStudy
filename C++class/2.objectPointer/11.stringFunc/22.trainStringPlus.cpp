#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout << "7+55+100+22 와 같이 덧셈 문자열을 아래에 입력하셍ㅕ." << endl;
    getline(cin,s,'\n');

    int sum = 0;
    int startIndex = 0;

    while(true){
        int fIndex = s.find('+', startIndex);
        if(fIndex == -1){   //+ 문자가 없다면
            string part = s.substr(startIndex);

            if(part=="") break;      //아무것도 안적으면 끝!
            cout << part << endl;
            sum += stoi(part);
            break;
        }    

        int count = fIndex - startIndex;
        string part = s.substr(startIndex, count);

        cout << part << endl;
        sum += stoi(part);
        startIndex = fIndex + 1;
    }
    cout << " 숫자들의 합은" << sum;
}