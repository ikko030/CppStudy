//매개 변수 객체의 생성자는 실행x, 소멸자만 실행o => "비대칭 구조"

#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    
    double getArea(){return 3.14 * radius * radius;}
    int getRadius(){return radius;}
    void setRadius(int radius){this->radius = radius;}
};

Circle::Circle(){
    radius = 1;
    cout << "생성자 실행 radius = "<<radius << endl;
}
Circle::Circle(int r){
    radius = r;
    cout << "생성자 실행 radius = "<<radius << endl;
}
Circle::~Circle(){
    cout << "소멸자 실행 radius = "<<radius << endl;
}

void increase(Circle c){
    int r = c.getRadius();
    c.setRadius(r+1);
}

int main(){
    Circle waffle(30);
    increase(waffle);
    cout << waffle.getRadius()<< endl;
}