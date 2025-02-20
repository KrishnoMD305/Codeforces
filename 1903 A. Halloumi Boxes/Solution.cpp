// For sorting something there needs at least 2 element from where it can be compared
//So, for sorting k needs to greater than 1
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
    if(v==r){cout<<"YES\n"; return;} // If it already sorted by default, then whether k=1 or what always will be yes
    if(k>1){cout<<"YES\n";}
    else{cout<<"NO\n";}
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
