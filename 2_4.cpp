#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream zapis ("wyniki2_4.txt");
    ifstream odczyt ("pary.txt");
    int x, y, kopia_y;
    while(odczyt>>x>>y){
        kopia_y = y;
        while(x<y){
            y = y / 2;
            if(y == x)
                zapis<<x<<" "<<kopia_y<<endl;
        }
    }
}
