#include <iostream>
using namespace std;

class Rect{
public:
    int width;
    int height;
    int getArea();
};

int Rect::getArea(){
    return width * height;
}

int main(){
    Rect r;
    r.width =5;
    r.height =6;
    int area = r.getArea();

    cout << "rect's area =" << area << endl;
    
    return 0;
}