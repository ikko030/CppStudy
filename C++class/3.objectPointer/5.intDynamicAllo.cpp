#include <iostream>
using namespace std;
//동적 메모리 할당/반환을 위해 new와 delete 연산자를 사용한다!
int main(){
    int *p = new int;
    if(!p){
        cout << "Not Allocating memory";
        return 0;
    }
    *p = 5;
    int n =*p;
    
    cout <<"*p = "<<*p << endl;
    cout <<"n = "<< n << endl;

    delete p;
}