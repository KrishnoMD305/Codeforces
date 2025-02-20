#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
    int n,x; cin>>n>>x;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    int max=v[0];
    for(int i=1; i<n; i++){
        int a=v[i]-v[i-1];
        if(a>max){max=a;}
    }
    int b=x-v[n-1];
    if(2*b>max){max=b*2;}
    cout<<max<<"\n";
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
