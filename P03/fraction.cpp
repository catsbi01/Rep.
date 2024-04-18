#include <iostream>
#include "fraction.h"

using namespace std;
int euclidean(int a, int b){
    if (b == 0){
        return a;
   } else {
    return euclidean(b, a % b);
   }
}


fraction add(fraction a, fraction b){
    fraction result;
    
    int res_num = (a.num*b.den)+(b.num*a.den);
    int res_den = (a.den*b.den);
    int gcd = euclidean(res_num, res_den); //aqui vemos qual e o gcd
    result.num = res_num/ gcd;
    result.den = res_den/ gcd;//assim temos a fracao na forma irredutivel
    
    if(result.den < 0){
        result.den *= -1;
        result.num *= -1;
    } 

    return result;
}

fraction mul(fraction a, fraction b){
    fraction result;

    int res_num = a.num * b.num;
    int res_den = a.den * b.den;
    int gcd = euclidean(res_num, res_den);
    result.num = res_num/ gcd;
    result.den = res_den/ gcd;

    if(result.den < 0){
        result.den *= -1;
        result.num *= -1;
    } 

    return result;
}
int main(){
    return 0;
}