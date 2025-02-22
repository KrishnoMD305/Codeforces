// 307214275         22 Feb,2025, 09:01 AM         Krishno_MD                124 ms             100 KB

// It is just a work of finding substring. But there will never be more than 5 operations. Or else it is not possible
// That's why the loop is 6 times. If we give more loop it will cause memory and time

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
