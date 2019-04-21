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
        int pers = 0,   // numero di persone rispetto all'inizio
            ma = 0,     // massimo valore di pers
            mi = 0;     // minimo valore di pers
        int tmp;
        while(N--){ //è equivalente a for(int i = 0; i < N; i++), ma più breve da scrivere
            in>>tmp;
            pers += tmp;
            ma = max(pers,ma);
            mi = min(pers,mi);
        }
        // la risposta è ma - mi perchè 
        // quando ho avuto il minimo valore di pers, il numero di persone nella stanza deve essere almeno 0
        // se quello è lo zero, da questo deve essere possibile raggiungere il valore massimo di pers, da questo la risposta

        out<<"Case #"<<t<<": "<<ma - mi<<endl;
    }
    return 0;
}