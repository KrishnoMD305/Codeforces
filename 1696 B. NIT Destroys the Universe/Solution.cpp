// 321322546
#include<bits/stdc++.h> 
using namespace std;
// Krishno_Mondol_KUET_CSE
#define ll long long
void solve(){
    int n,cnt=0,z=0; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){cin>>v[i];if(v[i]==0){z++;}}
    if(z==n){cout<<"0\n"; return;}
    int l=0,r=n-1;
    for(int i=0; i<n; i++){
        if(v[i]!=0){
            l=i; break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(v[i]!=0){
            r=i; break;
        }
    }
    bool vad = false;
    for(int i=l; i<=r; i++){
        if(v[i]==0){vad = true;}
    }
    if(vad){
        cnt += 2;
    }else if(!vad){
        cnt += 1;
    }else if(n==1 && v[0]!=0){
        cnt += 1;
    }else if(n==1 && v[0]==0){
        cnt = 0;
    }else{
        cnt += 1;
    }
    cout<<cnt<<endl;
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
