// 315916811	        Apr/17/2025 12:25UTC+6	        Krishno_MD	        1873E - Building an Aquarium	        GNU C11	        Accepted	        155 ms	        900 KB

#include<stdio.h>
#include<stdlib.h>

// Krishno_MD_KUET_CSE

void solution(){
    long long n,x; scanf("%lld %lld",&n,&x);
    int v[n];
    for(long long i=0; i<n; i++){scanf("%lld",&v[i]);}
    long long ans=-1,hs=1,he=1e10;
    while(hs<=he){
        long long w=0, mid = hs+(he-hs)/2;
        for(long long i=0; i<n; i++){
            if(mid>v[i]){w += (mid-v[i]);}
        }
        if(w<=x){ans=mid; hs=mid+1;}
        else{he=mid-1;}
    }
    printf("%lld\n",ans);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solution();
    }
    return 0;
}
