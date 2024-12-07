#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;

    if ( b <= n * a ) {    
        cout << b << endl;
    }
    else {
        cout << n * a << endl;
    }
}
