#include <iostream>
using namespace std;

int n;
char c;
double d;

int *p = &n;
int *q = &c;
int *t = &d;

*p = 25;        //n에 25저장됨          n과 *p는 같은 값을 가짐
*q = 'A';       //q에 A저장됨
*t = 3.14;      //t에 3.14저장됨

m = *p + 10;    //m은 35