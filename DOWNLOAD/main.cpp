// Territoriali OII 2019 - Delugan Kevin
// DOWNLOAD - Post Gara
#include <bits/stdc++.h>
using namespace std;

int T,N,a,b;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main(){
    fin>>T;
    for(int t=1;t<=T;t++){
        fin>>N>>a>>b;
        int retA = N/a,
            retB = (N-retA*a)/b;

        fout<<"Case #"<<t<<": "<<
            retA<<" "<<retB<<"\n";
    }
    return 0;
}
