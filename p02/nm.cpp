#include <iostream>
using namespace std;

unsigned long next_mersenne(unsigned long n) {
  unsigned long r = 0;
  while (r < n) {
    r = 2 * (r + 1) - 1;
  } 
  return r;
}

int main(){
    cout << next_mersenne(0) << '\n';
    return 0;
}