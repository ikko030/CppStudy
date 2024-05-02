#include <iostream>
using namespace std;

//생성된 반대순으로 객체가 소멸된다.

class Circle{
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();      //소멸자 선언
    double getArea();
};

Circle::Circle():Circle(1){}

Circle::Circle(int r){
    radius = r;
    cout << "radius = "<< radius << "인 원 생성" <<endl;
}

Circle::~Circle(){
    cout << "radius = "<< radius << "인 원 소멸"<< endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(){
    Circle donut;
    Circle pizza(30);

    return 0;       //main()함수가 종료하면 객체가 소멸된다.
}
