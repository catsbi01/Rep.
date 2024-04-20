#include <iostream>
#include <cstring>
using namespace std;

void trim(char s[]){
int start = 0;
int end = strlen(s)-1;

    while(s[start]==' '){
        start++;
    }

    while(s[end]==' '){
        end--;
    }
    int length = end-start;
    for(int i = 0; i <= length; i++){
        s[i]=s[start+i];
    }
    //c string null terminator
    s[length+1] = '\0';

}

int main(){
{ char s[] = "abc def.   ";
  cout << "\"" << s << "\" => ";
  trim(s);
  cout << "\"" << s << "\"\n"; }
    return 0;
}