#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
    int t, a, b, c, d, time=-1;
    string wind;
    cin >> t >> a >> b >> c >> d >> wind;
    for (int i = 0; i < t; ++i){
        switch (wind[i])
        {
        case 'E':
            if (a < c){a += 1;}
            break;
        case 'S':
            if (b > d){b -= 1;}
            break;
        case 'W':
            if (a > c)
            {a -= 1;}
            break;
        case 'N':
            if (b < d){b += 1;}
            break;
        default:
            break;
        }
        if (a == c && b == d){
            time = i + 1;
            break;
        }
    }
    cout << time << endl;
}
int main(){solve(); return 0; }
