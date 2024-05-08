#include <iostream>
#include <string>
using namespace std;
int main(){
    string e ="I love love CPP";

    int index = e.find("love");
    cout << index << endl;

    index = e.find("love",index+1);     //인덱스 3부터 검색
    cout << index << endl;

    index = e.find("C#");                //발견x => -1 리턴
    cout << index << endl;

    index = e.find('v', 7);
    cout << index << endl;         
}