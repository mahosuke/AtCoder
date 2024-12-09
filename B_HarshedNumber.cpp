// https://atcoder.jp/contests/abc080/tasks/abc080_b
// めちゃむずいなおい

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fx = 0;
    int x = n;
    while (x){
    fx += x % 10;
    x /= 10;
    }

    if (fx == 0 ){
        cout << "No" << endl;
    }
    else if (n % fx == 0){
      cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
