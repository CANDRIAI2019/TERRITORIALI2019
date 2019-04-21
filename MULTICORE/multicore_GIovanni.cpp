// Territoriali OII 2019 - Gaio Giovanni
// MULTICORE - Post Gara
#include <bits/stdc++.h>
using namespace std;

const int MAXC = 60007;

int T;
int N,B,ans;
int C[MAXC];

ifstream in("input.txt");
ofstream out("output.txt");

int main(){
    in>>T;
    for(int t=1;t<=T;t++){
        in>>N>>B;
        
        for(int i = MAXC-1;i>=0;i--)C[i] = -1;
        C[0] = 0;

        for(int j = 0;j < N;j++){
            int Nc,P;
            in>>Nc>>P;
            for(int i = MAXC-1;i>=0;i--){
                if(C[i] != -1){
                    if(C[i+Nc]!=-1)
                        C[i+Nc] = min(C[i+Nc], C[i] + P);
                    else 
                        C[i+Nc] = C[i] + P;
                }
            }
        }

        for(ans = MAXC-1;C[ans] == -1 or C[ans] > B;ans--);

        out<<"Case #"<<t<<": "<<ans<<endl;
    }
    return 0;
}