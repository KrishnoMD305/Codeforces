#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
    string s; cin>>s;
    string t=s;
    sort(t.begin(),t.end());
    vector<char> h; h.push_back(t[0]);
    for(int i=1;i<t.size();i++){
        if(t[i] != t[i-1]){ h.push_back(t[i]); }
    }
    int k=0,c;
    for(int i=0;i<h.size();i++){
        c=0;
        for(int j=0;j<s.size();j++){
            if(h[i]==s[j]){ c++; }
        }
        if(c%2 != 0){ k += c; }
    }
    if(k==0){ cout<<"First"<<"\n";}
    else if(k%2 == 0){cout<<"Second"<<"\n";}
    else{cout<<"First"<<"\n";}
}
int main(){solve(); return 0; }
