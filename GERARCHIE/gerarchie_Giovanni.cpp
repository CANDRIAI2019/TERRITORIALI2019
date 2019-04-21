// Territoriali OII 2019 - Gaio Giovanni
// GERARCHIE - Post Gara
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000;

int T;
int N, ans;
int R[MAXN],C[MAXN];

ifstream in("input.txt");
ofstream out("output.txt");

int main(){
    in>>T;
    for(int t=1;t<=T;t++){
        in>>N;
        for(int i=0;i<N;i++)in>>R[i]>>C[i];


        for(int i=N-1;i>=0;i--){
            int p = 0;
            // trovo la persona con competenza `i`, memorizzandone la posizione in p
            for(;C[p] != i;p++);
            
            // faccio salire la persona finchè non arrivo al "capo supremo" oppure la persona sopra
            // è più capace di me
            while(R[p] != -1 and C[p]>C[R[p]]){
                //per risalire la gerarchia scambio le competenze e la posizione diventa quella del superiore
                swap(C[p],C[R[p]]);
                p = R[p];
                ans++;
            }
            // questo metodo funziona, non so bene il perché
        }

        out<<"Case #"<<t<<": "<<ans<<endl;
    }
    return 0;
}