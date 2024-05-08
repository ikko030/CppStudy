#include <iostream>
#include <string>
using namespace std;
int main(){
    string a("I love CPP");
    cout << a << endl;

    a.erase(0,7);
    cout << a << endl;

    a.clear();
    cout << a << endl;
}