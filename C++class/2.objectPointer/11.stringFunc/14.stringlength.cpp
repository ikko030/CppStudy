#include <iostream>
#include <string>
using namespace std;
int main(){
    string a("I study C++");

    int len = a.length();
    int size = a.size();
    int capacity = a.capacity();
    cout << len << endl << size << endl << capacity;
}