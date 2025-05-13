// 319489695	        May/13/2025 15:40UTC+6	        Krishno_MD	        1875A - Jellyfish and Undertale	        GNU C11	        Accepted	        92 ms	        100 KB

#include<stdio.h>
//Krishno_Mondol_KUET_CSE
void solve(){
    long long a,b,n; scanf("%lld %lld %lld",&a,&b,&n);
    int v[n];
    for(int i=0; i<n; i++){scanf("%d",&v[i]);}
    long long s = (b==1?0:(b-1));
    for(int i=0; i<n; i++){
        if(v[i]+1<=a){s += v[i];}
        else{s += (a-1);}
    }
    printf("%lld\n",s+1);
}
int main(){int t; scanf("%d",&t); while(t--){solve();} return 0;}


/* The bomb count will always need to become 1. Because when 1 to 0 it explodes. Lets assume the time is s.
The b is the initial time when the countdown start. So at first the s will be b-1 (The time taken from b to 1). 
Then we will add the elements to s.   */ 
