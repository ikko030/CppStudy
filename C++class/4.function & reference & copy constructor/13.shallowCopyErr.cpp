//얕은 복사 생성자를 사용한 대표적인 에러
#define _CRT_SECURE_NO_WARNINGS     //비쥬얼 스튜디오 컴파일할 때 strcpy() 에러 방지
#include <iostream>
#include <string>
using namespace std;

class Person{
    char * name;
    int id;

public:
    Person(int id, const char* name);
    ~Person();

    void ChangeName(const chat* name);
    void show(){cout << id << ',' << name << endl;}
};

Person::Person(int id, const char*name){
    this->id - id;
    int len = strlen(name);     //name의 문자 개수
    this-> name = new char [len+1];
    strcpy(this->name, name);   //name 문자열 복사
}

Person::~Person(){
    if(name)    delete [] name;     //name에 동적 할당된 배열이 있다면
}

void Person::ChangeName(const* name){
    if(strlen(name) > strlen(this->name))   return;
    strcpy(this->name, name);
}

int main(){
    Person father(1,"Kitae");
    Person daughter(father);

    cout << "daughter 객체 생성 직후 ---" << endl;

    father.show();
    daughter.show();

    daughter.ChangeName("Grace");

    cout << "daughter 이름을 Grace로 변경한 후 ---" << endl;
    father.show();
    daughter.show();

    //포인터가 향하는 값이 같아서 소멸자가 실행될 떼,
    //father 소멸 정상 작동o
    //daughter 소멸 비정상 작동...
}