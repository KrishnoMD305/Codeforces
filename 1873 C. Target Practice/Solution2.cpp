#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
void solve(){
    char s[10][10];
    p(i,10){p(j,10){cin>>s[i][j];}}
    int c=0;
    p(i,10){p(j,10){if(s[i][j]=='X'){c += min(min(i, 9 - i), min(j, 9 - j)) + 1;}}}
    cout<<c<<"\n";
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
