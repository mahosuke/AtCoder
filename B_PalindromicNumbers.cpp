// https://atcoder.jp/contests/abc090/tasks/abc090_b
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b;
    cin >> a >> b;

    int c = 0;

    for (int i = a; i < b + 1; i++){
        int m,n,o,p,q;
        
        m = i / 10000;
        n = ( i / 1000 ) % 10;
        o = ( i / 100 ) % 10;     
        p = ( i / 10 ) % 10;   
        q = i % 10;

        if ( m == q && n == p) {
            c++;
        }
        else {
            continue;
        }

        // cout << m << n << o << p << q << endl;
    }

    cout << c << endl;

}