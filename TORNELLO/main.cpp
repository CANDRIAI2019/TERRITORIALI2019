// Territoriali OII 2019 - Delugan Kevin
// TORNELLI - Post Gara
#include <bits/stdc++.h>
using namespace std;

int T,N,MAXP;
vector<int> C;

ifstream fin("input.txt");
ofstream fout("output.txt");

void tornelli(int index){
    int p=0;
    for(int i=index;i<N;i++){
        p+=C[i];
        MAXP=max(MAXP,p);
    }
}

int main(){
    fin>>T;
    for(int t=1;t<=T;t++){
        fin>>N;
        MAXP=0;
        C.resize(N);
        for(int i=0;i<N;i++)
            fin>>C[i];

        for(int i=0;i<N;i++)
            tornelli(i);

        fout<<"Case #"<<t<<": "<<
            MAXP<<"\n";
    }
    return 0;
}
