#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define p1(i,n) for(int i=1; i<n; i++)
#define vec vector<int>
#define pb push_back
#define ll long long

class K{
    public:
        void solution(){
            int n, k, x;
            cin >> n >> k >> x;
            
            if(x != 1){
                cout << "YES\n";
                cout << n << "\n";
                p(i,n){cout << "1 ";}
                cout << "\n";
            }
            else{
                if(k==1 || (k==2 && n%2==1)){cout << "NO\n"; return;}
                else{
                    cout << "YES\n";
                    cout << n/2 << "\n";
                    vec v;
                    if(n%2 == 1){v.pb(3);}
                    else{v.pb(2);}
                    p(i, (n/2 -1)){v.pb(2);}
                    p(i, v.size()){cout << v[i] << " ";}
                    cout << "\n";
                }
            }
        }
};

int main(){
    int t; 
    cin >> t; 
    K solve; 
    while(t--) { solve.solution(); } 
    return 0;
}
