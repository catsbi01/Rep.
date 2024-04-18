#include <iostream>
#include "time_of_day.h"

time_of_day tick(time_of_day t){
    t.m++;
    if(t.m == 60){
        t.m = 0;
        t.h = (t.h + 1) % 24;
    } 
    return t;
} 

int main(){
    cout << tick({ 23, 59 }) << '\n';
    return 0;
}