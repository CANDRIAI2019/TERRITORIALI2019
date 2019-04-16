// Territoriali OII 2019 - Delugan Kevin
// TEMPLATE - Post Gara
#include <bits/stdc++.h>
using namespace std;

int T,N,M;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main(){
    fin>>T;
    for(int t=1;t<=T;t++){
        fin>>N>>M;

        fout<<"Case #"<<t<<": "<<
            N+M<<"\n";
    }
    return 0;
}
