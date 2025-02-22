#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
    int n,m; cin>>n>>m;
    string s1,s2; cin>>s1>>s2;
    int o=0; bool v=false;
    for(int i=0; i<6; i++){
        size_t h=s1.find(s2);
        if(h != string::npos){v=true; break;}
        s1 += s1; o++;
    }
    if(v){cout<<o<<"\n";}
    else{cout<<"-1\n";}
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
