// 307072836                    21 Feb,2025, 08:25 AM           Krishno_MD                         77 ms                          0 KB

// Here it is forbidden to select index 1. So for a successful sorting there need to be stay 1 at the 1st index. If stay then we can sort every element
// But if there is no 1 in the first index there is no possibility to become the array sorted because for sorting at the 1st there need a 1.

#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
    int n; cin>>n;
    vector<int> v,r;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v.push_back(a);
        r.push_back(a);
    }
    sort(r.begin(),r.end()); // For selecting that the array is already sorted or not 
    if(r==v){
        cout<<"YES\n"; return;
    }
    if(v[0]==1){cout<<"YES\n";}
    else{cout<<"NO\n";}
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
