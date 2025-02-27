// 308020876             27 Feb,2025, 10:32 AM                     Krishno_MD                               46 ms                              100 KB

/*The problem is about considering the least amount of cases possible. I propose the following options.
If x≠1, then you can always print n ones. So the answer is YES.
If k=1, then no integer is available, so the answer is NO.
If k=2, then only 2 is available, so you can only collect even n. So if it's odd, the answer is NO. 

Otherwise, you can always collect n with the following construction: if n is even then take 2, otherwise take 3. Then take ⌊n2⌋−1 twos. You can see that an even n only uses twos, so 
it fits the previous check. If it's odd, then k is at least 3, so 3 is allowed to take.*/

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
