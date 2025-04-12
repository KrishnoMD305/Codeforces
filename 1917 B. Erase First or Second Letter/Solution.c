// 315080296	    Apr/12/2025 10:49UTC+6	    Krishno_MD	    1917B - Erase First or Second Letter	    C++17 (GCC 7-32)	    Accepted	    61 ms	    0 KB

#include<stdio.h>
#include<string.h>

// Krishn0_MD_KUET_CSE

void solution(){
    int n;
    scanf("%d",&n);
    char s[100001];
    scanf("%s",&s);
    int seen[26] = {0};
    int cnt = 0;
    int u = 0;
    for(int i=0; i<n; i++){
        int ind = s[i]-'a';
        if(!seen[ind]){
            seen[ind]=1;
            cnt++;
        }
        u += cnt;
    }
    printf("%d\n",u);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solution();
    }
    return 0;
}
