#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define p1(i,n) for(int i=1; i<n; i++)
#define vec vector<int>
#define pb push_back
class K{
    public:
        void solution(){
            int n; cin>>n; vec a;
            f(n){int x; cin>>x; a.pb(x);}
            vec r; r.pb(a[0]);
            p1(i,n){
                if(a[i] >= a[i-1]){r.pb(a[i]);}
                else{
                    if(a[i] > 1){r.pb(1); r.pb(a[i]);}
                    else{r.pb(1); r.pb(1);}
                }
            }
            cout<<r.size()<<"\n";
            p(i,n){cout<<r[i]<<" ";}
            cout<<"\n";
        }
};
int main(){int t; cin>>t; K solve; while(t--){solve.solution();} return 0;}
