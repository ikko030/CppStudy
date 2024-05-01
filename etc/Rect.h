//#pragma once
//#include <iostream> 
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}

//using namespace std;
//
//class Vehicle {
//	//public:					//알약을 깜 ㅋㅋ
//	//private:					//한개도 안보여줌 근데 원래도 private임
//	//밖에 보여줄건 그때부터 public해주면 됨	
//	// 근데 이렇게하면 귀찮아서 public대로 private대로 만듦 변수는 private로 법칙으로 하고 함수는 일반적으로 public함
//public:
//	float fuel;
//	int power;
//	// 이렇게 쓰면 안좋음int speed=0;
//	string name;	//명사는 변수, 동사는 함수로 만드는거임 easy
//	int speed;
//
//public:
//	Vehicle();	//생성자	Vehicle(){}	기본생성자가 들어간다			
//	void speed_up();	//동작 어쩔꺼임 => 함수 구언문?을 만들어야함
//	void speed_down();
//
//
//	void go() {}	//지금은 내용 넣고 싶지 않을 떄
//	void stop() {}
//	~Vehicle();	//소멸자 자원을 해제시킨다   네트워크에 있는 자원을 끊게 해준다 ~붙이면 소멸자, 없으면 생성자
//};	//클래스 끝날 때 ;붙어짐
