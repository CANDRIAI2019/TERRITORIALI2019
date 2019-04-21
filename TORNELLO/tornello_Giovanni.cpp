// Territoriali OII 2019 - Gaio Giovanni
// TORNELLO - Post Gara
#include <bits/stdc++.h>
using namespace std;

int T;
int N;

ifstream in("input.txt");
ofstream out("output.txt");

int main(){
    in>>T;
    for(int t=1;t<=T;t++){
        in>>N;
        int pers = 0,ma = 0, mi = 0;
        int tmp;
        while(N--){
            in>>tmp;
            pers += tmp;
            ma = max(pers,ma);
            mi = min(pers,mi);
        }

        out<<"Case #"<<t<<": "<< ma-mi<<endl;
    }
    return 0;
}