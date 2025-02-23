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
            ll a,b,c; cin>>a>>b>>c;
            bool anna=false, kat=false;
            
            if(c%2 == 0){kat=true;}
            else{anna=true;}
            
            if(anna){
                if(a>=b){cout<<"First\n";}
                else{cout<<"Second\n";}
            }else{
                if(b>=a){cout<<"Second\n";}
                else{cout<<"First\n";}
            }
        }
};

int main(){
    int t; cin >> t; 
    K solve; 
    while(t--) { solve.solution(); } 
    return 0;
}
