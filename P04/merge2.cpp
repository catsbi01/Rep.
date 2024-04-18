#include <iostream>
#include "print_array(1).h"

using namespace std;

 void merge_arrays(const int a[], int na, const int b[], int nb, int c[]){
    int j = 0;
    int i = 0;
    int k = 0; 
    while (i<na && j<nb){
        if(a[i]<= b[j]){
            c[k] = a[i];
            k++;
            i++;
        } else {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    while (i<na){
        c[k]=a[i];
        k++;
        i++;
    }
    while (j<nb){
        c[k]=b[j];
        k++;
        j++;
    }
}

int main(){
{ const int NA = 3, NB = 2;
  int a[NA] = { 2, 3, 4 };
  int b[NB] = { 0, 1 };
  int c[NA+NB];
  merge_arrays(a, NA, b, NB, c);
  print_array(c, NA+NB); }
    return 0;
}