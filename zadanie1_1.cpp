#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream zapis ("wyniki1_1.txt");
    ifstream odczyt ("mecz.txt");
    int licz = 0;
    string x;
    while(odczyt>>x){
        for(int i = 0; i < 9999; i++)
            if(x[i] != x[i+1])
                licz++;
    }
    zapis<<licz<<endl;
}
