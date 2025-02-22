#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define vec vector<int>
#define pb push_back
class K{
    public:
        void solution(){
            int n; cin>>n;
            vec a;
            f(n){int k; cin>>k; a.pb(k);}
            int m=abs(a[0]);
            if(m==0){cout<<"0\n"; return;}
            p(i,n){
                if(a[i]==0){cout<<"0\n"; return;}
                else{int g=abs(a[i]); if(g<m){m=g;}}
            }
            cout<<abs(m)<<"\n";
        }
};
int main(){K solve; solve.solution(); return 0;}
