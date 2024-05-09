#include <iostream>
using namespace std;
class Circle{
    int radius;
public:
    Circle(){radius = 1;}
    Circle(int r){radius = r;}
    
    void setRadius(int r){radius = r;}
    double getArea(){return 3.14 * radius * radius;}

};

Circle getCircle(){         //객체 리턴 함수
    Circle tmp(30);
    return tmp;
}

int main(){
    Circle c;
    cout << c.getArea() << endl;

    c= getCircle();
    cout << c.getArea() << endl;
}