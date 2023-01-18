#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

bool isPrime(int a){
    int i, k;
    if (a == 2)
        return true;
    if(a < 2)
        return false;
    if(a % 2 == 0)
        return false;
    k = 3;
    while(k <= sqrt(a)){
        if(a % k == 0)
            return false;
        k = k + 2;
    }
    return true;
}

int main(){
    ofstream zapis ("wyniki3_3.txt");
    ifstream odczyt ("liczby.txt");
    int x, max_glob = 0, lok, min_glob = 1000, max_licz, min_licz;
    while(odczyt>>x){
        lok = 0;
        for(int i = 2; i <= x - i; i++){
                if(isPrime(x-i) == true and isPrime(i) == true)
                    lok++;
        }
        if(lok > max_glob){
            max_glob = lok;
            max_licz = x;
        }
        if(lok < min_glob){
            min_glob = lok;
            min_licz = x;
        }
    }
    zapis<<max_licz<<" "<<max_glob<<endl;
    zapis<<min_licz<<" "<<min_glob<<endl;
}
