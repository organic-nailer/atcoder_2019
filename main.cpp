#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define REP(i,n) for(int i = 0; i < n; i++)
#define ALL(v) v.begin(),v.end()
#define In(i) cin >> i;

int main(){
    int N,M,K,A;
    cin >> N >> M;

    int foods[M] = {0};

    for(int i = 0; i < N; i++){
        cin >> K;
        for(int j = 0; j < K; j++){
            cin >> A;
            foods[A-1]++;
        }
    }

    

    int count = 0;

    for(int i = 0; i < M; i++){
        if(foods[i] == N) count++;
    }

    cout << count << endl;
}