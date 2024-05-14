/*
개발자도 모르게 복사 생성자가 호출되는 경우들이 있다.
이를 방지하기 위해 묵시적인 복사 생성자를 쓴다.*/

void f(Person person){
    person.changeName("dummy");
}

Person g(){
    Person mother(2, "Jane");
    return mother;
}

int main(){
    Person father(1,"Kitae");   
    Person son = father;        //=> Person son(father) 로 컴파일러가 변환해줌
    f(father);
    g();
}
