#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a;
    cin >> n;
    cin >> a;

    if ( a >= n % 500 ) {    
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
