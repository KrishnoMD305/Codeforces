#include<bits/stdc++.h>
using namespace std; 

// Krishno_MD_KUET_CSE

bool comp(const pair<int,int> &a, const pair<int,int> &b){
    return a.second > b.second;
}
void solve(){
    int n; cin>>n;
    vector<pair<int,int>> a,b,c;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        a.push_back({i,x});
    }
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        b.push_back({i,x});
    }
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        c.push_back({i,x});
    }
    sort(a.begin(),a.end(),comp);
    sort(b.begin(),b.end(),comp);
    sort(c.begin(),c.end(),comp);
    int m = 0;
    for (int i = 0; i < min(3, n); i++) {
        for (int j = 0; j < min(3, n); j++) {
            for (int k = 0; k < min(3, n); k++) {
                if (a[i].first != b[j].first && b[j].first != c[k].first && c[k].first != a[i].first) {
                    m = max(m, a[i].second + b[j].second + c[k].second);
                }
            }
        }
    }
    cout<<m<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
