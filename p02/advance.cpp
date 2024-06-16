#include <iostream>
using namespace std;

bool leap_year(int y){
    return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);    
}

int days_in_month(int m, int y){
    int day;
    switch(m){
        case 2:
            day = leap_year(y) ? 29 : 28;
            break;
        case 1: case 3: case 5: case 7: case 8:
        case 10: case 12:
            day = 31;
            break;
        default:
            day = 30;
    }
    return day;
}

void advance(int delta, int& d, int& m, int& y){
    int last_day = days_in_month(m, y);
    for(int i = 1; i <= delta; i++){
        if(d < last_day){
            d++;
        } else {
            d = 1;
            if(m < 12){
                m++;
            } else {
                m = 1;
                y++;
            }
            last_day = days_in_month(m, y);
        }
    }
}

int main(){
    { int d = 2, m = 12, y = 1900; 
  advance(365 + 5, d, m, y); 
  cout << d << ' ' << m << ' ' << y << '\n'; }
    return 0;
}