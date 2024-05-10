#include <iostream>
using namespace std;

char& find(char s[], int index){
    return s[index];
}

int main(){
    char name[] = "Mike";
    cout << name << endl;

    find(name,0) = 'S';         // M -> S
    cout << name << endl;

    char& ref = find(name,2);   // ref -> k
    ref = 't';                  // ref -> t
    cout << name << endl;

}