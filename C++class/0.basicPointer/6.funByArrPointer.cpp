#include <iostream>
using namespace std;

bool equalArray(int *p, int *q, int size);

int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,4,5};

    if(equalArray(a,b,5))       cout << "equal"<< endl;
    else                        cout << "not equal" << endl; 
}

bool equalArray(int *p, int *q, int size){

    for(int i=0; i<size; i++){
        if(*p != *q)    return false;
        p++;        //다음 배열로 이동!
        q++;
    }

    return true;

}
/*
16줄 for문의 if문을 if(p[i] != q[i])로도 바꿀 수 있음! 
*/