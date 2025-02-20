#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
    int n,k; cin>>n>>k;
    vector<int> v,r;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v.push_back(a);
        r.push_back(a);
    }
    sort(r.begin(),r.end());
    if(v==r){cout<<"YES\n"; return;}
    if(k>1){cout<<"YES\n";}
    else{cout<<"NO\n";}
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
