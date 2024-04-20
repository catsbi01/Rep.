#include <iostream>
#include "fraction.h"
using namespace std;

int euclidean(int a, int b){
    if(b == 0) return a;
    else return euclidean(b, a%b);
}

fraction sum(const fraction fa[], int n) {
    fraction result;
    int sum_num;
    int sum_den;
    fraction initial = fa[0];

    for(int i = 1; i < n; i++){
        int num1 = initial.num * fa[i].den;
        int num2 = fa[i].num * initial.den;
        sum_den = initial.den * fa[i].den;
        sum_num = num1+num2;
        initial.num = sum_num;
        initial.den = sum_den;
    }
    int gcd = euclidean(sum_num, sum_den);
    result.num = sum_num / gcd;
    result.den = sum_den / gcd;
    return result;
}

int main(){
    { const int n = 6;
  const fraction fa[n] { {133,60}, {0, 1}, {1, 2}, {-2, 3}, {3, 4}, {-4, 5} };
  cout << sum(fa, n) << '\n'; }
    return 0;
}