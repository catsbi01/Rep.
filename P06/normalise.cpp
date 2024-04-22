#include <iostream>
#include "print_vector.h"
using namespace std;

template <typename T>
void normalise(vector<T>& v, const T& min, const T& max){
    for (T& x:v){ 
        if(x < min) x = min;
        else if(x > max) x = max;

    }
}


int main(){
{ vector<int> v { 1, 2, 3, 4, 5 }; normalise(v, 3, 4); print(v); }
    return 0;
}