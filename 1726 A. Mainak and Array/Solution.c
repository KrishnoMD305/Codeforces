// 321235414
#include<stdio.h>
#include<limits.h>
//Krishno_Mondol_KUET_CSE
void solve(){
    int n; scanf("%d",&n);
    int v[n];
    for(int i=0; i<n; i++){scanf("%d",&v[i]);}
    int mini = INT_MAX;
    for(int i=0; i<n-1; i++){mini = mini<v[i]?mini:v[i];}
    int maxi = 0;
    maxi = maxi>v[n-1]-mini ? maxi:v[n-1]-mini;
    int mm = 0;
    for(int i=1; i<n; i++){mm = mm>v[i]?mm:v[i];}
    maxi = maxi>mm-v[0]? maxi:mm-v[0];
    for(int i=0; i<n-1; i++){maxi = maxi>v[i]-v[i+1]?maxi:v[i]-v[i+1];}
    printf("%d\n",maxi);
}
int main(){int t; scanf("%d",&t); while(t--){solve();} return 0;}
