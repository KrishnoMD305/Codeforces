// 315532506	        Apr/14/2025 11:06UTC+6	        Krishno_MD	        1899B - 250 Thousand Tons of TNT	        GNU C11	        Accepted	        77 ms	        1300 KB

#include<stdio.h>
#include<string.h>
#include<limits.h>

// Krishn0_MD_KUET_CSE

void solution(){
    int n;
    scanf("%d",&n);
    int *v=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d",&v[i]);
    }
    int *div= (int*)malloc((n)*sizeof(int));
    int g=0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            div[g++]=i;
            if(i != n/i){
                div[g++]=n/i;
            }
        }
    }
    long long a=0;
    for(int i=0; i<g; i++){
        long long maxi=0,mini=LLONG_MAX;
        int cnt=0; long long su=0;
        for(int j=0; j<n; j++){
            su+=v[j];
            cnt++;
            if(cnt==div[i]){
                maxi = su>maxi?su:maxi;
                mini=mini<su?mini:su;
                cnt=0;
                su=0;
            }
        } 
        a= a>maxi-mini?a:maxi-mini;

    }
    free(v);
    free(div);
    printf("%lld\n",a);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solution();
    }
    return 0;
}
