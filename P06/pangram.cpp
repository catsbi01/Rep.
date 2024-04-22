#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool pangram(const string& s, string& m){
    int count[26] = {0};
    for(char c:s){
        if(c != ' '){
            if (c >='a' && c <= 'z'){
                count[c - 'a']++;
            }
            if (c >='A' && c <= 'Z'){
                count[c - 'A']++;
            }
        }
    }
    for (int i = 0; i<26; i++){
        if(count[i] == 0){
            m += 'a'+ i;
        }
    }
    if(m.empty()) {
        return true;
    } else { 
        return false;
    }
}

int main(){
{ string s = "The quick brown fox jumps over the lazy dog";
  string m = "";
  bool r = pangram(s, m);
  cout << '\"' << s << "\" " 
       << boolalpha << r << " \"" << m << "\"\n"; }
    return 0;
}