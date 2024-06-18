#include <iostream>
#include "time_of_day.h"
using namespace std;

time_of_day tick(time_of_day t){
    t.m++;
    if(t.m == 60){
        t.h++;
        t.m = 0;
    }
    if(t.h == 24){
        t.h = 0;
    }
    return t;
}

int main(){

    return 0;
}