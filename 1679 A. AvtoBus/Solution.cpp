// 321329933
#include<bits/stdc++.h> 
using namespace std;
// Krishno_Mondol_KUET_CSE
#define ll long long
void solve(){
    ll n; cin>>n;
    if(n%2 != 0){
        cout<<"-1\n";
        return;
    }
    ll mx,mn;
    bool m1=false, m2=false;
    ll t1 = n/4;
    while(t1>=0){
        ll r = n - 4*t1;
        if(r%6==0){
            ll x = r/6;
            mx = x + t1;
            m1 = true;
            break;
        }
        t1--;
    }
    ll t2 = n/6;
    while(t2>=0){
        ll r = n - 6*t2;
        if(r%4==0){
            ll x = r/4;
            mn = x + t2;
            m2 = true;
            break;
        }
        t2--;
    }
    if(m1 && m2){
        cout<<mn<<" "<<mx<<endl;
    }else{
        cout<<"-1\n";
    }
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
