#include<bits/stdc++.h>
using namespace std; 
#define ll long long

// Krishno_MD_KUET_CSE

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    ll tot = 0;
    for(int i=0; i<m; i++){
        vector<int> col(n);
        for(int j=0; j<n; j++){
            col[j] = v[j][i];
        }
        sort(col.begin(),col.end());
        ll pre = 0;
        for(int k=0; k<n; k++){
            tot += k*(ll)col[k] - pre;
            pre += col[k];
        }
    }
    cout<<tot<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
