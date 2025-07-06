// 324901721
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c; cin>>a>>b>>c;
    if((a+2*(b-a))>=c && (a+2*(b-a))%c==0 && (a+2*(b-a))!=0){cout<<"YES\n"; return;}
    if((2*b-c)>=a && (2*b-c)%a==0 && (2*b-c)!=0){cout<<"YES\n"; return;}
    if((a+(c-a)/2)>=b && (c-a)%2==0 && (a+(c-a)/2)%b==0 && (a+(c-a)/2)!=0){cout<<"YES\n"; return;}
    cout<<"NO\n";
}
int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){solve();}
    return 0;
}
