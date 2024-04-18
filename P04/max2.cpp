#include <iostream>
using namespace std;

int max(const int a[], int n){
    int k = 0;
    for(int i = 0; i < n; i++){
        if(a[k]<=a[i]) k = i;
    }
    return a[k];
}

int main(){

    return 0;
}