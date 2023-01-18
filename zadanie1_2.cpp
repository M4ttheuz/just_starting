#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream zapis ("wyniki1_2.txt");
    ifstream odczyt ("mecz.txt");
    int a = 0, b = 0;
    string x;
    while(odczyt>>x){
        for(int i = 0; i < 9999; i++){
            if(x[i] == 'A')
                a++;
            if(x[i] == 'B')
                b++;
            if(a >= 1000 or b >= 1000){
                if(a>b and a-b>=3){
                    zapis<<"A"<<" "<<a<<":"<<b;
                    return 0;
                }
                if(a<b and b-a>=3){
                    zapis<<"B"<<" "<<a<<":"<<b;
                    return 0;
                }
            }
        }
    }
}
