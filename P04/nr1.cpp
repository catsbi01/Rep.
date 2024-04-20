#include <iostream>
using namespace std;
/*the function returns the number 
of non-repeated letters in s*/

int nrl(const char s[], char low[]){
    //low and s are c strings terminated by "/0"
    int a[26] = {0};
    for (int i = 0; s[i] != '\0'; i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            a[c - 'a']++;
        } else if(c >= 'A' && c <= 'Z'){
            a[c - 'A']++;
        }
    }
    int r = 0;
    for (int i = 0; i<26; i++){
        if(a[i]==1){
            low[r] = 'a' + i; // ex: 'a' + 2 = 'c'
            r++;
        }
    }
    low[r] == '\0';
    return r;

}

int main(){
    { const char s[] = "  F C U P  F E U P  Porto  ";
  char l[27] = { -1 };
  int r = nrl(s, l);
  cout << '\"' << s << "\" "
       << r << " \"" << l << "\"\n"; }
    return 0;
}
/*neste codigo usamos o numero dos caracteres 
correspondente na tabela ascii para iterar dentro o array de 26 de 
tamanho de forma a saber que caracteres foram apenas usados uma vez, ou seja, onde o valor no array ´e igual a 1;
da mesma forma usamos os valores dos caracteres da tabela ascii para conseguir 
criar uma c string com os caracteres que apenas foram usados 1 vez, usando o 'a' como referencia, 
sendo o primeiro caracter do alfabeto na tabela ascii e adicionando o valor do index do
array a, dando nos assim o caracter que queremos*/
