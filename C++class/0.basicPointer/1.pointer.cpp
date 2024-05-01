#include <iostream>
using namespace std;

//포인터는 실행 중 메모리의 주소 값이다
//"포인터 변수란 주소를 저장하는 변수다!

//*연신자는 포인터 변수를 선언한다!
//&연산자는 실행중인 주소 값을 알아낸다!


int main() {

	int n = 3;

	int* p;
	p = &n;					

	cout << p << endl;      //n의 주소값
	cout << *p << endl;     //n값


	return 0;
}