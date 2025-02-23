// The common buttons need to press first. This will decide who will win.
// After pressing the common if Anna win, then we have to see that if his own switch is bigger than Kate or not. If bigger then Anna win if small then kate win
// Same for Kate.
//Bexause at the end whose switch is bigger after pressing the common, she will win.

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
            // Checking after pressing common switches who is the winner
            if(c%2 == 0){kat=true;}
            else{anna=true;}
            // Checking at the end who is the winner
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
