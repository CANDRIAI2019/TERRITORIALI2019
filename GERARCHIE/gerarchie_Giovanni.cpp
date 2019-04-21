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
            for(;C[p] != i;p++);

            while(R[p] != -1 and C[p]>C[R[p]]){
                swap(C[p],C[R[p]]);
                p = R[p];
                ans++;
            }
        }

        out<<"Case #"<<t<<": "<<ans<<endl;
    }
    return 0;
}