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
