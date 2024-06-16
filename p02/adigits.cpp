#include <iostream>
using namespace std;
int adigits(int a, int b, int c){
    int res = 0; 
    if(a >= b && a >= c){
        res += a*100;
        if(b >= c) res += (b*10 + c);
        else res += (c*10 + b);
    } else if (b >= a && b >= c){
        res += b*100;
        if(a >= c) res += (a*10 + c);
        else res += (c*10 + a);
    } else {
        res += c*100;
        if(a >= b) res += (a*10 + b);
        else res += (b *10 + a);
    }
    return res;
}

int main(){
    cout << adigits(9, 1, 9) << '\n';
    return 0;
}