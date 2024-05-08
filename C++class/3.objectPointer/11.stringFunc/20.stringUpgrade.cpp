#include <iostream>
#include <string>
using namespace std;
int main(){
    string a = "hello";

    for(int i=0; i<a.length(); i++){
        a[i] = toupper(a[i]);
    }

    cout << a << endl;

    if(isdigit(a[0]))   cout << "number" << endl;
    else if(isalpha(a[0]))  cout << "alphabet" << endl;

    //연속적인 스트링 다루기
    string k("a");
    k.append("b").append("c").append("d");
    cout << k;

}