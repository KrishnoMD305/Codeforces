// 314437537	      Apr/08/2025 08:54UTC+6	      Krishno_MD	      1909B - Make Almost Equal With Mod	      C++17 (GCC 7-32)	      Accepted	      77 ms	      100 KB

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

// Krishno_MD_KUET_CSE

int uniq_moda(long long *v, long long n, long long r) {
    long long mod_s[2];  
    int count = 0;
    for(long long i=0; i<n; i++){
        long long mod = v[i]%r;
        int found = 0;
        for(int j=0; j<count; j++){
            if(mod_s[j]==mod) {
                found = 1;
                break;
            }
        }
        if(!found){
            if (count == 2){return 0;}
            mod_s[count++] = mod;
        }
    }
    return count == 2;
}

void solution(){
    long long n;
    scanf("%lld",&n);
    long long *v = (long long *)malloc(n*sizeof(long long));
    for(long long i=0; i<n; i++){scanf("%lld",&v[i]);}
    long long r = 2;
    while (1) {
        if (uniq_moda(v, n, r)){break;}
        r *= 2;
    }
    printf("%lld\n", r);
    free(v);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){solution();}
	return 0;
}
