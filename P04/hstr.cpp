//REPETIR IMPORTANTE
#include <iostream>
using namespace std;
/* Nota: os valores que estao a ser usados nos if loops para os 
caracteres, sao os valores da tabela ascii, ou seja
nos queremos que o c - 'A' nso de a distancia entre os dois caracteres tabela ascii
e depois juntmos + 10, pois este ´e o valor pela qual em hexadecimal 
comecamos a usar as letras*/
unsigned long hstr_to_integer(const char hstr[]){
// preciso index p interacao do array
  unsigned long r = 0;
  int i = 0;
  while (hstr[i] != '\0') {
    char c = hstr[i];
    unsigned long v ;
    if (c >= '0' && c <= '9') {
      v = c - '0';
    } 
    else if (c >= 'A' && c <= 'F') {
      v = c + 10 - 'A';
    }
    else {
      v = c + 10 - 'a';
    }
    r = r * 16 + v; 
    i++;
  }
  return r;
}

int main(){
    cout << hstr_to_integer("CafeBabe2022");
    return 0;
}