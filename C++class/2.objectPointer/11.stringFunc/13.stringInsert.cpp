#include <iostream>
#include <string>
using namespace std;
int main(){
    string a("leade");
    string b("mon");

    a.insert(2,b);
    cout << a << endl;

    a.insert(5, " is Ewwwwwwwwww");
    cout << a << endl;

    a.replace(0,4,"kkkk");
    cout << a << endl;

}