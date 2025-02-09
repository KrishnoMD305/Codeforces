#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
        string s;cin>>s;
        int n=s.size();
        if(n==2){cout<<"i"<<"\n"; return;}
        for(int i=0; i<n-2; i++){cout<<s[i];}
        cout<<"i"<<"\n";
}
int main(){int t; cin>>t; while(t--) {solve();} return 0;}
