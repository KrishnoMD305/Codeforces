// 323980345
#include<bits/stdc++.h> 
using namespace std;
// Krishno_Mondol_KUET_CSE 
#define ll long long
void solve(){
    string s1,s2,ans=""; cin>>s1>>s2;
    int fr[27] = {0};
    for(char ch : s2){
        fr[ch-'A'] += 1;
    }
    reverse(s1.begin(),s1.end());
    for(char ch : s1){
        if(fr[ch-'A']){
            ans += ch;
            fr[ch-'A'] -= 1;
        }
    }
    reverse(ans.begin(),ans.end());
    if(ans==s2){cout<<"YES\n";}
    else{cout<<"NO\n";}
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
