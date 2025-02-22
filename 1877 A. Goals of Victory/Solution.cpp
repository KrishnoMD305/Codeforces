// 307225221                     22 Feb, 2025, 11:38 AM                    Krishno_MD                       61 ms                            0 KB

// The efficiency is the differences between two playing teams
// So, if the efficiency increases by n then the opposite teams efficiency decreases by n
// So the efficiency of all teams is equal to 0

#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
void solve(){
    int n; cin>>n;
    int s=0;
    f(n-1){
        int a; cin>>a;
        s += a;
    }
    cout<<(-1)*s<<"\n";
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
