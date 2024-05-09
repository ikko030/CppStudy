#include <iostream>
using namespace std;

int main(){
    cout <<"i"<<"\t"<<"n"<<"\t"<<"refn"<<endl;
    int i=1;
    int n=2;
    int &refn=n;
    //1 2   2

    n=4;
    refn++;
    cout << i << "\t" << n << "\t" << refn << endl;
    //1 5   5

    refn = i;
    refn++;
    cout << i << "\t" << n << "\t" << refn << endl;
    //1 2   2

    int* p = &refn;     //p는 refn의 주소를 가짐
    *p = 20;
    cout << i << "\t" << n << "\t" << refn << endl;
    //1 20  20
                    
    cout << *p<< endl;              //20
    cout << &refn << endl;          //주소
    cout << refn;                   //n
}