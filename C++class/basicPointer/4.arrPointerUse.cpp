#include <iostream>
using namespace std;

int main(){

    int n[10];
    int i;
    int *p;

    //배열 n에 값을 3의 배수로 초기화...
    for(i=0; i<10; i++)
        *(n+i) = i*3;

    p = n;  //포인터 p가 n을 가리킴
    for(i=0; i<10; i++){
        cout << *(p+i) << ' ';
    }
    cout << endl;

    //포인터 p를 이용 => 배열 n의 원소 값 2 증가
    for(i=0; i<10; i++){
        *p = *p +2;
        p++;        //p는 다음 원소의 주소로 증가
    }

    /*
    //배열 n 출력
    for(i=0; i<10; i++){
        cout << *(p+i) << " ";
    }
    cout << "\n";
    */                                  //이렇게 하면 쓰레기값이 나옴!      
                                        //이유1. 23줄에 p++;을 해서 포인터 p가 맨마지막 인덱스를 가리킴
                                        
    p =n;                               //이렇게 다시 설정해주거나      그냥 29번줄에 *(p+i)대신 n[i]해주면 됨 

    for(i=0; i<10;i++){
        cout << *(p+i) << " ";
    }   
    cout << endl;
}