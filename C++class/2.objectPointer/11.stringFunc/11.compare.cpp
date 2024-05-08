#include <iostream>
#include <string>
using namespace std;
int main(){
    string name = "Kitae";
    string alias = "Kito";

    int res = name.compare(alias);
    if(res==0)cout<<"same";
    else if(res < 0) cout << name << " < "<< alias << endl;
    else cout << alias << " < " << name << endl;
}