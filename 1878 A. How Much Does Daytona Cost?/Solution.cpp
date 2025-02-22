// 307215576                 22 Feb, 2025, 09:24 AM        Krishno_MD                    124 ms                        100 KB

// Subsegment means subarray and subarray can be consist of 1 element
// If the target number appears in the array then it is yes otherwise No

#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
void solve(){
    int n,k; cin>>n>>k;
    vector<int> v;
    f(n){
        int a; cin>>a;
        v.push_back(a);
    }
    bool m=false;
    p(i,n){
        if(v[i]==k){m=true; break;}
    }
    if(m){cout<<"YES\n";}
    else{cout<<"NO\n";}
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
