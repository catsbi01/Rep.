#include <iostream>
#include "fraction.h"
using namespace std;

int euclidean(int a, int b){
        if(b == 0) return a;
        else return euclidean(b, a % b);
    }

fraction add(fraction a, fraction b){
    fraction result;

    if(a.den == b.den){
        int add_num = a.num + b.num;
        int add_den = a.den;
        int gcd = euclidean(add_num, add_den);

        result.num = add_num/gcd;
        result.den = add_den/gcd;
    } else {
        int add_num = a.num*b.den + b.num* a.den;
        int add_den = a.den * b.den;
        int gcd = euclidean(add_num, add_den);

        result.num = add_num/gcd;
        result.den = add_den/gcd;
    }

    if(result.den < 0){
        result.num *= -1;
        result.den *= -1;
    }

    return result;
}

fraction mul(fraction a, fraction b){
    fraction result;

    int mul_num = a.num*b.num;
    int mul_den = a.den*b.den;
    int gcd = euclidean(mul_num, mul_den);

    result.num = mul_num/gcd;
    result.den = mul_den/gcd;

    if(result.den < 0){
        result.num *= -1;
        result.den *= -1;
    }

    return result;
}

int main(){
{ fraction a { -3, 2 }, b { -2, 3 };
  cout << add(a,b) << ' ' << mul(a,b) << '\n'; }
    return 0;
}