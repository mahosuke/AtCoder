// https://atcoder.jp/contests/abc049/tasks/abc049_a

#include <bits/stdc++.h>
using namespace std;

int main() {
  string c;
  cin >> c;

  if ( c == "a" || c == "e" || c == "i" || c == "o" || c == "u" ){
    cout << "vowel" << endl;
  }
  else {
    cout << "consonant" << endl;
  }

}
