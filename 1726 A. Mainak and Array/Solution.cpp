// 321232663
#include<bits/stdc++.h>
using namespace std;
// Krishno_Mondol_KUET_CSE
#define ll long long
void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){cin>>v[i];}
    int mini = INT_MAX;
    for(int i=0; i<n-1; i++){
        mini = min(mini,v[i]);
    }
    int maxi = 0;
    maxi = max(maxi,v[n-1]-mini);
    int mm = 0;
    for(int i=1; i<n; i++){
        mm = max(mm,v[i]);
    }
    maxi = max(maxi,mm-v[0]);
    for(int i=0; i<n-1; i++){
        maxi = max(maxi,v[i]-v[i+1]);
    }
    cout<<maxi<<endl;
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
