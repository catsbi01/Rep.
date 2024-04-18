#include <iostream>
#include "interval.h"

using namespace std;
// igual ou depois de start e exclusivamente antes de end
interval intersection(interval a, interval b){
    interval res;

    if (a.end.h > b.end.h){
        res.end.h = b.end.h;
        res.end.m = b.end.m;
        

    if(a.start.h > b.start.h){
        res.start.h = a.start.h;
        res.start.m = a.start.m;
    }
    else if (a.start.h == b.start.h){ 
        res.start.h = a.start.h;
        if(a.start.m >= b.start.m) res.start.m = a.start.m;
        else res.start.m = b.start.m;
    }
    else if (a.start.h < b.start.h){
        res.start.h = b.start.h;
        res.start.m = b.start.m;
        }
    }
    


    }
    return res;
}


int main(){
    cout << intersection( { { 12, 30 }, { 14, 30 } },
                        { { 17, 30 }, { 18, 30 } } ) << '\n';
    return 0;
}