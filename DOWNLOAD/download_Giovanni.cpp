// Territoriali OII 2019 - Gaio Giovanni
// DOWNLOAD - Post Gara
#include <bits/stdc++.h>
using namespace std;

int T;
int N,F,C;
/* N -> spazio nel disco
 * F -> dimensione di un film
 * C -> dimensione di una canzone
 */

ifstream in("input.txt");
ofstream out("output.txt");

int main(){
    in>>T;
    for(int t=1;t<=T;t++){
        in>>N>>F>>C;
        
        out<<"Case #"<<t<<": "<< N/F<<" "<<(N%F)/C<<endl;
    }
    return 0;
}