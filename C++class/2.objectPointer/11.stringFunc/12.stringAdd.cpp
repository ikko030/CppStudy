#include <iostream>
#include <string>
using namespace std;
int main(){
    string a("I");
    string b(" love C++");

    a.append(b);
    
    cout << a << endl;

    string c(".");
    a.append(c);

    cout << a;
}