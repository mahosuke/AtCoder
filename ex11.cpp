#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
    for (int i = 1; i -1 < N; i++){
        int B;
        string op;
        cin >> op >> B;   

        if ( op == "+" ){
                cout << i << ":" << A + B << endl;
                A += B;
            }
            else if ( op == "-"){
                cout << i << ":" << A - B << endl;
                A -= B;
            } 
            else if ( op == "*"){
                cout << i << ":" << A * B << endl;
                A *= B;
            }
            else if ( op == "/" && B != 0){
                cout << i << ":" << A / B << endl;
                A /= B;
            }
            else {
                cout << "error" << endl;
                break;
            }   
        
    }
}
