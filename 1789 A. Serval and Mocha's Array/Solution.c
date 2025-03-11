#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

// Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define ll long long

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

void solution(){
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    f(n) {
        scanf("%d", &arr[i]);
    } 
    int g = INT_MAX;
    f(n) {
        for(int j = i + 1; j < n; j++){
            int current_gcd = gcd(arr[i], arr[j]);
            if(current_gcd < g){
                g = current_gcd;
            }
        }
    }
    if(g > 2){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    free(arr);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solution();
    }
    return 0;
}
