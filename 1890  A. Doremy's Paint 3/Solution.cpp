// 307075558              21 Feb,2025,09:28 AM                   Krishno_MD                         46 ms                           100 KB

// If there are two different kind of number then it can be possible otherwise not
// If in the two different kind number at least one number appear n/2 times then it can be possible or not

#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(i,n) for(int i=0; i<n; i++)
void solve(){
    int n; cin>>n;
    vector<int> v;
    set<int> s;
    f(i,n){
        int a;cin>>a;
        v.push_back(a);
        s.insert(a);
    }
    if(s.size()>2){cout<<"NO\n";}
    else{
        if(s.size()==1){cout<<"YES\n";}
        else if(s.size()==2){
            auto it=s.begin();
            int x= *it; ++it;
            int y= *it;
            int c1=0,c2=0;
            f(i,n){
                if(v[i]==x){c1++;}
                else{c2++;}
            }
          if(c1==n/2 || c2==n/2){cout<<"YES\n";}
          else{cout<<"NO\n";}  
        }
    }
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
