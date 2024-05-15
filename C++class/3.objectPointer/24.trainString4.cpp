#include <iostream>
#include <string>
using namespace std;



int main() {

    string s;
    cout << "4+3*3/2와 같이 사칙연산 문자열을 입력하세요. " << endl;
    getline(cin, s, '\n');

    
    string tmp = "";
    int start = 0;
    double res = 0.0;


    while (true) {

        int opIndex = 0;
        double tmp2 = 1.0;                                      //*와 나머지 연산할려면 초기값이 1이여야 계산 가능
        bool fnum = true;                                       //__head에 대한 변수   ex) 1+2/4일 때, __head = 1     

        //+와 - 연산자 위치 찾기
        int index1 = s.find('+', start);
        if (index1 == -1) index1 = s.find('-', start);
        if (index1 == -1) index1 = s.length();

        string part = s.substr(start, index1 - start);

   
        //일단!
        //우선순위가 높은 *와 / 먼저 계산한다ㅏ.
        while (true) {

            int index2 = part.find('*', opIndex);
            if (index2 == -1) index2 = part.find('/', opIndex);
            if (index2 == -1) index2 = part.length();

            string numStr = part.substr(opIndex, index2 - opIndex);
            double num = stod(numStr);                                    //stod 는 string -> double로 받을라고 사용

            //fnum은 __head같은 느낌
            if (fnum) {
                tmp2 = num;
                fnum = false;           
            }

            //tmp2에 이미 앞의 숫자 채워졌으니까 => tmp2 * num or tmp2 / num
            else { 
                char op = part[opIndex - 1];

                if (op == '*') {
                    tmp2 *= num;
                }

                else if (op == '/') {
                    if (num == 0) {
                        cout << "분모 0은 나눗셈 불가능..." << endl;
                        return 1;
                    }
                    tmp2 /= num;
                }


            }

            if (index2 == part.length())     break;
            opIndex = index2 + 1;
        }

        tmp += to_string(tmp2);             //double -> string 으로 변환
        if (index1 < s.length()) {
            tmp += s[index1];
        }

        if (index1 == s.length())    break;

        start = index1 + 1;
        //*와 /연산 끝!
    }

    // 다시 +와 - 연산  => 값 초기화
    start = 0;
    res = 0.0;
    bool fnum = true;

    while (true) {
        int index1 = tmp.find('+', start);
        if (index1 == -1) index1 = tmp.find('-', start);
        if (index1 == -1) index1 = tmp.length();

        string numStr = tmp.substr(start, index1 - start);
        double num = stod(numStr);                                        //stod 는 double로 받을라고 사용

        
        //fnum은 __head같은 느낌
        if (fnum) {
            res = num;
            fnum = false;
        }


        //tmp에 이미 앞의 숫자 채워졌으니까 => tmp +  num or tmp - num
        else {

            char op = tmp[start - 1];
            if (op == '+') {
                res += num;

            }
            else if (op == '-') {
                res -= num;
            }
        }

        if (index1 == tmp.length())     break;

        start = index1 + 1;
        // +와 - 연산 끝...
    }
    //연산 끝...
    cout <<  res << endl;
    return 0;
}