#include <iostream>
using namespace std;

//지역 객체는 함수가 실행될 때 생성하고, 
//                  종료될 때 소멸한다.

//전역 객체는 프로그램이 로딩될 때 생성되고,
//              main()이 종료 => 프로그램 메모리가 사라질 때 소멸된다.

class Circle{
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};

Circle::Circle():Circle(1){}

Circle::Circle(int r){
    radius = r;
    cout << "radius = "<<radius <<"인 원 생성"<<endl;
}
Circle::~Circle(){
    cout <<"radius ="<<radius<<"인 원 소멸"<<endl;
}

double Circle::getArea(){
    return 3.12 * radius * radius;
}

//전역 객체
Circle globalDonut(1000);
Circle globalPizza(2000);


void f(){
    //지역 객체
    Circle fDonut(100);
    Circle fPizza(200);
}

int main(){
    //지역 객체
    Circle mainDonut;
    Circle mainPizza(30);
    f();
}