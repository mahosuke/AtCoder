#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a;
    cin >> b;

    if ( 0 == a * b % 2 ) {    
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }
}
