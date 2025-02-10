#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
    string s;cin>>s;
    bool v=false;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){ v=true; break;}
    }
    if(s.size() > 1 && v){cout<<"1"<<"\n";}
    else{cout<<s.size()<<"\n";}
}
int main(){int t; cin>>t; while(t--) {solve();} return 0;}
