#include <iostream>
#include "complex.h"
#include <cmath>
using namespace std;

void add(const complex& a, const complex& b, complex& r){
    r.x = a.x + b.x; 
    r.y = a.y + b.y;

}
void mul(const complex& a, const complex& b, complex& r){
    r.x = (a.x*b.x) - (a.y*b.y);
    r.y = (a.x*b.y) + (b.x*a.y);
}
double norm(const complex& c){
    return sqrt(c.x*c.x + c.y*c.y);
}

void mandelbrot(const complex& c, unsigned int n, complex& z_n){
    if(n == 0){
        z_n.x = 0;
        z_n.y = 0;
    } else {
        for (unsigned int i = 1; i <= n; i++){
            complex z_n2;
            mul(z_n, z_n, z_n2);
            add(z_n2, c, z_n);
        }
    }
}
int main(){
    { complex z_n;
  mandelbrot({0.1, 3.2}, 4, z_n);
  cout << z_n << '\n'; }
    return 0;
}