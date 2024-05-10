#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(){radius =1;}
    Circle(int radius){this->radius = radius;}
    void setRadius(int radius){this->radius = radius;}
    double getArea(){return 3.14 * radius * radius;}
};

Circle readRadius(Circle &c){
    int r;
    cout << " radius ? >>";
    cin >> r;
    c.setRadius(r);
}

int main(){
    Circle donut;
    readRadius(donut);
    cout << "donut's Area = "<< donut.getArea() << endl;
}