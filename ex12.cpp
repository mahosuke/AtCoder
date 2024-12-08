#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
    int a = 1;
    
    for (int i=1; i < S.size(); i++) {

        if ( i % 2 == 0) {
            if ( S.at( i - 1  ) == '+'){
                a++;
            }
            else {
            a --;
            }
        }
        else { continue; }


    }   
    
    cout << a << endl;

}
