#include <iostream>
using namespace std;

int main(){
    cout <<"입력할 정수의 개수는? >>";
    int n;
    cin >> n;

    if( n <= 0){
        return 0;
    }

    int *p = new int [n];       //크기가 n인 정수형 배열의 동적 할당

    if(!p){
        cout << " Not allocating memory" << endl;
        return 0;
    }

    for(int i=0; i<n;i++){
        cout << i+1 << "번째 정수:";
        cin >>p[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=p[i];
    }
    cout << "average = " << sum/n << endl;

    delete [] p;

}