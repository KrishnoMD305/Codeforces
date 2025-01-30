//Using backtracking and pruning
// Pruning means cut the unnecessary branch of recursion that's sum is lower than the maxsum

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
void permute(vector<int> &v, int s[5][5], int start, int &maxSum) {
    if (start == v.size()) {
        int t = sum(v, s);
        maxSum = max(maxSum, t);
        return;
    }
    for (int i = start; i < v.size(); i++) {
        swap(v[start], v[i]);
        permute(v, s, start + 1, maxSum);
        swap(v[start], v[i]); 
    }
}
void solve(){
    vector<int> num = {1, 2, 3, 4, 5};
    int s[5][5];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> s[i][j];

    int maxSum = -10000;
    permute(num, s, 0, maxSum);

    cout << maxSum << endl;
}
int main(){solve(); return 0; }
