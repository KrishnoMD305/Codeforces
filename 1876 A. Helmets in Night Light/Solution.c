// 327822813
#include<stdio.h>
#include<stdlib.h>

struct pair{
    long long first;
    long long second;
};

long long min(long long a, long long b){
    return (a<b) ? a : b;
}

int cmp(const void *a, const void *b){
    return ((struct pair*)a)->second - ((struct pair*)b)->second;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long n,p;
        scanf("%lld %lld",&n,&p);
        long long *a = (long long*)malloc(n * sizeof(long long));
        long long *b = (long long*)malloc(n * sizeof(long long));
        for(int i=0; i<n; i++){
            scanf("%lld",&a[i]);
        }
        for(int i=0; i<n; i++){
            scanf("%lld",&b[i]);
        }
        struct pair *vec = (struct pair*)malloc(n * sizeof(struct pair));
        for(int i=0; i<n; i++){
            vec[i].first = a[i];
            vec[i].second = min(p,b[i]);
        }
        qsort(vec,n,sizeof(struct pair),cmp);
        if(p <= vec[0].second){
            printf("%lld\n",p*n);
            continue;
        }
        long long cost = p, people = 1;
        for(int i=0; i<n; i++){
            if(people + vec[i].first >= n){
                cost += (n-people) * vec[i].second;
                break;
            }
            people += vec[i].first;
            cost += vec[i].first * vec[i].second;
        }
        printf("%lld\n",cost);
        free(a);
        free(b);
        free(vec);
    }

    return 0;
}
