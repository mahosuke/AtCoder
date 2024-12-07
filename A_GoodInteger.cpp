#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y,z;
    cin >> n;

    x = n / 1000;
    y = (n - x * 1000) / 100;
    z = (n - x * 1000 - y * 100) / 10;

    if ( (x == y && y == z) || (y == z && z ==  n - x * 1000 - y * 100 - z * 10)){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
