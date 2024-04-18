#include <iostream>
#include "print_array(1).h"

using namespace std;

 int*  merge_arrays(const int a[], int na, const int b[], int nb){
    int* c = new int[na+nb];
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
    return c;
}

int main(){
    { const int NA = 4, NB = 6;
  int a[NA] = { 1, 2, 4, 7};
  int b[NB] = { 0, 3, 5, 6, 8, 9};
  int* c = merge_arrays(a, NA, b, NB);
  print_array(c, NA+NB);
  delete [] c; }
    return 0;
}