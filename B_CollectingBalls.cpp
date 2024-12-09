// https://atcoder.jp/contests/abc074/tasks/abc074_b
#include <bits/stdc++.h>
using namespace std;

int main() {
    // ボールがn個あり，ロボットがn台ずつある
    // k は，タイプbロボットの位置

    int n,k;
    cin >> n;
    cin >> k;

    int d = 0;

    for (int i = 1; i < n + 1; i++){
        int x;
        cin >> x;

        if ( x <= k - x ){
            d += x * 2; 
        }
        else {
            d += (k - x) * 2;
        }
    }

    cout << d << endl;

}