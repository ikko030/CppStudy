#include <iostream>
using namespace std;

//생성자 함수의 이름은 클래스 이름과 동일해야 함.

class Circle{
public:
    int radius;
    Circle();       //기본 생성자
    Circle(int r);  //매개 변수 있는 생성자
    double getArea();
};

Circle::Circle(){
    radius = 1;
    cout <<"radius = "<< radius<<" 원 생성"<<endl;
}
Circle::Circle(int r){
    radius = r;
    cout << "radius = "<< radius<<" 원 생성"<<endl;
}
double Circle::getArea(){
    return 3.14 *radius*radius;
}

int main(){
    Circle donut;
    double area = donut.getArea();
    cout << "donut's area ="<<area << endl;

    Circle pizza;
    area = pizza.getArea();
    cout << "pizza's area="<<area << endl;

}