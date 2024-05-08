//getline은 공백 문자를 입력할 수 있다.
//cin은 공백 문자 입력되면, 그 전에 있는 문자까지 문자열로 인식 끝...
#include <iostream>
#include <string>
using namespace std;

int main(){
    string names[5];

    for(int i=0; i<5; i++){
        cout << "name = ";
        getline(cin,names[i],'\n');
    }

    string latter = names[0];
    for(int i=0;i<5;i++){
        if(latter < names[i]){
            latter = names[i];
        }
    }

    cout << "사전에서 가장 뒤에 나오는 문자열은 "<< latter;
}