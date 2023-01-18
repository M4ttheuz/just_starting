#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream zapis ("wyniki3_4.txt");
    ifstream odczyt ("liczby.txt");
    int x, pom;
    int tab[16];
    for(int i = 0; i < 17; i++)
        tab[i] = 0;
    while(odczyt>>x){
        pom = 0;
        while(x > 0){
            pom = x % 16;
            tab[pom]++;
            x = x / 16;
        }
    }
    zapis<<"0: "<<tab[0]<<" "<<"1: "<<tab[1]<<" "<<"2: "<<tab[2]<<" "<<"3: "<<tab[3]<<" "<<"4: "<<tab[4]<<" "<<"5: "<<tab[5]<<" "<<"6: "<<tab[6]<<" "<<"7: "<<tab[7]<<" "<<"8: "<<tab[8]<<" "<<"9: "<<tab[9]<<" "<<"A: "<<tab[10]<<" "<<"B: "<<tab[11]<<" "<<"C: "<<tab[12]<<" "<<"D: "<<tab[13]<<" "<<"E: "<<tab[14]<<" "<<"F: "<<tab[15]<<endl;
}
