// 324045252
#include<bits/stdc++.h> 
using namespace std;
// Krishno_Mondol_KUET_CSE 
void solve(){
    long long n; cin>>n;
    bool chk = true;
    vector<long long> v(n);
    for(int i=0;i<n;i++){cin>>v[i];}
    if(n==1){cout<<"0"<<endl; return;}
    int a = v[0];
    for(int i : v){
        if(a != i){chk = false;}
    }
    if(chk){cout<<"0"<<endl; return;}
    sort(v.begin(),v.end());
    long long y=v[0],m=1,x=1;
    for(int i=1; i<v.size(); i++){
        if(y==v[i]){
            m++;
            x = max(m,x);
        }else{
            y = v[i];
            m = 1;
        }
    }
    n -= x; 
    long long cnt = 0;
    while(n>0){
        if(x>=n){
            cnt += (1+n);
            break;
        }
        cnt += (1+x);
        n -= x;
        x *= 2;
    }
    cout<<cnt<<endl;
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
