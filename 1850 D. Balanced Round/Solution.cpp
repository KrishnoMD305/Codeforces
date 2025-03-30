#include<bits/stdc++.h>
using namespace std; 

// Krishno_MD_KUET_CSE

void solve(){
    int n,k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){cin>>v[i];}
    sort(v.begin(),v.end());
    int count = 1,a = 1;
    for(int i=1; i<n; i++){
        if(v[i]-v[i-1] > k){count = 1;}
        else{count++;}
        a = max(a,count);
    }
    cout<<n-a<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
