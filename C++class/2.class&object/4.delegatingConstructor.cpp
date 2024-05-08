#include <iostream>
using namespace std;

class Circle{
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};
Circle::Circle():Circle(1){}    //위임 생성자

Circle::Circle(int r){          //타겟 생성자
    radius = r;
    cout << "radius = "<< radius <<" 원 생성"<< endl;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle donut;
    double area = donut.getArea();
    cout <<"donut's area = "<< area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout <<"pizza's area = "<< area << endl;
}