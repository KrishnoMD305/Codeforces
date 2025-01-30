//Using direct function to generate all combination from algorithm library

#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
int sum(vector<int> &v,int s[5][5]){
    int s1=s[v[0]-1][v[1]-1]+s[v[1]-1][v[0]-1]+s[v[2]-1][v[3]-1]+s[v[3]-1][v[2]-1];
    int s2=s[v[1]-1][v[2]-1]+s[v[2]-1][v[1]-1]+s[v[3]-1][v[4]-1]+s[v[4]-1][v[3]-1];
    int s3=s[v[2]-1][v[3]-1]+s[v[3]-1][v[2]-1];
    int s4=s[v[3]-1][v[4]-1]+s[v[4]-1][v[3]-1];
    return s1+s2+s3+s4;
}
void solve(){
    vector<int> num = {1, 2, 3, 4, 5};
    int s[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> s[i][j];

    int maxSum = -10000;
    do{
        int t=sum(num,s);
        if(t>maxSum){
            maxSum=t;
        }
    }while(next_permutation(num.begin(),num.end()));
    cout << maxSum << endl;
}
int main(){solve(); return 0; }
