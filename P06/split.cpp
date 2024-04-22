#include <iostream>
#include "print_string.h"
#include <vector>
#include <string>
using namespace std;

void split(const string& s, vector<string>& v){
    size_t pos = 0;
    while (pos < s.length()){
        if(s[pos] == ' ') pos++; //encontrar os primeiros
        else{
            size_t end = s.find(' ', pos);
            if(end == string::npos){
                end = s.length();
            }
            v.push_back(s.substr(pos, end - pos));
            pos = end;
        }
    }
}

int main(){

    return 0;
}