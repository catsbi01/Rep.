#include <iostream>
#include "interval.h"
using namespace std;

bool earlier_than(time_of_day a, time_of_day b) {
  return a.h < b.h || (a.h == b.h && a.m < b.m);
}

interval intersection(interval a, interval b) {
  interval r;
  if (earlier_than(b.start, a.end) &&
      earlier_than(a.start, b.end)) {
    r.start = earlier_than(a.start, b.start) ? b.start : a.start;
    r.end   = earlier_than(a.end, b.end) ? a.end : b.end;
  } else {
    r = { { 0, 0}, { 0, 0 } };
  }
  return r;
}


int main(){
    cout << intersection( { { 23,  0 }, { 23, 58 } },
                      { { 22, 45 }, { 23, 59 } } ) << '\n';
    return 0;
}