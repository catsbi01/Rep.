#include <iostream>
#include <cmath>
#include "complex.h"
using namespace std;

void add(const complex& a, const complex& b, complex& r){
    r.x = a.x + b.x;
    r.y = a.y + b.y;
}

void mul(const complex& a, const complex& b, complex& r){
    r.x = a.x*b.x - a.y*b.y;
    r.y = a.x*b.y + b.x*a.y;
}

double norm(const complex& c){
    return sqrt(c.x*c.x + c.y*c.y);
}

int main(){
{ complex a { 2, 0 }, b { 2.5, -3.1}, s, m;
  add(a, b, s); 
  mul(a, b, m);
  cout << s << ' ' << m << ' ' << norm(s) << ' ' << norm(m) << '\n'; }
    return 0;
}