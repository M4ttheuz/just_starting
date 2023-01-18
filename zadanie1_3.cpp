#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream zapis ("wyniki1_3.txt");
    ifstream odczyt ("mecz.txt");
    int a = 0, b = 0, bmax = 0, amax = 0, passA = 0, passB = 0;
    string x;
    while(odczyt>>x){
        for(int i = 0; i < 9999; i++){
            if(x[i] == 'A'){
                a++;
                if(b > bmax)
                    bmax = b;
            if(b>=10)
                passB++;
                b = 0;
            }
            if(x[i] == 'B'){
                b++;
                if(a > amax)
                    amax = a;
            if(a>=10)
                passA++;
                a = 0;
            }
        }
        zapis<<"Ilosc dobrych pass obu druzyn wynosi: "<<passA+passB<<endl;
        if(amax>bmax)
            zapis<<"Najdluzsza dobra passe miala druzyna A: "<<amax<<endl;
        else
            zapis<<"Najdluzsza dobra passe miala druzyna B: "<<bmax<<endl;
    }
}
